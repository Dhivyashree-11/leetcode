int countOdds(int low, int high)
{
    int c=0;
    for(int i=low;i<=high;i++)
    {
        if(i%2==1)
        c++;
    }
    return c;
}