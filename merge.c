void merge(int [], int, int [], int, int []);
 
void main(void)
{
  int a[10], b[10], m, n, c, sorted[20];
 
  printf("Input number of elements in first array\n");
  scanf("%d", &m);
 
  printf("Input %d integers\n", m);
  for (c = 0; c < m; c++) 
{
    scanf("%d", &a[c]);
  }
 
  printf("Input number of elements in second array\n");
  scanf("%d", &n);
 
  printf("Input %d integers\n", n);
  for (c = 0; c < n; c++)
 {
    scanf("%d", &b[c]);
  }
 
  merge(a, m, b, n, sorted);
 
  printf("Sorted array:\n");
 
  for (c = 0; c < m + n; c++) 
{
    printf("%d\n", sorted[c]);
  }
 
  getch();
}
 
void merge(int a[], int m, int b[], int n, int sorted[]) 
{
  int i, j, k;
 
  j = k = 0;
 
  for (i = 0; i < m + n;) 
{
    if (j < m && k < n) 
{
      if (a[j] < b[k]) 
{
        sorted[i] = a[j];
        j++;
      }
      else 
{
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m)
 {
      for (; i < m + n;)
 {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else
 {
      for (; i < m + n;) 
{
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}