class Solution {
public:
    vector<vector<string>>ans;
    bool issafe(int row,int col,vector<string>board,int n){
        int dprow=row;
        int dpcol=col;
        
        
        //uppr diagonal
        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        row=dprow;
        col=dpcol;
        
        //same row
        
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        col=dpcol;
        
        //lower diagonal
        
        
        while(col>=0 && row<n){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
            row++;
        }
        return true;
    }
    void tof(int col,vector<string>&board,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,board,n)){
                board[row][col]='Q';
                tof(col+1,board,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
       string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        tof(0,board,n);
        return ans;
    }
};