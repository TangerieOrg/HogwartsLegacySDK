#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInAppPurchaseStatus {
    Invalid = 0,
    Failed = 1,
    Deferred = 2,
    Canceled = 3,
    Purchased = 4,
    Restored = 5,
    EInAppPurchaseStatus_MAX = 6,
};
#pragma pack(pop)
