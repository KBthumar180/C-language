#include <stdio.h>
void Sum();

int main() {  
    Sum();
}

void Sum(){
    int arr[100], n, sum = 0,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
		printf("a[%d] :- ",i);
		scanf("%d",&arr[i]);
        sum += arr[i]; 
    }

    printf("The sum of the array elements is: %d\n",sum);
}


