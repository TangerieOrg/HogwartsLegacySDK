#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMailEntry {
    FName m_sender; // 0x0
    FString m_mailKey; // 0x8
    bool m_bShouldAutoPlay; // 0x18
    char pad_19[0x3f];
}; // Size: 0x58
#pragma pack(pop)
