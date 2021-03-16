//Accept the file name from user and return the size of that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int FileSize(char *name)
{
  int fd = 0, iRet = 0;
  
  fd = open(name, O_RDONLY);
  
  iRet = lseek(fd,0,SEEK_END);
  
  close(fd);
  
  return iRet;
}

int main()
{
  char name[20];
  int iRet = 0;
  
  printf("Enter the file name \n");
  scanf("%s",name);
  
  iRet = FileSize(name);
  
  printf("size of file is : %d",iRet);

return 0;
}

/*

output

Enter the file name
Data.txt
size of file is : 22

*/