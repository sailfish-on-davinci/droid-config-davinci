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

# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
#Requires: patterns-sailfish-dev-tools
Recommends: jolla-developer-mode
Recommends: strace
Recommends: gdb
Recommends: gdb-gdbserver
Recommends: vim-enhanced
Recommends: less
Recommends: valgrind
Recommends: lipstick-qt5-tools
Recommends: libhybris-tests
Recommends: busybox-static
Recommends: openssh-server
Recommends: zypper
Recommends: libgbinder-tools
Recommends: unzip
Recommends: mce-tools

# jolla-rnd-device will enable usb-moded even when UI is not yet
# brought up (useful during development, available since update10)
Requires: jolla-rnd-device

# install jolla apps
Requires: sailfish-office
Requires: jolla-calculator
Requires: jolla-email
Requires: jolla-notes
Requires: jolla-clock
Requires: jolla-mediaplayer
Requires: jolla-calendar
#Requires: sailfish-weather

# NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-binder-plugin
Requires: nfcd-mce-plugin

Requires: sailfish-content-graphics-z%{icon_res}

Requires: jolla-settings-networking-multisim

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-davinci
Pattern with packages for davinci configurations

%files -n patterns-sailfish-device-configuration-davinci
