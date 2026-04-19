#include <stdio.h>
int main(void) {
    int a, b;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int **pptr = NULL;
    int A[5] = {1, 2, 3, 4, 5};
    
    ptr1 = &a;
    ptr2 = &b;
    //ptr1 = 5; // ERROR
    printf("ptr1: %p\n", ptr1);
    *ptr2 = 5; 
    *ptr1 = *ptr2; 
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    //pptr = ptr1; 
    //pptr = &b; // ERROR
    pptr = &ptr2; 
    **pptr += 5; 
    printf("pptr: %p\n", pptr);
    printf("*pptr: %p\n", *pptr);
    printf("**pptr: %d\n", **pptr);
    
    *pptr = ptr1; 
    **pptr += 10; 
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    *pptr = ptr2; 
    ptr2 = &a; 
    printf("*ptr1: %d\n", *ptr1);
    printf("*ptr2: %d\n", *ptr2 + 4);
    
    a = 2;
    b = *ptr2 + 3; 
    printf("*pptr: %d\n", *pptr);
    printf("**pptr: %d\n", **pptr);
    printf("ptr1: %d\n", ptr1);
    printf("ptr2: %d\n", ptr2);
    
    **pptr += 1; 
    printf("*ptr1: %d\n", *ptr1);
    printf("*ptr2: %d\n", *ptr2);
    
    a = 8;
    b = 6;
    pptr = &ptr1; 
    **pptr -= 3; 
    printf("pptr: %p\n", (void*)pptr);
    printf("*ptr1: %d\n", *ptr1);
    printf("*ptr2: %d\n", *ptr2);
    printf("b: %d\n", b);
    printf("a: %d\n", a);
    printf("**pptr: %d\n", **pptr);
    
    ptr1 = A; 
    pptr = &ptr1; 
    printf("**pptr: %d\n", *(*pptr + 3)); 
    printf("*ptr1: %d\n", *ptr1); 
    printf("ptr1: %p\n", (void*)ptr1 + 3); 
    
    for (int i=0; i<5; i++) {
        *(*pptr + i) = *(*pptr + i) + 1;
    }
    
    printf("*ptr1: %d\n", *(ptr1 + 1)); 
    printf("**pptr: %d\n", *(*pptr + 2)); 
    printf("*pptr: %p\n", (void*)*pptr + 2); 
    printf("ptr1: %p\n", (void*)ptr1 + 4); 
    
    return 0;
}