#include "UDeveloperSettings.hpp"
#include "UGameplayTagsDeveloperSettings.hpp"
UGameplayTagsDeveloperSettings* UGameplayTagsDeveloperSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTags.GameplayTagsDeveloperSettings");
    return (UGameplayTagsDeveloperSettings*)res;
}
