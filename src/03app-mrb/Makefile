MRUBY=../../mruby
BLDHOST=$(MRUBY)/build/host

all:
	cd $(MRUBY); rake
	$(MRUBY)/bin/mrbc -o./hello.mrb ../01hello/hello.rb
	$(MRUBY)/bin/mrbc -o./twice.mrb ../02twice/twice.rb
	gcc -osample1 sample1.c -I$(MRUBY)/include -I$(BLDHOST)/include -L$(MRUBY)/build/host/lib -lmruby -lm

clean:
	rm -f sample1 *.mrb
