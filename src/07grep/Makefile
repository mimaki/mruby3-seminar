MRUBY=../../mruby
BLDHOST=$(MRUBY)/build/host

all:
	$(MRUBY)/bin/mrbc -o grep.c -Bappbin grep.rb
	gcc -o mygrep -I$(MRUBY)/include -I$(BLDHOST)/include -L$(BLDHOST)/lib -L$(BLDHOST)/mrbgems/mruby-onig-regexp/onigmo-6.2.0/.libs -L/usr/local/lib main.c grep.c -lmruby -lonigmo -lm

mruby:
	cd $(MRUBY); rake MRUBY_CONFIG=../src/07grep/host-regexp.rb clean all

clean:
	rm -f grep.c mygrep
