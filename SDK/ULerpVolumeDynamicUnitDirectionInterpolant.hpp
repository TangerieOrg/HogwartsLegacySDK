#pragma once
#include <cstdint>
#include "FLerpVolumesUnitDirectionName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDynamicUnitDirectionInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesUnitDirectionName Name; // 0x28
    static ULerpVolumeDynamicUnitDirectionInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
