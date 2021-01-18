#include "mruby.h"
#include "mruby/irep.h"

int main(int argc, char *argv[])
{
  mrb_state *mrb = mrb_open();
  extern uint8_t app1[], app2[];

  mrb_load_irep(mrb, app1);
  mrb_load_irep(mrb, app2);

  mrb_close(mrb);
  return 0;
}
