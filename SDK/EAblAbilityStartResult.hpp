#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblAbilityStartResult : uint8_t {
    InvalidTarget = 0,
    FailedCustomCheck = 1,
    CooldownNotExpired = 2,
    CannotInterruptCurrentAbility = 3,
    NotAllowedAsPassive = 4,
    PassiveMaxStacksReached = 5,
    InternalSystemsError = 6,
    AsyncProcessing = 7,
    ForwardedToServer = 8,
    InvalidParameter = 9,
    Success = 10,
    EAblAbilityStartResult_MAX = 11,
};
#pragma pack(pop)
