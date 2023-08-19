#pragma once
#include <cstdint>
#include "FLightOnOffFX.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULightOnOffFXList : public UDataAsset {
public:
    TArray<FLightOnOffFX> FXList; // 0x30
    static ULightOnOffFXList* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
