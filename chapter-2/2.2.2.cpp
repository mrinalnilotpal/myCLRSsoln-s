
// Program to implement selection sort in O(n^2) complexity.
int selectiosort(int arr[])
{
  int i,j,min;
  for(i = 1; i < n ; i++) // It goes only till n-1 because the last element is expected to be sorted(of course trivially)
  {
    min = arr[i];
    for( j = i+1; j<=n; j++   )
    {
      if(arr[j] < min)
      {
        min = arr[j];
        arr[i] = min;
      }
    }
  }
}
