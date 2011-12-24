#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include <stdio.h>
#include <stdlib.h>
#include <syscall-nr.h>
#include "threads/interrupt.h"
#include "threads/thread.h"

#include "devices/shutdown.h"
#include "threads/init.h"
#include "threads/vaddr.h"
#include "threads/synch.h"
#include "userprog/pagedir.h"
#include "userprog/process.h"


#include "filesys/filesys.h"
#include "filesys/file.h"
#include "threads/malloc.h"

struct lock filesys_lock;
void exit (int status);
void
syscall_init (void) ;
#endif /* userprog/syscall.h */
