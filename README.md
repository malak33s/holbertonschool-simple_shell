### Project Simple Shell

Write a simple UNIX command interpreter.

## Description of Simple Shell

The Simple Shell project is a program developed in the C language aimed at creating an interactive and minimalist system shell. This shell allows the user to interact with the operating system by entering commands via the command line interface.

## Compilation 

Command to compil the program of simple shell :

~~~
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
~~~

## Exemple

~~~
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
~~~

## File Descriptions

* **shell.h** : The header file it contains libraries and prototypes.

* **main.c** : The test file ande source file for simple shell.

* **README.md** : File contains information for a project simple shell.

* **shell.c** : This file is a basic structure for executing system commands in a C.

## List of allowed functions and system call.

* all functions from string.h
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* printf (man 3 printf)
* fprintf (man 3 fprintf)
* vfprintf (man 3 vfprintf)
* sprintf (man 3 sprintf)
* putchar (man 3 putchar)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## Flowchart Of simple shell.
![Flowchart simple shell](https://github.com/malak33s/holbertonschool-simple_shell/assets/159031600/4cdb45e5-bbb7-4cb3-a827-e9e1303bcc54)

## Authors


Ilhan Ben bouziane.

Malak sarhani.
