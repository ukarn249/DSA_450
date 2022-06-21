int doUnion(int a[], int n, int b[], int m) {
    set<int> s;
    for (int i = 0;i < n;i++) s.insert(a[i]);
    for (int i = 0;i < m;i++) s.insert(b[i]);
    return s.size();
}
};
int doIntersection(int a[], int n, int b[], int m) {
   if(n>m){
            swap(a,b);
            swap(n,m);
        }
        int ans = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
    
        for(int i=0;i<m;i++){
            if(mp.find(b[i])!=mp.end()){
                mp.erase(b[i]);
                ans++;
            }
        }
        return ans;    
    }
};
