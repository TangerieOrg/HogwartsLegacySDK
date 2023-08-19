#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FWBPNGenerateDeviceTokenResponse {
    FString m_url; // 0x0
    FString m_code; // 0x10
    FString m_deviceToken; // 0x20
    float m_pollInterval; // 0x30
    char pad_34[0x4];
    FDateTime m_expiresAt; // 0x38
}; // Size: 0x40
#pragma pack(pop)
