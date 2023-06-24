bool searchMatrix(vector<vector<int>>& mat, int target) {
    
    int m = mat.size(), n = mat[0].size();

    int i;
    for(i=0; i<m; i++)
    {
        if(target<=mat[i][n-1])
            break;
    }

    if(i==m)
        return false;
    else{
        for(int j=0; j<n; j++)
        {
            if(mat[i][j]==target)
                return true;
        }
        return false;
    }
}