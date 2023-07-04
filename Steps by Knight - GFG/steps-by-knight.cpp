//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    int vis[1001][1001],dis[1001][1001];
    queue<pair<int,int>>q;
    bool isvalid(int x,int y,int n){
        if(x<1 || y<1 || x>n || y>n){
            return false;
        }
        if(vis[x][y]==1){
            return false;
        }
        return true;
    }
    int dx[8]={-1,-2,-2,-1,1,1,2,2};
    int dy[8]={-2,-1,1,2,-2,2,-1,1};
    
    int bfs(int x,int y,int targetx,int targety,int n ){
        vis[x][y]=1;
        dis[x][y]=0;
        q.push({x,y});
        while(!q.empty()){
            int currx=q.front().first;
            int curry=q.front().second;
            q.pop();
            for(int i=0;i<8;i++){
                int newx=currx+dx[i];
                int newy=curry+dy[i];
                if(isvalid(newx,newy,n)){
                    dis[newx][newy]=dis[currx][curry]+1;
                      vis[newx][newy]=1;
                    if(newx==targetx && newy==targety){
                        return dis[targetx][targety];
                        
                    }
                  
                    q.push({newx,newy});
                }
            }
        }
        
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int srcx=KnightPos[0];
	    int srcy=KnightPos[1];
	    int targetx=TargetPos[0];
	    int targety=TargetPos[1];
	    if(srcx==targetx && srcy==targety){
	        return 0;
	    }
	    for(int i=1;i<=N;i++){
	        for(int j=1;j<=N;j++){
	            vis[i][j]=0;
	            dis[i][j]=0;
	        }
	    }
	  
	 int c=bfs(srcx,srcy,targetx,targety,N);
	return c;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends