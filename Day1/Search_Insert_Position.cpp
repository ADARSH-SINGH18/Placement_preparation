/*Given an sorted array arr of size n and an integer key. If the target exists in the array, return its index. 
If not, return the index where it would be if it were inserted in order.*/
//devnest
int bin(vector<int> arr,int l,int r, int key){
    if(l<r){
        int mid=(l+r)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) return bin(arr,l,mid-1,key);
        else return bin(arr,mid+1,r,key);
    }
    else{
        if(key>arr[r]) return r+1;
        else if(key<arr[l]) return l;
        else return r;
    }    
}
int solve(int n, vector<int> arr, int key){
//CODE HERE
return bin(arr,0,n-1,key);
}
