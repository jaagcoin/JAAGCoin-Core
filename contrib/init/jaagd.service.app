[Unit]
Description=Jaag's distributed currency daemon
After=network.target

[Service]
User=jaagcore
Group=jaagcore

Type=forking
PIDFile=/var/lib/jaagd/jaagd.pid
ExecStart=/usr/bin/jaagd -daemon -pid=/var/lib/jaagd/jaagd.pid \
-conf=/etc/jaagcore/jaag.conf -datadir=/var/lib/jaagd -disablewallet

Restart=always
PrivateTmp=true
TimeoutStopSec=60s
TimeoutStartSec=2s
StartLimitInterval=120s
StartLimitBurst=5

[Install]
WantedBy=multi-user.target
