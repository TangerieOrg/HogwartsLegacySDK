#pragma once
#include <cstdint>
#include "EFriendInvitationState.hpp"
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FWBPNFriendInvitation {
    FDateTime m_createdAt; // 0x0
    FDateTime m_updatedAt; // 0x8
    FString m_sentFrom; // 0x10
    FString m_sentTo; // 0x20
    EFriendInvitationState m_state; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
