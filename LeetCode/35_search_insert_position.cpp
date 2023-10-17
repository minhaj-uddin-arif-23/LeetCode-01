   /// ohoo its a Binary serch Problem target ber kora 
   int n = nums.size();
        if(n==0) return 0;

        int l=0,r=n-1,mid;
        while(l <= r){
            mid = (l+r)/2;
            if(nums[mid] == target) 
            {
                return mid;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            } 
            else{
                r = mid -1;
            }
        }
        return l;