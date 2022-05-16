class Solution{
public:
    vector<int> sortArray(vector<int>&A) {
        if (A.size() <= 1)
            return A;
        for (int j = 1; j < A.size(); ++j) {
            int temp = A[j];
            int i = j - 1;
            while (i >= 0 && A[i] > temp) {
                A[i+1] = A[i];
                i--;
            }
            A[i+1] = temp;
        }
        return A;
    }
};
