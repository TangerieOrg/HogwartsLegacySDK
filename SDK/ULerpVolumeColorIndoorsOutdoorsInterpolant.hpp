#pragma once
#include <cstdint>
#include "FLerpVolumesColorName.hpp"
#include "FLinearColor.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeColorIndoorsOutdoorsInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesColorName Name; // 0x28
    FLinearColor IndoorsValue; // 0x30
    FLinearColor OutdoorsValue; // 0x40
    static ULerpVolumeColorIndoorsOutdoorsInterpolant* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
