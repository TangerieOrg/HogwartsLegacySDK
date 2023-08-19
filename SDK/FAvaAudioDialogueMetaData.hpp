#pragma once
#include <cstdint>
#include "EAvaAudioDialogueEmotionHint.hpp"
#pragma pack(push, 1)
struct FAvaAudioDialogueMetaData {
    float DurationSeconds; // 0x0
    float LipsyncPrerollSeconds; // 0x4
    int32_t SocialSemanticEmotionHint; // 0x8
    EAvaAudioDialogueEmotionHint EmotionHint; // 0xc
    bool bIsLanguageSpecific; // 0xd
    bool bIsEmote; // 0xe
    char pad_f[0x2];
    bool bForceSubtitle; // 0x11
    bool bSuppressSubtitle; // 0x12
    bool bSuppressSubtitleCharacterName; // 0x13
    char pad_14[0x54];
}; // Size: 0x68
#pragma pack(pop)
