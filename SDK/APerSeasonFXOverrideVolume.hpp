#pragma once
#include <cstdint>
#include "ASeasonOverrideVolume.hpp"
#include "ESeasonEnum.hpp"
#pragma pack(push, 1)
class APerSeasonFXOverrideVolume : public ASeasonOverrideVolume {
public:
    ESeasonEnum FallOverride; // 0x290
    char pad_291[0x3];
    int32_t FallPhaseOverride; // 0x294
    ESeasonEnum WinterOverride; // 0x298
    char pad_299[0x3];
    int32_t WinterPhaseOverride; // 0x29c
    ESeasonEnum SpringOverride; // 0x2a0
    char pad_2a1[0x3];
    int32_t SpringPhaseOverride; // 0x2a4
    ESeasonEnum SummerOverride; // 0x2a8
    char pad_2a9[0x3];
    int32_t SummerPhaseOverride; // 0x2ac
    static APerSeasonFXOverrideVolume* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
