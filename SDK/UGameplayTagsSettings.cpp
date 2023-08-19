#include "FGameplayTagCategoryRemap.hpp"
#include "FGameplayTagRedirect.hpp"
#include "FRestrictedConfigInfo.hpp"
#include "FSoftObjectPath.hpp"
#include "UGameplayTagsList.hpp"
#include "UGameplayTagsSettings.hpp"
UGameplayTagsSettings* UGameplayTagsSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTags.GameplayTagsSettings");
    return (UGameplayTagsSettings*)res;
}
