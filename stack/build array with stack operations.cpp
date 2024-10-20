// 1441 Build an array with stack operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i=0;
        int stream=1;
        vector<string>result;

        while(stream <= n && i<target.size()){
            result.push_back("Push");

            if(stream != target[i]){
                result.push_back("Pop");
                stream++;
            }else{
                stream++;
                i++;
            }
        }
        return result;
        }
};


