MRUBY=../../mruby
BLDHOST=$(MRUBY)/build/host

all:
	$(MRUBY)/bin/mrbc -o zip.c -Bappbin zip.rb
	gcc -o z2a -I$(MRUBY)/include -L$(BLDHOST)/lib main.c zip.c -lmruby -lm

mruby:
	cd $(MRUBY); rake MRUBY_CONFIG=../src/08zipcode/host-http.rb clean all

clean:
	rm -f zip.c z2a *.lock
