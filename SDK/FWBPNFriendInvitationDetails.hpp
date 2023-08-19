#pragma once
#include <cstdint>
#include "EFriendInvitationState.hpp"
#include "FWBPNAccountDisplayDetails.hpp"
#pragma pack(push, 1)
struct FWBPNFriendInvitationDetails {
    FString m_id; // 0x0
    FString m_sentFrom; // 0x10
    FString m_sentTo; // 0x20
    EFriendInvitationState m_state; // 0x30
    char pad_31[0x7];
    FWBPNAccountDisplayDetails m_account; // 0x38
}; // Size: 0x78
#pragma pack(pop)
