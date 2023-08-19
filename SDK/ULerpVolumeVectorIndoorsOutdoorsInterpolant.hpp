#pragma once
#include <cstdint>
#include "FLerpVolumesVectorName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeVectorIndoorsOutdoorsInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesVectorName Name; // 0x28
    FVector IndoorsValue; // 0x30
    FVector OutdoorsValue; // 0x3c
    static ULerpVolumeVectorIndoorsOutdoorsInterpolant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
