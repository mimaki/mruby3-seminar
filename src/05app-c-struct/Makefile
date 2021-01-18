MRUBY=../../mruby
BLDHOST=$(MRUBY)/build/host

all:
	cd $(MRUBY); rake
	$(MRUBY)/bin/mrbc -Bapp1 -S -o./hello.c ../01hello/hello.rb
	$(MRUBY)/bin/mrbc -Bapp2 -S -o./twice.c ../02twice/twice.rb
	gcc -osample3 sample3.c hello.c twice.c -I$(MRUBY)/include -I$(BLDHOST)/include -L$(MRUBY)/build/host/lib -lmruby -lm

clean:
	rm -f sample3 hello.c twice.c
