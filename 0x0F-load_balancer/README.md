#!/usr/bin/env bash
# configuring web-02 to be identical to web-01

sudo apt update
sudo apt install nginx -y
sed -i "/listen 80 default_server;/ a \\t add_header X-Served-By $HOSTNAME;" /etc/nginx/sites-available/default
sudo service restart nginx
