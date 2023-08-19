#pragma once
#include <cstdint>
#include "FCharacterLightRigAdjustments.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCharacterLightRigAdjustmentsSettings : public UDataAsset {
public:
    TArray<FCharacterLightRigAdjustments> Settings; // 0x30
    static UCharacterLightRigAdjustmentsSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
