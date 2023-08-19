#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWBPNWizardingWorldLinkAttributeData {
    FString m_keyname; // 0x0
    FString m_value; // 0x10
    FString m_iss; // 0x20
    FString m_issuerKeynameHash; // 0x30
}; // Size: 0x40
#pragma pack(pop)
