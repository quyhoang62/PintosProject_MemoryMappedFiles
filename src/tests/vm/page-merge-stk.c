#include "tests/main.h"
#include "tests/vm/parallel-merge.h"
const char *test_name = "parallel-merge-mm";
void
test_main (void) 
{
  parallel_merge ("child-qsort", 72);
}
