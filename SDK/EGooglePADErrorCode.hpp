#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGooglePADErrorCode : uint8_t {
    AssetPack_NO_ERROR = 0,
    AssetPack_APP_UNAVAILABLE = 1,
    AssetPack_UNAVAILABLE = 2,
    AssetPack_INVALID_REQUEST = 3,
    AssetPack_DOWNLOAD_NOT_FOUND = 4,
    AssetPack_API_NOT_AVAILABLE = 5,
    AssetPack_NETWORK_ERROR = 6,
    AssetPack_ACCESS_DENIED = 7,
    AssetPack_INSUFFICIENT_STORAGE = 8,
    AssetPack_PLAY_STORE_NOT_FOUND = 9,
    AssetPack_NETWORK_UNRESTRICTED = 10,
    AssetPack_INTERNAL_ERROR = 11,
    AssetPack_INITIALIZATION_NEEDED = 12,
    AssetPack_INITIALIZATION_FAILED = 13,
    AssetPack_MAX = 14,
};
#pragma pack(pop)
