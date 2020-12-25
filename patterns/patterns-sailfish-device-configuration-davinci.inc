%package -n patterns-sailfish-device-configuration-davinci
Summary: Jolla Configuration davinci
Requires: patterns-sailfish-device-configuration-common-davinci
Requires: patterns-sailfish-device-adaptation-davinci

Requires: droid-config-davinci-sailfish
Requires: droid-config-davinci-pulseaudio-settings
Requires: droid-config-davinci-policy-settings
Requires: droid-config-davinci-preinit-plugin
Requires: droid-config-davinci-flashing
Requires: droid-config-davinci-bluez5
Requires: droid-hal-version-davinci

Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
Requires: patterns-sailfish-rnd
# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
#Requires: patterns-sailfish-dev-tools
Recommends: jolla-developer-mode
Requires: strace
Requires: gdb
Requires: gdb-gdbserver
Requires: vim-enhanced
Requires: less
Requires: valgrind
Requires: lipstick-qt5-tools
Requires: libhybris-tests
Requires: busybox-static
Requires: openssh-server
Requires: zypper

# NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-binder-plugin
Requires: nfcd-mce-plugin

Requires: sailfish-content-graphics-z%{icon_res}

Requires: jolla-settings-networking-multisim
Requires: jolla-settings-system-flashlight

Requires: geoclue-provider-mlsdb
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-davinci
Pattern with packages for xqau51 configurations

%files -n patterns-sailfish-device-configuration-davinci
