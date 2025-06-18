int Solution::findMin(const vector<int> &A) {
   int left=0,right=A.size()-1;
    while(left<right){
        int mid=left+(right - left) / 2;
        if (A[mid]>A[right]){
            left=mid+1;
        }else {
            right=mid;
        }
    }
    return A[left]; 
}
