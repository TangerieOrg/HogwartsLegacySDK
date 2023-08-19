#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGenericNotificationData {
    FString HeaderText; // 0x0
    FString SubheaderText; // 0x10
    FString IconName; // 0x20
}; // Size: 0x30
#pragma pack(pop)
