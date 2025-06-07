#include <stdio.h>

main(){
    FILE *evenfile, *oddfile;
    int i;

    evenfile=fopen("even_numbers.txt","w");
    oddfile=fopen("odd_numbers.txt","w");

    if(evenfile==NULL||oddfile==NULL) {
        printf("Error opening file(s)!\n");
    }

    for(i=50;i<=70;i++){
        if(i%2==0){
            fprintf(evenfile,"%d\n",i);
        } else {
            fprintf(oddfile,"%d\n",i);
        }
    }

    fclose(evenfile);
    fclose(oddfile);

    printf("Numbers written to files successfully.\n");

}

