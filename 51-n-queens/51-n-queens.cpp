class Solution {

public:
    void solve(int col,vector<string>&board,vector<vector<string>> &ans,vector<int> &leftRow,vector<int>&upperDiagonal,vector<int> &lowerDiagonal,int n)
    
    
    {
        // Base case
            
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++){
            
//             condition to check whether the hash position of queen is previously occupied or not. 
                
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                
//                 if the given position satisfy the above condition,adding queen to board and hashing the direction array 
                
                board[row][col] ='Q';
                leftRow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+col-row]=1;
                
                // calling the recursive function for the next column
                solve(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
                
                // to try for the next possible position,we have to remove the previoulsy added queen and unhash the array.This is what the backtrackin means
                 
                board[row][col] ='.';
                leftRow[row]=0;
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+col-row]=0;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
     
        // creating vector of vector to store ans
        
    vector<vector<string>>ans;
        
        // creating vector board with size n
        
        vector<string>board(n);
        
        // creating empty string of rows of size n and adding it to board
        
        
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        // creating vector of possible direction in which queen can attack.we use it to has the position of queen.
            
        // explanation for taking this size of array is mention in notes
            
      vector<int>leftRow(n,0),upperDiagonal(n*2-1,0),lowerDiagonal(2*n-1,0);
        
        solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
        return ans;
    }

};