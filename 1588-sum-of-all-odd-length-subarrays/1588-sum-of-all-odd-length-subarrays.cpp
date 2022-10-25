class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
//         vector<int>prefix(arr.size()+1,0);
//         for(int i=1;i<=arr.size();i++){
//             prefix[i] = arr[i-1] + prefix[i-1];
//         }
        
//         int sum=0;
        
//         for(int i=0;i<arr.size();i++){
//             vector<int>temp;
//             for(int j=i;j<arr.size();j++){
//                 temp.push_back(arr[j]);
//                 if(temp.size() % 2){
//                   sum += (prefix[j+1] - prefix[i]);
//                 }
//             }
//         }
        
//         return sum;
        
        int sum = 0,n=arr.size();
        
        for(int i=0;i<arr.size();i++){
            int contri = ceil(((i+1)*(n-i))/2.0);
            sum += (contri*arr[i]);
        }
        
        return sum;
    }
};