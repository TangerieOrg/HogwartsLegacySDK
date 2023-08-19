#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeTagInterpolantBase : public ULerpVolumeInterpolant {
public:
    FLerpVolumesTagName Name; // 0x28
    static ULerpVolumeTagInterpolantBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
