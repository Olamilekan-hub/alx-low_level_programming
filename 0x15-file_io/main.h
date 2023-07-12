#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <elf.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void myclose(int fix);
void myentry(unsigned long int e_entry, unsigned char *e_ident);
void mytype(unsigned int e_type, unsigned char *e_ident);
void myosabi(unsigned char *e_ident);
void myabi(unsigned char *e_ident);
void myversion(unsigned char e_ident);
void mydata(unsigned char *e_ident);
void myclass(unsigned char *e_ident);
void mymagic(unsigned char *e_ident);
void myelf(unsigned char *e_ident);

#endif /* MAIN */
