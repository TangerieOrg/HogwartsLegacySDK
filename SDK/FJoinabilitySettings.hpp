#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FJoinabilitySettings {
    FName SessionName; // 0x0
    bool bPublicSearchable; // 0x8
    bool bAllowInvites; // 0x9
    bool bJoinViaPresence; // 0xa
    bool bJoinViaPresenceFriendsOnly; // 0xb
    int32_t MaxPlayers; // 0xc
    int32_t MaxPartySize; // 0x10
}; // Size: 0x14
#pragma pack(pop)
