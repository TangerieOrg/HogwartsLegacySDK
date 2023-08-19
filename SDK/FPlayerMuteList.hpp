#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPlayerMuteList {
    char pad_0[0x30];
    bool bHasVoiceHandshakeCompleted; // 0x30
    char pad_31[0x3];
    int32_t VoiceChannelIdx; // 0x34
}; // Size: 0x38
#pragma pack(pop)
