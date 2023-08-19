#pragma once
#include <cstdint>
#include "FCompanionSettingData.hpp"
#include "FGameplayTag.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCompanionConfigData : public UDataAsset {
public:
    FCompanionSettingData CompanionSettingData; // 0x30
    SocialCapitalStatusIDs SoCapStatusOnDismissal; // 0xb0
    char pad_b1[0x3];
    FGameplayTag DisillusionmentPerkTag; // 0xb4
    FName CompanionForbiddenAreaMessage; // 0xbc
    char pad_c4[0x54];
    float ForcedCompanionPlaybackProbability; // 0x118
    char pad_11c[0x4];
    static UCompanionConfigData* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
