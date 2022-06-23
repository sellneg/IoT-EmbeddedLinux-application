from configobj import ConfigObj

config = ConfigObj('/etc/ap-hotspot.conf')
ssid_name = config.get('ssid')
print(ssid_name)

