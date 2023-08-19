#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FWBPNAvatarDetails.hpp"
#pragma pack(push, 1)
struct FWBPNAccount {
    FString m_id; // 0x0
    FDateTime m_createdAt; // 0x10
    FDateTime m_updatedAt; // 0x18
    FString m_publicId; // 0x20
    bool m_isComplete; // 0x30
    char pad_31[0x7];
    FString m_username; // 0x38
    FString m_locale; // 0x48
    FWBPNAvatarDetails m_avatar; // 0x58
    FDateTime m_lastLogin; // 0x78
}; // Size: 0x80
#pragma pack(pop)
