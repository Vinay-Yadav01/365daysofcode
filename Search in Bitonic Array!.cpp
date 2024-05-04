int findPeak(vector<int> &A){

    //finding the bitonic point

    int low = 1;

    int high = A.size()-2;

    

    while(low<=high){

        int mid = (high+low)/2;

        if( A[mid]>A[mid-1] && A[mid]>A[mid+1])

            return mid;

        else if(A[mid]<A[mid+1])

            low = mid+1;

        else

            high = mid-1;     

    }

    

}

//search from 0 to bitonic point


int leftSearch(vector<int> &A, int B, int low,int high){

    while(low<=high){

        int mid = (low+high)/2;

        if(A[mid]==B)

            return mid;

        else if(A[mid]<B){

            low = mid+1;}

        else    

            high=mid-1;

        }

        return -1;

    }


//search from bitonic+1 to end : right of array


int rightSearch(vector<int> &A, int B, int low,int high){

    while(low<=high){

        int mid = (low+high)/2;

        if(A[mid]==B)

            return mid;

        else if(A[mid]>B){

            low = mid+1;

        }

        else    

            high=mid-1;

        }

        return -1;

    }




int Solution::solve(vector<int> &A, int B) {

    int peak = findPeak(A);

    int left =-1, right = -1;

    left = leftSearch(A,B,0,peak);

    right =rightSearch(A,B,peak+1,A.size()-1);

    

    if(left==-1 && right==-1)

        return -1;

    if(left!=-1)

        return left;

    else    

        return right;

    

}
