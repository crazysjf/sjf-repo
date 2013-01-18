echo insmod begin
cmdline=`cat /proc/cmdline`
origin_cmdline="console=ttyAM2,115200n8 ip=on mem=57M memmap=0x01100000@0x32f00000"
echo $cmdline
echo $origin_cmdline

if [[ $cmdline == $origin_cmdline ]]; then
echo match
fi

