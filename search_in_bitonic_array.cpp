int Solution::solve(vector<int> &A, int B) {
    int left=0,right=A.size()-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(A[mid]==B)  return mid;
        else if(A[mid]<B && A[mid+1]>A[mid])   left=mid+1;
        else if(A[mid]<B && A[mid+1]<A[mid])   right=mid;
        else if(A[mid]>B && A[mid+1]>A[mid])   right=mid;
        else if(A[mid]>B && A[mid+1]<A[mid])   left=mid+1;
    }
    return -1;
}
