#pragma once
#include <cstdint>
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeTagIndoorsOutdoorsInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesTagName Name; // 0x28
    FString IndoorsValue; // 0x30
    FString OutdoorsValue; // 0x40
    FName IndoorsValueName; // 0x50
    FName OutdoorsValueName; // 0x58
    static ULerpVolumeTagIndoorsOutdoorsInterpolant* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
