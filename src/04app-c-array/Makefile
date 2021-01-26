MRUBY=../../mruby

all:
	cd $(MRUBY); rake
	$(MRUBY)/bin/mrbc -Bapp1 -o./hello.c ../01hello/hello.rb
	$(MRUBY)/bin/mrbc -Bapp2 -o./twice.c ../02twice/twice.rb
	gcc -omrbrun2 mrbrun2.c hello.c twice.c -I$(MRUBY)/include -L$(MRUBY)/build/host/lib -lmruby -lm

clean:
	rm -f mrbrun2 hello.c twice.c
