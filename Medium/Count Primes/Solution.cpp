class Solution {
public:
    int countPrimes(int n) {
        int cont=0;
        vector<bool> isPrime(n+1,true);
        isPrime[0]=isPrime[1]=false;

        for(int i=2;i<n;i++)
        {
            if(isPrime[i])
            {
                cont++;
                for(int j=2*i;j<n;j=j+i)
                {
                    isPrime[j]=0;
                }
            }
        }
        return cont;
    }
};