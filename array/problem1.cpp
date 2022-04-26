#include <iostream>
using namespace std;
int main() {
   int search, i, n=6;
   int arr[] = {12, 35, 69, 74, 165, 54};
   search=165;
   for (i = 0; i < n; i++) {
      if (arr[i] == search) {
         printf("%d is present at Index %d.\n", search, i);
         break;
      }
   }
   if (i == n)
      printf("%d isn't present in the array.\n", search);
   return 0;
}