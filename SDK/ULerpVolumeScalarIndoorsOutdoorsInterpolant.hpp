#pragma once
#include <cstdint>
#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeScalarIndoorsOutdoorsInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesScalarName Name; // 0x28
    float IndoorsValue; // 0x30
    float OutdoorsValue; // 0x34
    static ULerpVolumeScalarIndoorsOutdoorsInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
