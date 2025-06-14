{ pkgs }: {
	deps = [
   pkgs.twelf
   pkgs.lr
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
		pkgs.libcs50
	];
}