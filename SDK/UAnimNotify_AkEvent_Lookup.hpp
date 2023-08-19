#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_AkEvent_Lookup : public UAnimNotify {
public:
    FGameplayTagContainer LookupTags; // 0x38
    bool bFollow; // 0x58
    char pad_59[0x3];
    FName SocketName; // 0x5c
    bool bObstructionAndOcclusion; // 0x64
    char pad_65[0x3];
    float MaxDistanceToListener; // 0x68
    bool bUseMotionListener; // 0x6c
    bool bUsePlayerOrientation; // 0x6d
    char pad_6e[0x2];
    static UAnimNotify_AkEvent_Lookup* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
