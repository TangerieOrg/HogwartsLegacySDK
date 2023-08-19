#pragma once
#include <cstdint>
#include "EOverlapEffectsAttachment.hpp"
#include "FMultiFX2Handle.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
class UMultiFX2Asset;
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectMultiFX : public UOverlapEffectsHandlerEffect {
public:
    UMultiFX2Asset* FXAsset; // 0x28
    EOverlapEffectsAttachment Attachment; // 0x30
    char pad_31[0x3];
    FName AttachPointName; // 0x34
    FVector AttachLocation; // 0x3c
    FRotator AttachRotation; // 0x48
    bool bOnlyOneEffectAtATime; // 0x54
    char pad_55[0x3];
    FMultiFX2Handle FXHandle; // 0x58
    static UOverlapEffectsHandlerEffectMultiFX* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
