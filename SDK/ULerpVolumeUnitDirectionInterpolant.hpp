#pragma once
#include <cstdint>
#include "FLerpVolumesUnitDirectionName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeUnitDirectionInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesUnitDirectionName Name; // 0x28
    FVector Value; // 0x30
    char pad_3c[0x4];
    static ULerpVolumeUnitDirectionInterpolant* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
