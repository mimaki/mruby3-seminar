#include "mruby.h"
#include "mruby/class.h"
#include "mruby/string.h"
#include <string.h>

static mrb_value
counter(mrb_state *mrb, mrb_value self)
{
  mrb_int n = 2;
  char msg[256] = {0};

  mrb_get_args(mrb, "|i", &n);

  // TODO: ここにcounterの処理を記述してください

  return mrb_str_new_cstr(mrb, msg);
}

void mrb_banker_gem_init(mrb_state *mrb)
{
  struct RClass *c = mrb_define_class(mrb, "Banker", mrb->object_class);
  mrb_define_method(mrb, c, "counter", counter, MRB_ARGS_OPT(1));
}

void mrb_banker_gem_final(mrb_state *mrb)
{
}
