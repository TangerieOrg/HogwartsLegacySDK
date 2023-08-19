#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFT_TravelType : uint8_t {
    NormalFastTravelOnly = 0,
    UseFastTravelCVar = 1,
    UnloadFastTravelOnly = 2,
    EFT_MAX = 3,
};
#pragma pack(pop)
