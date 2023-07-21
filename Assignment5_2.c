#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#pragma pack(1)
struct Employee
{
    int ID;
    char Ename[20];
    float Salary;
    int Age;
};

int main(int argc, char *argv[])
{
    struct Employee eobj;
    char Fname[20];
    int fd = 0;

    eobj.ID = 11;
    eobj.Salary = 89.99f;
    eobj.Age = 25;
    strcpy(eobj.Ename,"Virat");

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    write(fd,&eobj,sizeof(eobj));

    return 0;
}