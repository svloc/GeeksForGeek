
sort(arr,arr+n);
for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+2;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                v.push_back(arr[i]);
                v.push_back(arr[j]);
                v.push_back(arr[k]);
                return v;
                }
            }
        }
        
    }