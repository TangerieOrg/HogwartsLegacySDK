#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMenuReaderVoice {
    FString VoiceID; // 0x0
    FString Description; // 0x10
    FString Gender; // 0x20
}; // Size: 0x30
#pragma pack(pop)
