#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EForcedNavigationMode {
    None = 0,
    FreezeNavigation = 1,
    AsyncPathNavigation = 2,
    EForcedNavigationMode_MAX = 3,
};
#pragma pack(pop)
