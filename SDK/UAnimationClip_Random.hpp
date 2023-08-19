#pragma once
#include <cstdint>
#include "FAnimationClip_RandomEntry.hpp"
#include "UAnimationClipProvider.hpp"
#pragma pack(push, 1)
class UAnimationClip_Random : public UAnimationClipProvider {
public:
    bool AvoidPickingSameTwice; // 0x28
    char pad_29[0x7];
    TArray<FAnimationClip_RandomEntry> Entries; // 0x30
    char pad_40[0x8];
    static UAnimationClip_Random* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
