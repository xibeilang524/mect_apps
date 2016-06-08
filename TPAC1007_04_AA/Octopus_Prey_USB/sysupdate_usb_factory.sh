#!/bin/sh

TARGET=`awk '{if ($1=="Target:") print $2}' /rootfs_version`

echo 100 > /sys/devices/platform/mxs-bl.0/backlight/mxs-bl/brightness

usbdev=/dev/sda
test -e /sys/block/sda/sda1 && usbdev=/dev/sda1
mntpoint=/mnt/floppy
test -d $mntpoint || mkdir -p $mntpoint
mkdir -p $mntpoint
mount -o sync $usbdev $mntpoint

mntdir=$mntpoint/$TARGET

echo "Application mode."

cd /local 2>/dev/null

rm -f data
test -d $mntdir/data || mkdir -p $mntdir/data
ln -s $mntdir/data 2>/dev/null

rm -f control
test -d $mntdir/control || mkdir -p $mntdir/control
ln -s $mntdir/control control 2>/dev/null

rm -f root
test -d $mntdir/root || mkdir -p $mntdir/root
ln -s $mntdir/root root 2>/dev/null
cp /local/flash/root/fcrts /root/

rm -f etc
cp -r /local/flash/etc $mntdir/etc
ln -s $mntdir/etc etc 2>/dev/null
/etc/rc.d/init.d/network restart

rm /local/kindofupdate.lck

echo "Updated the links."

return 0