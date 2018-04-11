#include <unistd.h>
#include <stdio.h>

int main(){
  pid_t fpid; //fpid is return value of fork function
  int count=0;
  fpid = fork();
  if (fpid<0){
    printf("error when forking");
  }else if(fpid==0){
    printf("I am in the child process, process id is %d\n", getpid());
  }else{
    printf("I am in the parent process. process id is %d\n", getpid());
  }
  return 0;
}
