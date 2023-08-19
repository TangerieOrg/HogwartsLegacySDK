#pragma once
#include <cstdint>
namespace EInAppPurchaseState {
#pragma pack(push, 1)
enum Type {
    Unknown = 0,
    Success = 1,
    Failed = 2,
    Cancelled = 3,
    Invalid = 4,
    NotAllowed = 5,
    Restored = 6,
    AlreadyOwned = 7,
    EInAppPurchaseState_MAX = 8,
};
#pragma pack(pop)
}
