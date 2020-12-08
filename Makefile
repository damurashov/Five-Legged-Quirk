%:
	cp -r _carcass $@
	sed -i 's/__CARCASS__/$@/g' $@/CMakeLists.txt
	sed -i 's/__CARCASS__/$@/g' $@/Makefile