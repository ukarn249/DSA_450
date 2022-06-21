// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> v;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                v.push_back(arr[i]);
            }
        }
        int k = v.size();
        
        vector<int> v1;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                v1.push_back(arr[i]);
            }
        }
        int l = v1.size();
        int m = 0;
        for(int i=0;i<k;i++){
            arr[i] = v[i];
        }
        for(int i=k;i<l+k;i++){
            arr[i] = v1[m++];
        }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends
