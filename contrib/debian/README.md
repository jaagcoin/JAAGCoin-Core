
Debian
====================
This directory contains files used to package jaagd/jaag-qt
for Debian-based Linux systems. If you compile jaagd/jaag-qt yourself, there are some useful files here.

## jaag: URI support ##


jaag-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install jaag-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your jaag-qt binary to `/usr/bin`
and the `../../share/pixmaps/jaag128.png` to `/usr/share/pixmaps`

jaag-qt.protocol (KDE)

