#ifndef FILESYS_FILE_H
#define FILESYS_FILE_H

#include "filesys/off_t.h"
#include "threads/synch.h"
#include "lib/kernel/list.h"
struct inode;

/* Opening and closing files. */
struct file *file_open (struct inode *);
struct file *file_reopen (struct file *);
void file_close (struct file *);
struct inode *file_get_inode (struct file *);

/* Reading and writing. */
off_t file_read (struct file *, void *, off_t);
off_t file_read_at (struct file *, void *, off_t size, off_t start);
off_t file_write (struct file *, const void *, off_t);
off_t file_write_at (struct file *, const void *, off_t size, off_t start);

/* Preventing writes. */
void file_deny_write (struct file *);
void file_allow_write (struct file *);

/* File position. */
void file_seek (struct file *, off_t);
off_t file_tell (struct file *);
off_t file_length (struct file *);


// // code moi
// enum access_type {
//   ACCESS_OPEN,
//   ACCESS_READ,
//   ACCESS_WRITE
// };

// struct file_access_info {
//   const char *filename;
//   int64_t timestamp;
//   enum access_type type;
//   struct list_elem elem;
// };

// void log_file_access(const char *filename, enum access_type type);

#endif /* filesys/file.h */
