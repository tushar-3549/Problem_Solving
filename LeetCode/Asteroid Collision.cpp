class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (auto x : asteroids) {
            while (!st.empty() && st.top() > 0 && x < 0) {
                int tp = st.top();
                //st.pop();

                if (abs(x) > tp) {
                    //st.push(x);
                    st.pop();
                } 
                else if(abs(x)<tp){
                    x=0;
                }
                
                else if (abs(x) == tp) {
                    st.pop();
                    x = 0;
                    break;
                }
            }
            if (x != 0) {
                st.push(x);
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};
