#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UGlobalLightRigMod;
#pragma pack(push, 1)
class UGlobalLightRigModCollection : public UDataAsset {
public:
    TArray<UGlobalLightRigMod*> Mods; // 0x30
    static UGlobalLightRigModCollection* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
