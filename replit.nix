{ pkgs }: {
	deps = [
   pkgs.R
   pkgs.outils
   pkgs.twelf
   pkgs.lr
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
		pkgs.libcs50
	];
}