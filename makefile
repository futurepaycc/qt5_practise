# https://www.unix.com/programming/168019-how-define-dynamic-target-prerequisite-makefile.html (成功)
# https://stackoverflow.com/questions/21585080/make-with-dynamic-target-names (失败)
# make source=button1
build = g++ -g -fPIC `pkg-config --cflags --libs Qt5WebEngineWidgets`

all:
	${build} ${source}.cpp -o bin/${source}

# make test source=hello 
test:
	@echo ${source}


# 下面是手工版
# gtkmm1: gtkmm1.cpp
# 	g++ -g `pkg-config --cflags-only-I --libs gtkmm-3.0` gtkmm1.cpp -o bin/gtkmm1 

# button1: button1.cpp
# 	g++ -g `pkg-config --cflags-only-I --libs gtkmm-3.0` button1.cpp -o bin/button1 