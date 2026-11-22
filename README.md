# Student Record Management System

A menu-driven C project that manages student records using a
singly linked list and file handling.

## Features
- Add, delete, show, modify and sort student records
- Roll number is assigned automatically (smallest free number)
- Records are saved in student.dat and loaded at startup

## Files
- student.h : structure and function declarations
- main.c : menu and exit
- stud_add.c, stud_del.c, stud_show.c, stud_mod.c : operations
- stud_save.c : save and load using fprintf and fscanf
- stud_sort.c : sort by name or percentage

## How to compile and run
cc main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_sort.c -o student
./student

## Author
RAKESH R, V26CE2R3
