#ifndef _PROCESSINFO_H_
#define _PROCESSINFO_H_

struct ProcessInfo {
   char name[16]; // name of process
   int pid; // process id
   int ppid; // parent pid
   uint sz; // size in bytes
   int state; // state
 };

#endif //_PROCESSINFO_H_  

