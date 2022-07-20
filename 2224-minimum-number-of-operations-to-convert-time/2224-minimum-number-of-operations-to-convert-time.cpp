class Solution {
public:
    int stoi(string s,int i,int j){
 
            return (s[i]-'0')*10+(s[j]-'0');
        
    }
    int convertTime(string curr, string corr) {
     int h1=stoi(curr,0,1);
        int h2=stoi(corr,0,1);
        int m1=stoi(curr,3,4);
        int m2=stoi(corr,3,4);
        cout<<h2<<endl;
        int h=h2-h1;
        if(h<0){
            h=24+h;
        }
        int m=m2-m1;
        if(m<0)
        {
            m=60+m;
            h--;
        }
        int cnt=h;
        while(m>=15){
            
                m-=15;
                cnt++;
            
            
        }
        while(m>=5){
            m-=5;
            cnt++;
        }
        while(m>=1){
            m-=1;
            cnt++;
        }
        return cnt;
    }
};