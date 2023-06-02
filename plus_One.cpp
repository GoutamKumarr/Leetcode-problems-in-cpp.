lass Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=1;
        int n=digits.size()-1;
        vector<int>v;
        int i=n;
        while(i>=0){
            if(sum+digits[i]>9){
                v.push_back((sum+digits[i])%10);
                sum=1;
            }else{
                v.push_back(sum+digits[i]);
                sum=0;
            }
            i--;
        }
        if(sum==1){
            v.push_back(1);
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
};