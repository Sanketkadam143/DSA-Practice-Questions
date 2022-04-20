class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve (board);
        
    }
    
    bool solve(vector<vector<char>>& board){
        
        // traverse in a matrix(rows and columns)
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                
                // check if the block is empty
                
               if(board[i][j]=='.'){
                   
                   // if the block empty,try placing 1-9
                       
                   for(char c='1';c<='9';c++){
                       
                       // checkbox to check whether the digit is safe to place i.e it follows all rules
                           
                       if(isValid(board,i,j,c)){
                           
                           // if the digit satisfies all rules add it to board
                           
                           board[i][j]=c;
                           
                           // calling the function again and checking whether it satisfies 
                               
                           if(solve(board)==true)
                               return true;
                           
                           // if board return false means that digit doesnt going to satisfy the the rules so                                 remove it
                               
                           else
                               board[i][j]='.';
                       }
                   }
                   // given digit doesn't satisfy the board so 
                   
                   return false;
               } 
            }
        }
        
        // if we didn't go inside for loop it means that board is completely fill so return true
        
        return true;
    }
    
    // function to whether it is place to place given digit in empty place
    
    bool isValid(vector<vector<char>> &board,int row,int col,char c){
        
        for(int i=0;i<9;i++){
            
            // check whether its present in column
            
            if(board[i][col]==c)
                return false;
            
            // check whether its present in rows
            
            if(board[row][i]==c)
                return false;
            
            // check whether its present in 3*3 matrix
            // to understand this condition refer video link in notes
            
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
                return false;
        }
        return true;
    }
};