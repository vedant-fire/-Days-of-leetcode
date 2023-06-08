class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size()-1;i++){
            int a=abs(arr[i-1]-arr[i]);
            int b=abs(arr[i]-arr[i+1]);
            if(a!=b)return false;
        }
        return true;
    }
};
