#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "FCustomBlendableVDHW.hpp"
#include "UGlobalLightingBlendable.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableVDHW : public UGlobalLightingBlendable {
public:
    FCustomBlendableVDHW VDHW; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x48
    char pad_49[0x7];
    static UGlobalLightingBlendableVDHW* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
