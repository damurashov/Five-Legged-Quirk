all: build
	cd build ; \
	cmake .. ;\
	cmake --build .

build:
	mkdir build

run: all
	./build/__CARCASS__

clean:
	rm -rf build