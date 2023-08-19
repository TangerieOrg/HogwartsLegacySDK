#pragma once
#include <cstdint>
#include "ARenderSettingsViewpointVolumeBase.hpp"
#pragma pack(push, 1)
class ARenderSettingsViewpointInsideOutsideVolume : public ARenderSettingsViewpointVolumeBase {
public:
    float TargetViewpointLerp; // 0x290
    float InsideMaxDifference; // 0x294
    float InsideMinDifference; // 0x298
    float ViewpointLerp; // 0x29c
    static ARenderSettingsViewpointInsideOutsideVolume* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
