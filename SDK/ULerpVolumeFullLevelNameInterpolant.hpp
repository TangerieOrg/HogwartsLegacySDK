#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeFullLevelNameInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesTagName Name; // 0x28
    bool bExhaustiveLevels; // 0x30
    char pad_31[0x7];
    static ULerpVolumeFullLevelNameInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
