#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWBPNLoginResponse {
    FString m_accessToken; // 0x0
    int32_t m_expiresIn; // 0x10
    bool m_mfaRequired; // 0x14
    char pad_15[0x3];
    FString m_refreshToken; // 0x18
    int32_t m_refreshExpiresIn; // 0x28
    char pad_2c[0x8c];
}; // Size: 0xb8
#pragma pack(pop)
