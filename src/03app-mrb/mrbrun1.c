#include "mruby.h"
#include "mruby/dump.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  mrb_state *mrb = mrb_open();
  FILE *fp;

  if ((fp = fopen(argv[1], "rb")) != NULL) {
    mrb_load_irep_file(mrb, fp);
    fclose(fp);
  }
  mrb_close(mrb);
  return 0;
}
