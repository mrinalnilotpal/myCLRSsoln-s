int n-int sum(int A[n], int B[n])
{
   int carry[n+1],i,j;
   int c[n+1];
   
   for(i = 1; i < = n+1; i++)
   {
      carry[i]=0;
   }
   
   for(i = n; i>0 ;i--)
   {
      if(((A[i]==0 && B[i]==1 ) || (A[i]==1 && B[i]==0))) && carry[i] = 0 )
      {
         c[i] = 1;
         carry[i+1] = 0;
      }
      else if( (A[i]==1 && B[i]==1 ) && carry[i] = 0)
      {
           c[i] = 0;
         carry[i+1] = 1;
      }
      else if(((A[i]==0 && B[i]==1 ) || (A[i]==1 && B[i]==0))) && carry[i] = 1 )
      {
         c[i] = 0;
         carry[i+1] = 1;
      }
   else if( (A[i]==0 && B[i]==0 ) && carry[i] = 0)
      {
           c[i] = 0;
         carry[i+1] = 0;
      }
            else if( (A[i]==1 && B[i]==1 ) && carry[i] = 1)
      {
           c[i] = 1;
         carry[i+1] = 1;
      }
   }
}
