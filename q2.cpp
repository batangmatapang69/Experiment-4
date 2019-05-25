#include <iostream>
#include <conio.h>
using namespace std;
void swap(int &x, int &y) 
{         
   int num;
   num = x;
   x = y;
   y = num;
}

void d(int *a, int s)
 {
   for(int i = 0; i < s; i++)
      cout << a[i] << " ";
   cout << endl;
}

void ss(int *a, int s)
 {
   int i, j, min;
   for(i = 0; i<s-1; i++)
    {
      min = i;
      for(j = i+1; j<s; j++)
         if(a[j] < a[min])
            min = j;
         swap(a[i], a[min]);
   }
}

int main() {
   int num;
   cout << "Enter how many variables: ";
   cin >> num;
   
   int a[num];
   cout << "Enter the variables (separated by spaces):" << endl;
   for(int i = 0; i < num; i++) {
      cin >> a[i];
   }
   
   cout << "Before sorting: ";
   d(a, num);
   
   ss(a, num);
   cout << "After Sorting: ";
   
   d(a, num);
}

