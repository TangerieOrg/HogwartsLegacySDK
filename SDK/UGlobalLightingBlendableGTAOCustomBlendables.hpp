#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "FCustomBlendableGTAO.hpp"
#include "UGlobalLightingBlendable.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableGTAOCustomBlendables : public UGlobalLightingBlendable {
public:
    FCustomBlendableGTAO GTAO; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x4c
    char pad_4d[0x3];
    static UGlobalLightingBlendableGTAOCustomBlendables* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
