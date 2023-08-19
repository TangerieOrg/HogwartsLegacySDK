#pragma once
#include <cstdint>
#include "FWBPNWizardingWorldLinkAttributeData.hpp"
#pragma pack(push, 1)
struct FWBPNWizardingWorldLinkData {
    FString m_Source; // 0x0
    FString m_iss; // 0x10
    FString m_groupHash; // 0x20
    FString m_groupLink; // 0x30
    TArray<FWBPNWizardingWorldLinkAttributeData> m_attributes; // 0x40
}; // Size: 0x50
#pragma pack(pop)
