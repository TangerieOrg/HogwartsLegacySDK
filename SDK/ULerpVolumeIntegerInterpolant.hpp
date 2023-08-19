#pragma once
#include <cstdint>
#include "FLerpVolumesIntegerName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeIntegerInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesIntegerName Name; // 0x28
    int32_t Value; // 0x30
    char pad_34[0x4];
    static ULerpVolumeIntegerInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
