#
# Copyright (C) 2024 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

PRODUCT_MAKEFILES := \
    $(LOCAL_DIR)/lineage_generic.mk \
    $(LOCAL_DIR)/infinity_light.mk

COMMON_LUNCH_CHOICES := \
    lineage_generic-user \
    lineage_generic-userdebug \
    lineage_generic-eng \
    infinity_generic-user \
    infinity_generic-userdebug \
    infinity_generic-eng
