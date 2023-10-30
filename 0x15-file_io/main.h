#ifndef MAIN_H
#define MAIN_H


/*Libraries*/
#include <stdio.h>    /*For any out in puts */

#include <unistd.h>  /*for display the function write */

#include <stdarg.h>   /*for  */

#include <stdarg.h>   /*for argument after "..."*/

#include <limits.h>   /*for max byet no. */

#include <stdlib.h>

#include <string.h>     /* for startup */

#include <fcntl.h>      /* for functionality */




#define READ_BUF_SIZE 1024


/* 4 t.3 */
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)



/*tasks protos*/
/*0.0*/
int _putchar(char c);
/*1*/
ssize_t read_textfile(const char *filename, size_t letters);
/*2*/
int create_file(const char *filename, char *text_content);
/*3*/
int append_text_to_file(const char *filename, char *text_content);



#endif
