  int climbStairs(int n) {
    if(n==1 or n== 2)
        return n;
        int k =1; int j = 2;int p =0;
        for(int i= 3; i<=n; i++)
        {
            p = k + j;
            k = j;
            j = p;
        }
        return p;
    }
