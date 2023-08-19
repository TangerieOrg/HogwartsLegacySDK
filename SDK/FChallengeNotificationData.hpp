#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FChallengeNotificationData {
    FName ChallengeID; // 0x0
    FName ChallengeCategory; // 0x8
    int32_t Completed; // 0x10
    int32_t Total; // 0x14
}; // Size: 0x18
#pragma pack(pop)
