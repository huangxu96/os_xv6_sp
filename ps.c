#include "types.h"
#include "user.h"
#include "ProcessInfo.h"

int main(int argc, char *argv[])
{   
    struct ProcessInfo* Table = malloc(64 * sizeof(struct ProcessInfo));
    int count = getprocs(Table);
    int i;
    for (i = 0; i < count; i++){
        char* State;
        switch(Table[i].state){
            case 0: State = "UNUSED";
            case 1: State = "EMBRYO";
            case 2: State = "SLEEPING";
            case 3: State = "RUNNABLE";
            case 4: State = "RUNNING";                    
            case 5: State = "ZOMBIE";
        }
        printf(0,"%d %s %d %s\n", Table[i].ppid, State, Table[i].pid, Table[i].name);
    }

    exit();
}
