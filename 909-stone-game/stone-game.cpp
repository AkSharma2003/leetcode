class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        deque<int> dq;
        for(int i:piles){
            dq.push_back(i);
        }
        int alice=0,bob=0;
        bool flag=true;
        while(!dq.empty()){
            if(flag){
                if(dq.front()>dq.back()){
                    alice+=dq.front();
                    dq.pop_front();
                }
                else{
                    alice+=dq.back();
                    dq.pop_back();
                }
                flag=false;
            }
            else{
                if(dq.front()<dq.back()){
                    alice+=dq.front();
                    dq.pop_front();
                }
                else{
                    alice+=dq.back();
                    dq.pop_back();
                }
                flag=true;
            }
        }
        if(alice>bob) return true;
        return false;
    }
};