#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGooglePADStorageMethod : uint8_t {
    AssetPack_STORAGE_FILES = 0,
    AssetPack_STORAGE_APK = 1,
    AssetPack_STORAGE_UNKNOWN = 2,
    AssetPack_STORAGE_NOT_INSTALLED = 3,
    AssetPack_STORAGE_MAX = 4,
};
#pragma pack(pop)
