#include "FRestrictedGameplayTagTableRow.hpp"
#include "UObject.hpp"
#include "URestrictedGameplayTagsList.hpp"
URestrictedGameplayTagsList* URestrictedGameplayTagsList::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTags.RestrictedGameplayTagsList");
    return (URestrictedGameplayTagsList*)res;
}
