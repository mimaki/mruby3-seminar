#include "mruby.h"
#include "mruby/value.h"

static mrb_value neg(mrb_state *mrb, mrb_value self)
{
  return mrb_fixnum_value(-mrb_fixnum(self));
}

void mrb_mymgem_gem_init(mrb_state *mrb)
{
  mrb_define_method(mrb, mrb->integer_class, "negative", neg, MRB_ARGS_NONE());
}

void mrb_mymgem_gem_final(mrb_state *mrb)
{
}
