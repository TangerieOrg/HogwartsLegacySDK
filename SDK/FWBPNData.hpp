#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWBPNData {
    bool m_isLoggedIn; // 0x0
    char pad_1[0x7];
    FString m_deviceFlowVerificationUrl; // 0x8
    FString m_deviceFlowCode; // 0x18
}; // Size: 0x28
#pragma pack(pop)
