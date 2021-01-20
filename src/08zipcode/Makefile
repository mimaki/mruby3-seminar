MRUBY=../../mruby
BLDHOST=$(MRUBY)/build/host

all:
	$(MRUBY)/bin/mrbc -o zip.c -Bappbin zip.rb
	gcc -o z2a -I$(MRUBY)/include -I$(BLDHOST)/include -L$(MRUBY)/build/host/lib z2a.c zip.c -lmruby -lm

mruby:
	cd $(MRUBY); rake MRUBY_CONFIG=../src/06zipcode/host-http.rb clean all

clean:
	rm -f zip.c z2a
