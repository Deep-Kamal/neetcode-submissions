class Solution {
public:
    bool validBox(vector<vector<char>>& board, int sr, int sc, int er, int ec){
        unordered_set<char> st;
        for(int i = sr; i <= er; i++){
            for(int j = sc; j <= ec; j++){
                if(board[i][j] == '.') continue;
                if(st.find(board[i][j]) != st.end())
                   return false;
                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //valid row
        for(int row = 0; row < 9; row++){
            unordered_set<int> st;
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;
                if(st.find(board[row][col]) != st.end())
                    return false;                
                st.insert(board[row][col]);
            }
        }
        // valid col
        for(int col = 0; col < 9; col++){
            unordered_set<int> st;
            for(int row = 0; row < 9; row++){
                if(board[row][col] =='.') continue;
                if(st.find(board[row][col]) != st.end())
                   return false;
                st.insert(board[row][col]);
            }
        }
        //valide 3*3 
        for(int sr = 0; sr < 9; sr += 3){
            int er = sr + 2;
            for(int sc = 0; sc < 9; sc += 3){
                int ec = sc + 2;
                if(!validBox(board,sr,sc,er,ec))
                  return false;
            }
        }
        return true;
    }
};
