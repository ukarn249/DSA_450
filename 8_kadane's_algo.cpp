long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int currSum = arr[0];
        int maxSum = arr[0];
        
        for(int i=1;i<n;i++){
            currSum = max(arr[i], currSum+arr[i]);
            if(currSum > maxSum){
                maxSum = currSum;
            }
        }
        return maxSum;
        
    }
