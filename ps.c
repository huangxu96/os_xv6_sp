#include "types.h"
#include "user.h"
#include "ProcessInfo.h"

int main(int argc, char *argv[])
{   
    struct ProcessInfo* Table = malloc(64 * sizeof(struct ProcessInfo));
    int count = getprocs(Table);
    int i;
    for (i = 0; i < count; i++){
        char* State [] = {"UNUSED", "EMBRYO", "SLEEPING", "RUNNABLE", "RUNNING", "ZOMBIE" };

        printf(0,"%d  %d  %s  %d  %s\n",Table[i].pid, Table[i].ppid, State[Table[i].state], Table[i].sz, Table[i].name);
    }

    exit();
}
