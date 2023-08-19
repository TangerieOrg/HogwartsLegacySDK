#pragma once
#include <cstdint>
#include "UAnimationClipProvider.hpp"
#pragma pack(push, 1)
class UAnimationClip_Sequential : public UAnimationClipProvider {
public:
    TArray<UAnimationClipProvider*> Entries; // 0x28
    char pad_38[0x8];
    static UAnimationClip_Sequential* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
