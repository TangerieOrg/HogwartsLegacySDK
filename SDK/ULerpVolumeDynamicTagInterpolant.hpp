#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDynamicTagInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesTagName Name; // 0x28
    static ULerpVolumeDynamicTagInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
