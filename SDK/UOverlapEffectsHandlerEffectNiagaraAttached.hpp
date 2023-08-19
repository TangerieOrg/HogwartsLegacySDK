#pragma once
#include <cstdint>
#include "EOverlapEffectsAttachment.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UOverlapEffectsHandlerEffectNiagara.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectNiagaraAttached : public UOverlapEffectsHandlerEffectNiagara {
public:
    EOverlapEffectsAttachment Attachment; // 0x58
    char pad_59[0x3];
    FName AttachPointName; // 0x5c
    FVector AttachLocation; // 0x64
    FRotator AttachRotation; // 0x70
    bool bOnlyOneEffectActiveAtAnyTime; // 0x7c
    char pad_7d[0x3];
    static UOverlapEffectsHandlerEffectNiagaraAttached* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
