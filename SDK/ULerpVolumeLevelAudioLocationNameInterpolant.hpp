#pragma once
#include <cstdint>
#include "FLerpVolumesAudioStateGroupLocation.hpp"
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeLevelNameInterpolantBase.hpp"
#pragma pack(push, 1)
class ULerpVolumeLevelAudioLocationNameInterpolant : public ULerpVolumeLevelNameInterpolantBase {
public:
    FLerpVolumesTagName Name; // 0x28
    FLerpVolumesAudioStateGroupLocation LevelName; // 0x30
    static ULerpVolumeLevelAudioLocationNameInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
