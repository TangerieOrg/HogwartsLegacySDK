#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHoudiniRuntimeSettingsRecomputeFlag : uint8_t {
    HRSRF_Always = 0,
    HRSRF_OnlyIfMissing = 1,
    HRSRF_Nothing = 2,
    HRSRF_MAX = 3,
};
#pragma pack(pop)
