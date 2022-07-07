/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.*/
// leectcode , devnest

vector<vector<int>> solve(vector<vector<int>> mat){
//CODE HERE 
    for(int i=0;i<mat.size();i++){
        for(int j=i+1;j<mat.size();j++){
            int t = mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=t;
        }
    }
    for(int i=0;i<mat.size();i++){
        int f=0,l=mat[i].size()-1;
        while(f<l){
            int t = mat[i][f];
            mat[i][f]=mat[i][l];
            mat[i][l]=t;
            l--;
            f++;
        }
    }
    return mat;
}
