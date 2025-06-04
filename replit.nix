{ pkgs }: {
	deps = [
   pkgs.lr
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}