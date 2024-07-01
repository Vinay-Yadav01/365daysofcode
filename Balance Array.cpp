int Solution::solve(vector<int> &A) {
    int n=A.size();
    int sume=0;
    int sumo=0;
    for(int i=0;i<n;i++)
    {
        if(i%2)
        sumo+=A[i];
        else
        sume+=A[i];
    }
    int count=0;
    int psumo=0;
    int psume=0;
   
    for(int i=0;i<n;i++)
    {
        int el=A[i];
        if(i%2){
            //remove odd elemnt give remaing even  sum to odd and remaing odd-a[i] to even;
            // psmo+=A[i];
            int remsume=sume-psume;
            int remsumo=sumo-psumo-A[i];
            if(psume+remsumo==psumo+remsume)
            {
                count++;
            }
            psumo+=A[i];
           
        }
        else
        {
           
            //remove odd elemnt give remaing even  sum to odd and remaing odd-a[i] to even;
            // psmo+=A[i];
            int remsume=sume-psume-A[i];
            int remsumo=sumo-psumo;
            if(psume+remsumo==psumo+remsume)
            {
                count++;
            }
            psume+=A[i];
           
       
        }
    }
    return count;
}
