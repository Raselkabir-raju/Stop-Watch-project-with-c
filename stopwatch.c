#include<stdio.h>
#define CYCLE 60
#define clrscr() printf("\e[1;1H\e[2J")
#include<unistd.h>
int main()
{
    int hour,minute,second;

    printf("Enter Hour Miute second:");
    scanf("%d%d%d",&hour,&minute,&second);
    clrscr();

    int h=0, m=0, s=0;
    while(1)
    {
        printf("\n\n STOP WATCH\n\n");
        printf("\n\n %.2d:%.2d:%.2d\n",h,m,s);
    

        if(h==hour && m==minute && s==second){
            break;
        }
        else{
            clrscr();
        }
        s++;
        sleep(1);
        if(s==CYCLE){
            m++;
            s=0;
        }
        if(m==CYCLE){
            h++;
            m=0;
        }
    }
    
}