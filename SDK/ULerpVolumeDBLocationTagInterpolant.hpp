#pragma once
#include <cstdint>
#include "ULerpVolumeDynamicTagInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDBLocationTagInterpolant : public ULerpVolumeDynamicTagInterpolant {
public:
    FString Location; // 0x30
    FName LocationName; // 0x40
    static ULerpVolumeDBLocationTagInterpolant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
