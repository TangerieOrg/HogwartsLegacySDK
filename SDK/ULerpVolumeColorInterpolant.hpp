#pragma once
#include <cstdint>
#include "FLerpVolumesColorName.hpp"
#include "FLinearColor.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeColorInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesColorName Name; // 0x28
    FLinearColor Value; // 0x30
    static ULerpVolumeColorInterpolant* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
