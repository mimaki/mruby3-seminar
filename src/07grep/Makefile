MRUBY=../../mruby
BLDHOST=$(MRUBY)/build/host

onigmo=libonigmo.a
onigmoexists=$(shell ls /usr/local/lib | grep ${onigmo})
onigruma=libonig.a
onigrumaexists=$(shell ls /usr/local/lib | grep ${onigruma})

LIBDIR=/usr/local/lib
LIBONIG=onigmo
ifneq ($(onigmoexists), ${onigmo})
	ifeq (${onigrumaexists}, ${onigruma})
		LIBONIG=onig
	else
		LIBDIR=$(BLDHOST)/mrbgems/mruby-onig-regexp/onigmo-6.2.0/.libs
	endif
endif

all:
	$(MRUBY)/bin/mrbc -o grep.c -Bappbin grep.rb
	gcc -o mygrep -I$(MRUBY)/include -L$(BLDHOST)/lib -L$(LIBDIR) main.c grep.c -lmruby -l$(LIBONIG) -lm

mruby:
	cd $(MRUBY); rake MRUBY_CONFIG=../src/07grep/host-regexp.rb clean all

clean:
	rm -f grep.c mygrep *.lock
