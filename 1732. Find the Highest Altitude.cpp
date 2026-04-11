class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cao_nhat = 0;
        int hien_tai = 0;
        
        for (int g : gain) {
            hien_tai += g;
            cao_nhat = max(cao_nhat, hien_tai);
        }
        
        return cao_nhat;
    }
};