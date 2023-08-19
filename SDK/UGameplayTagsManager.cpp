#include "UDataTable.hpp"
#include "UGameplayTagsManager.hpp"
#include "UObject.hpp"
UGameplayTagsManager* UGameplayTagsManager::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTags.GameplayTagsManager");
    return (UGameplayTagsManager*)res;
}
