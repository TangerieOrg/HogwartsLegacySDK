#pragma once
#include <cstdint>
#include "EOverlapEffectsAttachment.hpp"
#include "FColor.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectDebugBox : public UOverlapEffectsHandlerEffect {
public:
    EOverlapEffectsAttachment Attachment; // 0x28
    char pad_29[0x3];
    FColor BoxColor; // 0x2c
    float BoxThickness; // 0x30
    float DurationSeconds; // 0x34
    bool bEnabled; // 0x38
    char pad_39[0x7];
    static UOverlapEffectsHandlerEffectDebugBox* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
