#pragma once
#include <cstdint>
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeLevelNameInterpolantBase : public ULerpVolumeInterpolant {
public:
    static ULerpVolumeLevelNameInterpolantBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
