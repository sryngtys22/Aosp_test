/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t lightcm_info = {
    .hwc_value = "light",
    .sku_value = "light",

    .brand = "Redmi",
    .device = "lightcm",
    .model = "Redmi Note 11R",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",


    .nfc = false,
};

static const variant_info_t lightin1_info = {
    .hwc_value = "light",
    .sku_value = "light_global",

    .brand = "Redmi",
    .device = "light",
    .model = "Redmi Note 11E",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",


    .nfc = false,
};

static const variant_info_t light_info = {
    .hwc_value = "lightcn",
    .sku_value = "light",

    .brand = "Redmi",
    .device = "light",
    .model = "Redmi 10 5G",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys"

    
};

static const variant_info_t lightgl_info = {
    .hwc_value = "lightgl",
    .sku_value = "light",

    .brand = "Redmi",
    .device = "light",
    .model = "Redmi 10 prime+ 5G",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys"

   
};

static const variant_info_t lightin_info = {
    .hwc_value = "lightin",
    .sku_value = "light",

    .brand = "POCO",
    .device = "light",
    .model = "POCO M4 5G",
    .build_fingerprint = "POCO/light/light_in:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",


    .nfc = false,
};

static const variant_info_t lightea_info = {
    .hwc_value = "light",
    .sku_value = "light",

    .brand = "Redmi",
    .device = "lightcm",
    .model = "Redmi 11 prime 5G",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",


    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    lightcm_info,
    lightin1_info,
    light_info,
    lightgl_info,
    lightin_info,
    lightea_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
