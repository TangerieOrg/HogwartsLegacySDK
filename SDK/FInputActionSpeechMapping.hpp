#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FInputActionSpeechMapping {
    FName ActionName; // 0x0
    FName SpeechKeyword; // 0x8
}; // Size: 0x10
#pragma pack(pop)
