MRUBY=../../mruby

all:
	$(MRUBY)/bin/mrbc -o zip.c -Bappbin zip.rb
	gcc -o z2a -I$(MRUBY)/include -L$(MRUBY)/build/host/lib z2a.c zip.c -lmruby -lm

mruby:
	cd $(MRUBY); rake MRUBY_CONFIG=../src/05mrbgem/host-http.rb clean all

clean:
	rm -f zip.c z2a
