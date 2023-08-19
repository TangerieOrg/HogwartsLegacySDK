#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FWBPNAccountDisplayDetails.hpp"
#pragma pack(push, 1)
struct FWBPNFriendDetails {
    FWBPNAccountDisplayDetails m_account; // 0x0
    FDateTime m_createdAt; // 0x40
}; // Size: 0x48
#pragma pack(pop)
