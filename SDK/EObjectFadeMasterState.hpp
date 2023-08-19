#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EObjectFadeMasterState : uint8_t {
    NotFound = 0,
    FadingIn = 1,
    FadingOut = 2,
    EObjectFadeMasterState_MAX = 3,
};
#pragma pack(pop)
