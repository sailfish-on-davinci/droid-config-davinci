%package -n patterns-sailfish-device-configuration-davinci
Summary: Jolla Configuration davinci
Requires: patterns-sailfish-device-configuration-common-davinci
Requires: patterns-sailfish-device-adaptation-davinci


Requires: patterns-sailfish-cellular-apps

Recommends: zypper
Recommends: libgbinder-tools
Recommends: unzip
Recommends: mce-tools

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
