#pragma once
#include <cstdint>
#include "UExpHeightFogTransmuter.hpp"
class UGlobalLightRigMod;
#pragma pack(push, 1)
class UExpHeightFogTransmuterGlobalLightRigMod : public UExpHeightFogTransmuter {
public:
    TArray<UGlobalLightRigMod*> Mods; // 0x28
    static UExpHeightFogTransmuterGlobalLightRigMod* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
