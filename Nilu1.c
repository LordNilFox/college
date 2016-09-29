#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(int argc, char const *argv[])
{
   
    int status = 0, ret_val = -1;
    pid_t pid = 0;

    char **argv_to_prog = argv;
    
   
    argv_to_prog += 1;

   
    if (argc < 2) {
        printf("USAGE: exitcode <way_to_file> <(no such matter)args>\n");
        return 0;
    }

  
    pid = fork();

    if (!pid) { 
      
        execv(argv[1], argv_to_prog);
    } else {
       
        wait(&status);
      
        ret_val = WEXITSTATUS(status);
        printf("Child process successfully returned %d\n", ret_val);
    }
    return 0;
}
