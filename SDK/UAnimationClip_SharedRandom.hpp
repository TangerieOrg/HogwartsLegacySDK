#pragma once
#include <cstdint>
#include "FAnimationClip_SharedRandomEntry.hpp"
#include "UAnimationClipProvider.hpp"
#pragma pack(push, 1)
class UAnimationClip_SharedRandom : public UAnimationClipProvider {
public:
    bool AvoidPickingSameTwice; // 0x28
    char pad_29[0x7];
    TArray<FAnimationClip_SharedRandomEntry> Entries; // 0x30
    static UAnimationClip_SharedRandom* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
