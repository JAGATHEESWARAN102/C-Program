#include <stdio.h>
 
void main()
{  int num;
 
    int i,  keynum, found = 0;
 
    printf("Enter the number of elements ");
    scanf("%d", &num);
    int array[num];
    printf("Enter array of elements \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Element Search ");
    scanf("%d", &keynum);
 
    /*  Linear search begins */
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
}


TEST CASES
Enter the number of elements 7
Enter array of elements
16
18
27
16
23
21
19
Element Search 23
Element is present in the array at position 5
