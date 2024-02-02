// #include <stdio.h>
// // read
// int main(){
//     FILE *p;
//     p=fopen("sr.txt","r");

//     char data[100];

//     if(p==NULL){
//         printf("file dose not exsit");
//     }else{
//         while(fgets(data,50,p)!=NULL){
//             printf("%s",data);
//             fclose(p);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// // write 
// int main(){
//     FILE *p;
//     p=fopen("file.txt","w");

//     char data[100];

//     if(p==NULL){
//         printf("file dose not");
//     }else{
//         fputs("jay mataji",p);
//         fclose(p);
//     }
// }

// #include <stdio.h>
// // append 
// int main(){
//     FILE *p;
//     p=fopen("file.txt","a");

//     char data[100];

//     if(p==NULL){
//         printf("file dose not");
//     }else{
//         fputs("\njay mataji",p);
//         fclose(p);
//     }
// }


// qus 2

#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[100];
    int age;
    char gender[20];
    char from[100];
    char to[100];
    int payment;
    int trinno;
};
int main()
{
    struct Employee e[3];
    int employeeN;
    printf("Enter Train Number ");
    scanf("%d",&employeeN);
    for(int i=0; i<=employeeN; i++){
        printf("Enter name ");
        scanf("%s",&e[i].name);
         printf("Enter age ");
        scanf("%d",&e[i].age);
         printf("Enter gender ");
        scanf("%s",&e[i].gender);
        printf("Enter from ");
        scanf("%s",&e[i].from);
         printf("Enter to ");
        scanf("%s",&e[i].to);
         printf("Enter payment");
        scanf("%d",&e[i].payment);
        printf("Enter trin number");
        scanf("%d",&e[i].trinno);
    }
    for(int i=0; i<=employeeN; i++){
        printf("%s\n",e[i].name);
        printf("%d\n",e[i].age);
        printf("%s\n",e[i].gender);
        printf("%s\n",e[i].from);
        printf("%s\n",e[i].to);
        printf("%d\n",e[i].payment);
        printf("%d\n",e[i].trinno);
    }
    return 0;
}
