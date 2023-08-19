#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAbleSettings : public UObject {
public:
    bool m_EnableAsync; // 0x28
    bool m_AllowAsyncAbilityUpdate; // 0x29
    bool m_AllowAsyncCooldownUpdate; // 0x2a
    bool m_LogAbilityFailues; // 0x2b
    bool m_LogVerbose; // 0x2c
    bool m_EchoVerboseToScreen; // 0x2d
    char pad_2e[0x2];
    float m_VerboseScreenOutputLifetime; // 0x30
    char pad_34[0x4];
    static UAbleSettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
