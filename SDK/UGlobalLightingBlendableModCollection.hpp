#pragma once
#include <cstdint>
#include "UGlobalLightingBlendableModsBase.hpp"
class UGlobalLightRigModCollection;
#pragma pack(push, 1)
class UGlobalLightingBlendableModCollection : public UGlobalLightingBlendableModsBase {
public:
    UGlobalLightRigModCollection* ModCollection; // 0x28
    static UGlobalLightingBlendableModCollection* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
