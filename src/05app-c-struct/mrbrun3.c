#include "mruby.h"
#include "mruby/proc.h"

int main(int argc, char *argv[])
{
  mrb_state *mrb = mrb_open();
  extern const struct RProc app1[], app2[];

  mrb_load_proc(mrb, app1);
  mrb_load_proc(mrb, app2);

  mrb_close(mrb);
  return 0;
}
