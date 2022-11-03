# Project:0x16.C-Simple Shell

## Introduction:

In this project is developed a simple **UNIX** command interpreter (shell) as a part of low-level programming foundation and algorithm--Linux and Unix system programming.

## Description:

A simple **UNIX** command interpreter is a program that reads commands from the standard input or files and executes them in order to display a result.

## Requirements:

### General:

+ Allowed editors: **vi**, **vim**, **emacs**
+ All your files will be compiled on Ubuntu 14.04 LTS
+ Your C programs and functions will be compiled with **gcc 4.8.4 using the flags -Wall -Werror -Wextra** and **-pedantic**
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the **Betty** style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
+ Your shell should not have any memory leaks
+ No more than 5 functions per file
+ All your header files should be include guarded
+ Use system calls only when you need to ([why?](https://www.quora.com/Why-are-system-calls-expensive-in-operating-systems))

## Flowchart:

This is the [Flowchart](https://github.com/samadesanmi/simple_shell/blob/master/Shell.c.png) that describes the process of the simple shell.

## Installation:

To use this shell first	of all you must	clone this repository, using the next c ommand:

`git clone https://github.com/samadesanmi/simple_shell.git`

## How to compile it:

After downloading you must enter the directory and execute the next command:

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

## How to use it:

To initializate the Shell process you need to run:
`./hsh`

And now you can type and execute commands writing its relative path, see below:

```
$ ./hsh
($) /bin/ls
AUTHORS  functions.h  hsh  hsh.c  man_1_simple_shell  ops_linked_list.c  ops_strings.c  README.md  tools.c
($)
($) exit
$
```

Or writing the reserved word of the command, like this:
```
($) ls
AUTHORS  functions.h  hsh  hsh.c  man_1_simple_shell  ops_linked_list.c  ops_strings.c  README.md  tools.c
($)
```



<p align="center">
    <h2 align="center">By Adegbusi Samuel Adesanmi</h2>
</p>
