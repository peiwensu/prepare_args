#include "parse.h"

int do_hello_test(int nargs, char **argv);

int do_hello_test(int nargs, char **argv)
{
    printf("nargs :%d\n",nargs);
     //入输出  ./parse_line say  666 555 444
    printf("you want to say :%s\n",argv[0]); //parse_line  say
    printf("you want to say :%s\n",argv[1]); // parse_line  say 后面的参数  666
    printf("you want to say :%s\n",argv[2]); //555
    printf("you want to say :%s\n",argv[3]); //444

    return 0;
}

