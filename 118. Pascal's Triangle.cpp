class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tamGiac(numRows);
        
        for (int i = 0; i < numRows; i++) {
            tamGiac[i].resize(i + 1);
            tamGiac[i][0] = tamGiac[i][i] = 1;
            
            for (int j = 1; j < i; j++) {
                tamGiac[i][j] = tamGiac[i-1][j-1] + tamGiac[i-1][j];
            }
        }
        
        return tamGiac;
    }
};