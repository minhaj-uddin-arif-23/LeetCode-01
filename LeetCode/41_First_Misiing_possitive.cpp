 
//  Input: nums = [1,2,0]
// Output: 3
// Explanation: The numbers in the range [1,2] are all in the arrayint n = nums.length;
        // mapping system 
        int i=0;
        while(i<n){
            if(nums[i] == i+1){ // num jodi soman take index borabor except 0
                i++;
                continue;
            }
            
            if(nums[i] <=0 || nums[i] > n){ // somam nah take aith
                i++;
                continue;
            }

            int idx1 = i;
            int idx2 = nums[i] -1;

            if(nums[idx1] == nums[idx2]){
                i++;
                continue;
            }
            //  swap 
            int tmp = nums[idx1];
            nums[idx1] = nums[idx2];
            nums[idx2] = tmp;
        }

        for(int j=0;j<n;j++){
            if(nums[j] != j+1){
                return j+1;
            }
        }
        return n+1;