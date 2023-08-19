#pragma once
#include <cstdint>
#include "FLerpVolumesVectorName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeVectorInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesVectorName Name; // 0x28
    FVector Value; // 0x30
    char pad_3c[0x4];
    static ULerpVolumeVectorInterpolant* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
