#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeLevelNameInterpolantBase.hpp"
#pragma pack(push, 1)
class ULerpVolumeManualLevelNameInterpolant : public ULerpVolumeLevelNameInterpolantBase {
public:
    FLerpVolumesTagName Name; // 0x28
    FName UseLevelName; // 0x30
    static ULerpVolumeManualLevelNameInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
