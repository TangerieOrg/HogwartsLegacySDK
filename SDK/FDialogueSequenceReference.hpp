#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDialogueSequenceReference {
    FString EventID; // 0x0
    FString SequenceID; // 0x10
}; // Size: 0x20
#pragma pack(pop)
