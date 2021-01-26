MRUBY=../../mruby
BLDHOST=$(MRUBY)/build/host

all:
	cd $(MRUBY); rake
	$(MRUBY)/bin/mrbc -Bapp1 -S -o./hello.c ../01hello/hello.rb
	$(MRUBY)/bin/mrbc -Bapp2 -S -o./twice.c ../02twice/twice.rb
	gcc -omrbrun3 mrbrun3.c hello.c twice.c -I$(MRUBY)/include -I$(BLDHOST)/include -L$(BLDHOST)/lib -lmruby -lm

clean:
	rm -f mrbrun3 hello.c twice.c
