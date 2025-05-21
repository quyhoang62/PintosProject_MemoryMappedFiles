/* Executes and waits for multiple child processes. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"
const char *test_name = "exec-multiple";
void
test_main (void) 
{
  wait (exec ("child-simple"));
  wait (exec ("child-simple"));
  wait (exec ("child-simple"));
  wait (exec ("child-simple"));
}
