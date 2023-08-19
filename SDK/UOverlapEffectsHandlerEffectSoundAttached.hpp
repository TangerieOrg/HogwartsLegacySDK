#pragma once
#include <cstdint>
#include "EOverlapEffectsAttachment.hpp"
#include "UOverlapEffectsHandlerEffectSound.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectSoundAttached : public UOverlapEffectsHandlerEffectSound {
public:
    EOverlapEffectsAttachment Attachment; // 0x38
    char pad_39[0x7];
    static UOverlapEffectsHandlerEffectSoundAttached* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
