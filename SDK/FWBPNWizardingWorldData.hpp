#pragma once
#include <cstdint>
#include "FWBPNWizardingWorldLinkedAccountData.hpp"
#pragma pack(push, 1)
struct FWBPNWizardingWorldData {
    FString m_sourceUserId; // 0x0
    FString m_Source; // 0x10
    FString m_issuer; // 0x20
    FString m_groupHash; // 0x30
    TArray<FWBPNWizardingWorldLinkedAccountData> m_linkedAccounts; // 0x40
}; // Size: 0x50
#pragma pack(pop)
