#pragma once
#include <cstdint>
#include "UAnimationClipProvider.hpp"
class UObject;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UBPAnimationClipProvider : public UAnimationClipProvider {
public:
    static UBPAnimationClipProvider* StaticClass();
    bool GetAnimationClipBP(UObject* Caller, UAnimSequenceBase*& OutAnimClip);
}; // Size: 0x28
#pragma pack(pop)
