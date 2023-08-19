#pragma once
#include <cstdint>
#include "UGlobalLightingBlendableModsBase.hpp"
class UGlobalLightRigMod;
#pragma pack(push, 1)
class UGlobalLightingBlendableMods : public UGlobalLightingBlendableModsBase {
public:
    TArray<UGlobalLightRigMod*> Mods; // 0x28
    static UGlobalLightingBlendableMods* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
