#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUIMailInfo {
    FString MailKey; // 0x0
    FString SenderName; // 0x10
    bool IsRead; // 0x20
    char pad_21[0x7];
    FString SendDate; // 0x28
    int32_t AttachedContainerSize; // 0x38
    char pad_3c[0x4];
    FString AttachedContainerID; // 0x40
    bool CanArchive; // 0x50
    bool CanDelete; // 0x51
    char pad_52[0x6];
}; // Size: 0x58
#pragma pack(pop)
