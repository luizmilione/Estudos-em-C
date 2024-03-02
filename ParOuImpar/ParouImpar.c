#include<stdio.h>

int parouimpar (int x);

int main(){
    int num;
    scanf("%d", &num);
    while (num != 0)
    {
        int res = parouimpar (num);
        if (res == 1)
        {
            printf("P\n");            
        } else {
            printf("I\n");
        }  
        scanf("%d", &num);
    }    

    return 0;
}

int parouimpar (int x){
    if (x % 2 == 0)
    {
        return 1;
    }
    return 0;
}