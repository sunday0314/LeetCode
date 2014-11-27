vector<vector<int> > threeSum(vector<int> &num) {
     vector<vector<int> > result;
     if (num.size() < 3)
          return result;
     sort(num.begin(), num.end());
     for (size_t i = 0; i < num.size()-2;)
     {
          int j = i+1;
          int k = num.size()-1;
          int twoSum = 0 - num[i];
          while (k > j)
          {
               if (num[j]+num[k] < twoSum)
                    j++;
               else if (num[j]+num[k] == twoSum)
               {
                    vector<int> tmp;
                    tmp.push_back(num[i]);
                    tmp.push_back(num[j]);
                    tmp.push_back(num[k]);
                    result.push_back(tmp);
                    do { j++; }while (j < k && num[j - 1] == num[j]);
                    do { k--; }while (j < k && num[k + 1] == num[k]);
               }
               else
                    k--;
          }
          do{ i++; }while (i < num.size() - 1 && num[i - 1] == num[i]);
     }
     return result;
}