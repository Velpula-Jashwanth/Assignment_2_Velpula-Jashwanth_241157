int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int min=0,max=A[A.size()-1],result=0;
    while(min<=max){
        int mid=min+(max-min)/2;
        long long wood=0;
        for(int i=0;i<A.size();i++){
            if(A[i]>mid){
                wood+=(A[i]-mid);
        }
        }
        if(wood>=B) {
            result=mid;       
            min=mid+1;     
        }else{
            max=mid-1;    
        }
    }
    return result;
    }
