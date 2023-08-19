#pragma once
#include <cstdint>
#include "EOverlapEffectsAttachment.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
class UClass;
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectSkinFX : public UOverlapEffectsHandlerEffect {
public:
    UClass* SkinFX; // 0x28
    EOverlapEffectsAttachment Attachment; // 0x30
    char pad_31[0x7];
    static UOverlapEffectsHandlerEffectSkinFX* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
