IMAGE_CLASSES_append = " image_type_tezi"
IMAGE_FSTYPES_append = " teziimg"
TORADEX_PRODUCT_IDS = "0014 0015 0016 0017"
# The payload offsets are given in number of 512 byte blocks.
OFFSET_BOOTROM_PAYLOAD = "2"
OFFSET_SPL_PAYLOAD = "138"

MACHINE_NAME = "Colibri-iMX6"

TEZI_EXTERNAL_KERNEL_DEVICETREE_BOOT = "colibri-imx6_lcd-lt161010_overlay.dtbo colibri-imx6_stmpe-ts_overlay.dtbo"
TEZI_EXTERNAL_KERNEL_DEVICETREE_BOOT_use-mainline-bsp = "colibri-imx6_parallel-rgb_overlay.dtbo colibri-imx6_stmpe-ts_overlay.dtbo display-edt7_overlay.dtbo"

IMAGE_BOOT_FILES_append = " boot.scr-${MACHINE};boot.scr"
WKS_FILE_DEPENDS_append = " u-boot-distro-boot"

KERNEL_DEVICETREE += " \
    imx6dl-colibri-iris.dtb \
    imx6dl-colibri-iris-v2.dtb \
"

PREFERRED_PROVIDER_virtual/kernel = "linux-toradex"
PREFERRED_PROVIDER_virtual/kernel_preempt-rt = "linux-toradex"
PREFERRED_PROVIDER_virtual/kernel_use-mainline-bsp = "linux-toradex-mainline"
PREFERRED_PROVIDER_virtual/kernel_use-mainline-bsp_preempt-rt = "linux-toradex-mainline"
PREFERRED_PROVIDER_virtual/dtb_use-mainline-bsp = "device-tree-overlays-mainline"

PREFERRED_PROVIDER_u-boot-default-script = "u-boot-distro-boot"
UBOOT_SUFFIX = "img"

MACHINE_FIRMWARE_remove = "firmware-imx-epdc"
