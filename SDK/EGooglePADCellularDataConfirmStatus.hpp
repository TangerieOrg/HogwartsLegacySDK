#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGooglePADCellularDataConfirmStatus : uint8_t {
    AssetPack_CONFIRM_UNKNOWN = 0,
    AssetPack_CONFIRM_PENDING = 1,
    AssetPack_CONFIRM_USER_APPROVED = 2,
    AssetPack_CONFIRM_USER_CANCELED = 3,
    AssetPack_CONFIRM_MAX = 4,
};
#pragma pack(pop)
