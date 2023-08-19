#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FWBPNAvatarDetails.hpp"
#pragma pack(push, 1)
struct FWBPNAccountLookupData {
    FString m_id; // 0x0
    FString m_publicId; // 0x10
    FString m_username; // 0x20
    FWBPNAvatarDetails m_avatar; // 0x30
    FDateTime m_lastLogin; // 0x50
}; // Size: 0x58
#pragma pack(pop)
