#
# Copyright (C) 2024 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit framework first
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/languages_full.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/product_launched_with_p.mk)

# Inherit some common Infinity-X stuff.
$(call inherit-product, vendor/infinity/config/common_full_phone.mk)

# Inherit from light device
$(call inherit-product, device/xiaomi/light/device.mk)

PRODUCT_DEVICE := light
PRODUCT_NAME := infinity_light
PRODUCT_BRAND := xiaomi
PRODUCT_MODEL := Redmi 10 5G
PRODUCT_MANUFACTURER := xiaomi

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

# Infinity-X Specific Flags
INFINITY_BUILD_TYPE := UNOFFICIAL
TARGET_BOOT_ANIMATION_RES := 1080
INFINITY_MAINTAINER := Sryngtys
WITH_GAPPS := true

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="missi_phone_global_ext4-user 14 UP1A.231005.007 V816.0.4.0.ULSMIXM release-keys"

BUILD_FINGERPRINT := Android/missi_phone_global_ext4/missi:14/UP1A.231005.007/V816.0.4.0.ULSMIXM:user/release-keys
