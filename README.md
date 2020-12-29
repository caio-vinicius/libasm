# Libasm

Consists of writing some functions of the Standard Library and others in Assembly x64 Intel. Functions include:


| Function           | Description                      |
| ------------------ | -------------------------------- |
| ft_strlen			 | calculate the length of a string |
| ft_strcpy			 | copy a string                    |
| ft_strcmp 	     | compare two strings              |
| ft_write		     | write to a file descriptor       |
| ft_read   		 | read from a file descriptor      |
| ft_atoi_base       | convert a string to an integer any base |
| ft_list_push_front | adds a new element of type t_list to the beginning of the list. |
| ft_list_size       |  number of elements in the list. |
| ft_list_sort       | sorts the list’s elements by ascending order |
| ft_list_remove_if  | erases off the list all elements whose data compared to data_ref with cmp makes cmp to return 0. |


## Installation

Libasm requires [GNU Make v4.1+](https://www.gnu.org/software/make/), [GNU Compiler v7.5+](https://gcc.gnu.org/) and [NASM v2.13+](https://www.nasm.us/).

```bash
$ git clone https://github.com/caio-vinicius/libasm
$ cd libasm
$ make
```

## Usage

```bash
$ make test
```

Then run

```bash
$ ./a.out
```

## Sources that helped me most

[CS 301: 2015 Assembly Language Programming Lecture, Dr. Lawlor](https://www.cs.uaf.edu/2015/fall/cs301/lecture)  
[CS 301: 2017 Assembly Language Programming Lecture, Dr. Lawlor](https://www.cs.uaf.edu/2017/fall/cs301/lecture)  
[Intel vs. AT&T syntax](http://staffwww.fullcoll.edu/aclifton/courses/cs241/syntax.html)  
[NASM Tutorial](https://cs.lmu.edu/~ray/notes/nasmtutorial)  
[The Art of Picking Intel Registers](https://www.swansontec.com/sregisters.html)  
[How to Mix C and Assembly](https://www.devdungeon.com/content/how-mix-c-and-assembly)  

## Nice sources

[NASM Docs](https://www.nasm.us/doc/)  
[Brown University - Intro Computer Systems](https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf)  
[TutorialsPoint Assembly Programming Tutorial](https://www.tutorialspoint.com/assembly_programming/index.htm)  

## Bonuses sources

[PDF Piscine List Functions](https://masonbee.nz/wp-content/uploads/2020/07/c12.pdf)  
[Structs Dr. Lawlor](https://www.cs.uaf.edu/2015/fall/cs301/lecture/09_25_structs.html)  
