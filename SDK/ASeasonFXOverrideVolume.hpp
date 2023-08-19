#pragma once
#include <cstdint>
#include "ASeasonOverrideVolume.hpp"
#include "ESeasonEnum.hpp"
#pragma pack(push, 1)
class ASeasonFXOverrideVolume : public ASeasonOverrideVolume {
public:
    ESeasonEnum SeasonOverride; // 0x290
    char pad_291[0x3];
    int32_t PhaseOverride; // 0x294
    static ASeasonFXOverrideVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
