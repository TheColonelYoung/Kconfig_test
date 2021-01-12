-include .config

all:
	g++ main.cpp -o Kconfig_test .config
	./Kconfig_test

menuconfig:
	kconfig-mconf Kconfig


