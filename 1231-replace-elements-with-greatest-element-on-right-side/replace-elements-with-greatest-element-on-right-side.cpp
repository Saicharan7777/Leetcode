class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int s=arr[n-1],m=0;
        arr[n-1]=-1;
        for(int i=n-2;i>=0;i--)
        {
            m=arr[i];
            arr[i]=s;
            s=max(arr[i],m);
        }
        return arr;
    }  
}; 