#include "UAblAbilityAsset.hpp"
#include "UDataAsset.hpp"
UAblAbilityAsset* UAblAbilityAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityAsset");
    return (UAblAbilityAsset*)res;
}
