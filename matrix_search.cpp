int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int row=-1;
    for(int i=0;i<A.size();i++){
        if(A[i][0]<=B && A[i][A[0].size()-1]>=B) {
            row=i;
            break;
        }  
    }
    if(row==-1)     return 0;
    int start=0,end=A[0].size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[row][mid]==B) return 1;
        else if(A[row][mid]>B)   end=mid-1;
        else    start=mid+1;
    }
    return 0;
}
