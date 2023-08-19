#pragma once
#include <cstdint>
#include "FWBPNAvatarDetails.hpp"
#pragma pack(push, 1)
struct FWBPNAccountDisplayDetails {
    FString m_accountId; // 0x0
    FString m_username; // 0x10
    FWBPNAvatarDetails m_avatar; // 0x20
}; // Size: 0x40
#pragma pack(pop)
