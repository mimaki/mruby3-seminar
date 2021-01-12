#include "mruby.h"
#include "mruby/array.h"
#include "mruby/variable.h"
#include "mruby/dump.h"

static void set_args(mrb_state *mrb, int argc, char *argv[])
{
  /* set 'ARGV[]' */
  mrb_value args = mrb_ary_new_capa(mrb, argc - 1);
  for (int i=1; i<argc; i++) {
    mrb_ary_push(mrb, args, mrb_str_new_cstr(mrb, argv[i]));
  }
  mrb_define_global_const(mrb, "ARGV", args);

  /* set '$0' */
  mrb_gv_set(mrb, mrb_intern_lit(mrb, "$0"), mrb_str_new_cstr(mrb, argv[0]));
}

int main(int argc, char *argv[])
{
  mrb_state *mrb = mrb_open();
  extern const uint8_t appbin[];

  /* set 'ARGV[]' &'$0' */
  set_args(mrb, argc, argv);

  mrb_load_irep(mrb, appbin);
  
  mrb_close(mrb);
  return 0;
}
