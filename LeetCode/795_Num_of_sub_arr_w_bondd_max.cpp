int n = nums.size();
       int j=0;// starting point
       int ans = 0;// le ri ber korar por store korvh 
       int prev_cnt =0;
       for(int i=0;i<n;i++)// traverse [2,1,4,3]
       {
        // i current pointer 
           if(nums[i] >= left && nums[i] <= right){ // maximum possible ,,because self respective 
               ans = ans + (i-j+1);
               prev_cnt =(i-j+1);
           }
           else if(nums[i] < left){
               ans+= prev_cnt;
           }else{ // nums[i] > right
              j = i+1;
              prev_cnt = 0;
           }
       }

       return ans;