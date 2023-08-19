#pragma once
#include <cstdint>
#include "FLerpVolumesIntegerName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeIntegerIndoorsOutdoorsInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesIntegerName Name; // 0x28
    int32_t IndoorsValue; // 0x30
    int32_t OutdoorsValue; // 0x34
    static ULerpVolumeIntegerIndoorsOutdoorsInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
