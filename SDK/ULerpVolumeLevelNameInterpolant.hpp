#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeLevelNameInterpolantBase.hpp"
#pragma pack(push, 1)
class ULerpVolumeLevelNameInterpolant : public ULerpVolumeLevelNameInterpolantBase {
public:
    FLerpVolumesTagName Name; // 0x28
    FLerpVolumesLevelName LevelName; // 0x30
    static ULerpVolumeLevelNameInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
