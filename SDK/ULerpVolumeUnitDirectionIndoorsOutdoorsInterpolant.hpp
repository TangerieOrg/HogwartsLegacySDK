#pragma once
#include <cstdint>
#include "FLerpVolumesUnitDirectionName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeUnitDirectionIndoorsOutdoorsInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesUnitDirectionName Name; // 0x28
    FVector IndoorsValue; // 0x30
    FVector OutdoorsValue; // 0x3c
    static ULerpVolumeUnitDirectionIndoorsOutdoorsInterpolant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
