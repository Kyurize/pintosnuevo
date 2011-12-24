#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include <stdio.h>
#include <stdlib.h>
#include <syscall-nr.h>
#include "threads/interrupt.h"
#include "threads/thread.h"

#include "threads/init.h"
#include "threads/vaddr.h"
#include "threads/synch.h"
#include "userprog/pagedir.h"
#include "userprog/process.h"


#include "filesys/filesys.h"
#include "filesys/file.h"
#include "threads/malloc.h"

void syscall_init (void);
static void syscall_handler (struct intr_frame *);
static bool is_valid_arg (void *arg);
static void halt(void);
static void exit(int status);
static int write(int fd, const void  *buffer, unsigned size);
static tid_t exec(const char  *cmd_line);
static int wait(tid_t pid);
#endif /* userprog/syscall.h */
