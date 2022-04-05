#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<signal.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#define MAXLEN 100
int main()
{

    int status,status2,status3;
    int ans1,ans2,ans3;
    pid_t pid,pid_2,pid_3;
    printf("this is father PID:%d\n",getpid());
    pid=fork();
    if(pid==0){
        int s1=0;
        for(int i=0;i<30;i++){
            s1+=i;
            printf("%d ",i);
        }
        printf("I'm first child PID:%d\n",getpid());
        exit(s1);
    }
    pid_2 = fork();
    if(pid_2==0){
        int s2=0;
        for(int i=30;i<60;i++){
            s2+=i;
            printf("%d ",i);
        }
        printf("I'm second child PID:%d\n",getpid());
        exit(s2);

    }
    pid_3=fork();
    if(pid_3==0){
        int s3=0;
        for(int i=60;i<90;i++){
            printf("%d ",i);
        }
        printf("I'm third child PID:%d\n",getpid());
        exit(s3);
    }
    if(pid!=-1)
    {
        printf("parent process wait for children\n");
        waitpid(pid,&status,0);
        ans1 = WEXITSTATUS(status);
        waitpid(pid_2,&status2,0);
        ans2 = WEXITSTATUS(status2);
        waitpid(pid_3,&status3,0);
        ans3 = WEXITSTATUS(status3);
        printf("sum ans = %d\n",ans1+ans2+ans3);
    }
    return 0;
}