/* Creates a file whose name spans the boundary between two pages.
   This is valid, so it must succeed. */

#include <syscall.h>
#include "tests/userprog/boundary.h"
#include "tests/lib.h"
#include "tests/main.h"
const char *test_name = "open-boundary-3";
void
test_main (void) 
{
  CHECK (open (copy_string_across_boundary ("sample.txt")) > 1,
         "open \"sample.txt\"");
}
