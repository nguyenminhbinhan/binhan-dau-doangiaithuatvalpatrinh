class Solution {
public:
    vector<int> sortArray(vector<int>& mang) {
        mergeSort(mang, 0, mang.size() - 1);
        return mang;
    }
    
    void mergeSort(vector<int>& mang, int trai, int phai) {
        if (trai >= phai) return;
        int giua = trai + (phai - trai) / 2;
        mergeSort(mang, trai, giua);
        mergeSort(mang, giua + 1, phai);
        tron(mang, trai, giua, phai);
    }
    
    void tron(vector<int>& mang, int trai, int giua, int phai) {
        vector<int> tam;
        int i = trai, j = giua + 1;
        
        while (i <= giua && j <= phai) {
            if (mang[i] <= mang[j]) {
                tam.push_back(mang[i++]);
            } else {
                tam.push_back(mang[j++]);
            }
        }
        
        while (i <= giua) tam.push_back(mang[i++]);
        while (j <= phai) tam.push_back(mang[j++]);
        
        for (int k = 0; k < tam.size(); k++) {
            mang[trai + k] = tam[k];
        }
    }
};