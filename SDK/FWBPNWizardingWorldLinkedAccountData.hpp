#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWBPNWizardingWorldLinkedAccountData {
    FString m_Source; // 0x0
    FString m_iss; // 0x10
    bool m_isParent; // 0x20
    char pad_21[0x7];
    FString m_groupHash; // 0x28
    FString m_groupLink; // 0x38
}; // Size: 0x48
#pragma pack(pop)
