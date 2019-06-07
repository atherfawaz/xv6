The files modified for Question 1:
1. syscall.c

The files modified for Question 2:
1. date.c
2. syscall.c
3. usys.S
4. user.h
5. sysproc.c
6. syscall.h
7. makefile

--ADDITIONAL INFORMATION--

1. date.c:
Contains the main function of the date system call. Prints the date to the console.
2. syscall.c
Contains the system calls stored in an array. Added [SYS_date] sys_date

3. usys.S
Contains implemented system calls. Added SYSCALL(date)

4. user.h
Contains forward declaration of system calls. Added int date(struct rtcdate* r)

5. sysproc.c
Contains the actual meat of the date system call, Implemented int sys_date(struct rtcdate* r) {//} here.

6. syscall.h
Contains the preprocessor directives for system calls to convert their names to integer identifiers. Added #define SYS_date 22

7. makefile
Contains the recipes for compiling the entire OS. Added the _date\