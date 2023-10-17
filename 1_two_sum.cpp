  // int n=nums.size();
  //       vector<pair<int,int>> v;
  //       for(int i=0;i<n;i++)
  //       v.push_back({nums[i],i});
  //       sort(v.begin(),v.end());
  //       int s=0,e=n-1;
  //       while(s<=e)
  //       {
  //           int sum=v[s].first+v[e].first;
  //           if(sum==target) return {v[s].second,v[e].second};
  //           else if(sum>target)e--;
  //           else s++;
  //       }
        // return {-1,-1};
        // 9...palindrome number:
        // int x=121;121;
        // string s=to_string(x);
        // string comp=s;
        // reverse(s.begin(),s.end());
        // if(s==comp) return true;
        // else return false;
        // ....Reverse integer....
        //    int rev=0;
        // while(x != 0)
        // {
        //     int m=x%10;
        //     x=x/10;
        //    rev= (rev*10)+m;
        // }
        // return rev;