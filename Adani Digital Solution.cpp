#include <iostream>
using namespace std;
int** create(int rows,int cols)
    {
      int** arr = 0;
      arr = new int*[rows];
      for (int h = 0; h < rows; h++)
      {
            arr[h] = new int[cols];
            for (int w = 0; w < cols; w++)
            {
                  arr[h][w] = rand();
            }
      }
      return arr;
    }
int main()
    {
      int rows,cols;
      cout<<"Enter rows and columns"<<endl;
      cin>>rows>>cols;
      int** a = create(rows, cols);
      cout<<"Array contents:"<<endl;
      for (int h = 0; h < rows; h++)
      {
            for (int w = 0; w < cols; w++)
            {
                  printf("%i,", a[h][w]);
            }
            printf("\n");
      }
      return 0;
    }
