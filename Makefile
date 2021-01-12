-include .config

.PHONY: configure

Kconfig_test: configure
	@g++ main.cpp config.h -o $@
	@./$@

configure: Kconfig
	@python3 genconfig.py $<

menuconfig: Kconfig
	kconfig-mconf $^

clean:
