IMAGE_CLASSES_append = " image_type_tezi"
IMAGE_FSTYPES_append = " teziimg"
TORADEX_PRODUCT_IDS = "0027 0028 0029 0035"
# The payload offsets are given in number of 512 byte blocks.
OFFSET_BOOTROM_PAYLOAD = "2"
OFFSET_SPL_PAYLOAD = "138"

MACHINE_NAME = "Apalis-iMX6"

KERNEL_DEVICETREE += "imx6q-apalis-ixora-v1.2.dtb"
KERNEL_DEVICETREE_use-mainline-bsp += " \
    imx6q-apalis-eval.dtb \
    imx6q-apalis-ixora-v1.1.dtb \
"

PREFERRED_PROVIDER_virtual/kernel = "linux-toradex"
PREFERRED_PROVIDER_virtual/kernel_preempt-rt = "linux-toradex"
PREFERRED_PROVIDER_virtual/kernel_use-mainline-bsp = "linux-toradex-mainline"
PREFERRED_PROVIDER_virtual/kernel_use-mainline-bsp_preempt-rt = "linux-toradex-mainline"
PREFERRED_PROVIDER_virtual/dtb_use-mainline-bsp = "device-tree-overlays-mainline"

PREFERRED_PROVIDER_u-boot-default-script = "u-boot-distro-boot"
UBOOT_SUFFIX = "img"

UBOOT_ENTRYPOINT_apalis-imx6 = "0x11000000"
UBOOT_DTB_LOADADDRESS_apalis-imx6 = "0x12100000"
UBOOT_DTBO_LOADADDRESS_apalis-imx6 = "0x17000000"

MACHINE_FIRMWARE_remove = "firmware-imx-epdc"

TEZI_EXTERNAL_KERNEL_DEVICETREE_BOOT = "apalis-imx6_hdmi_overlay.dtbo"
TEZI_EXTERNAL_KERNEL_DEVICETREE_BOOT_use-mainline-bsp = "apalis-imx6_parallel-rgb_overlay.dtbo display-edt7_overlay.dtbo apalis-imx6_stmpe-ts_overlay.dtbo apalis-imx6_hdmi_overlay.dtbo apalis-imx6_vga_overlay.dtbo"
