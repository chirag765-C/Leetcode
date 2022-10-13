class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int>v;
        int llv=1;
        int cval=0;
        while(cval<label){
            cval+=llv;
            llv*=2;
        }
        llv=llv/2;
        while(label!=1){
            v.push_back(label);
            int comp=3*llv-label-1;
            int parent=comp/2;
            label=parent;
            llv=llv/2;
        }
        v.push_back(1);
        reverse(v.begin(),v.end());
        return v;
    }
};