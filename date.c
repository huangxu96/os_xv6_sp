#include "types.h"
#include "user.h"
#include "ProcessInfo.h"

int main(int argc, char *argv[])
{   
    struct ProcessInfo* Table = malloc(64 * sizeof(struct ProcessInfo));
    int count = getprocs(Table);

    int i;
    for (i = 0; i < count; i++){
        printf(2,"%s %s %s %s\n", Table[i].ppid, Table[i].state, Table[i].pid, Table[i].name);
    }

    exit();
}
