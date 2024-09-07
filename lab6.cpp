for(int i=1;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
    diff [j][i]=diff[j+1][i-1]-diff[j][i-1]
    }
    double result=y[n];
    double u=e-x[0]/(x[1]-x[0];)
    double term =1.00;
    for(int i=0;i<n;j++)
    {
        term=term*(u-i+1)/i;
        reult=result +term*diff[0][i];
    }
}
