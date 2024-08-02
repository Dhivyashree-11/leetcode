bool isHappy(int n) {
    int s=0,dig;
    if(n==1)
    return true;
    while(n>4)
    {
        while(n!=0)
        {
            dig=n%10;
            n/=10;
            s+=dig*dig;
        }
        if(s==1)
        {
        return true;
        }
        else
        {
        n=s;
        s=0;
        }
    }
    return false;
    }