#pragma once
#include <cstdint>
#include "FWBPNAccountDisplayDetails.hpp"
#pragma pack(push, 1)
struct FWBPNAccountContactDetails {
    FString m_ownerId; // 0x0
    FString m_contactId; // 0x10
    bool m_blocked; // 0x20
    char pad_21[0x7];
    FWBPNAccountDisplayDetails m_account; // 0x28
}; // Size: 0x68
#pragma pack(pop)
