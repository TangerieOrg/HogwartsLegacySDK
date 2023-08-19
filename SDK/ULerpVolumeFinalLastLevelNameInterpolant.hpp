#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeFinalLastLevelNameInterpolant : public ULerpVolumeFinalTagInterpolant {
public:
    FLerpVolumesTagName LevelNameInterpolant; // 0x30
    static ULerpVolumeFinalLastLevelNameInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
