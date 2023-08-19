#pragma once
#include <cstdint>
#include "EAvaAudioDialogueEmotionHint.hpp"
#include "SocialSemanticIDs.hpp"
#pragma pack(push, 1)
struct FAudioDialogueLineData {
    FString lineID; // 0x0
    FString LocDirectKey; // 0x10
    float DurationSeconds; // 0x20
    int32_t DialogueHandle; // 0x24
    char pad_28[0x8];
    FString VoiceName; // 0x30
    bool bIsFromConversation; // 0x40
    bool bIsEmote; // 0x41
    bool bForceSubtitle; // 0x42
    bool bSuppressSubtitle; // 0x43
    bool bSuppressSubtitleCharacterName; // 0x44
    EAvaAudioDialogueEmotionHint EmotionHint; // 0x45
    SocialSemanticIDs SocialSemanticEmotionHint; // 0x46
    uint8_t AudioPriority; // 0x47
    bool bNonSpatialized; // 0x48
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
