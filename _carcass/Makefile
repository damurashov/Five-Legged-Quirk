all: build
	cd build ; \
	cmake .. ;\
	cmake --build .

build:
	mkdir build

# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif
run: ./build/__CARCASS__
	./build/__CARCASS__ $(RUN_ARGS)

clean:
	rm -rf build
	rm -rf *txt.user