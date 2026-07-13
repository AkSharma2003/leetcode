class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int m=to_string(low).length();
        int n=to_string(high).length();
        vector<int> v;

        string s="123456789";
        for(int i=m;i<=n;i++){
            for(int j=0;j+i<=9;j++){
                string str=s.substr(j,i);
                int num=stoi(str);
                if(num>=low && num<=high) v.push_back(num);
            }
        }
        return v;
    }
};