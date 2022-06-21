// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    /*void swap(int *x, int *y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }*/
    void sort012(int a[], int n)
    {
        int ans[n];
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count0++;
            }
            else if(a[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        int i=0;
        while(i<count0){
            ans[i]=0;
            i++;
        }
        while(i<count1+count0){
            ans[i]=1;
            i++;
        }
        while(i<n){
            ans[i]=2;
            i++;
        }
        for(int i=0;i<n;i++){
            a[i]=ans[i];
        }
    }
   
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
