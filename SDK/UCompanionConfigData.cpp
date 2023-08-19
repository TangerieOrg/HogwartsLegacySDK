#include "FCompanionSettingData.hpp"
#include "FGameplayTag.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "UCompanionConfigData.hpp"
#include "UDataAsset.hpp"
UCompanionConfigData* UCompanionConfigData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompanionConfigData");
    return (UCompanionConfigData*)res;
}
