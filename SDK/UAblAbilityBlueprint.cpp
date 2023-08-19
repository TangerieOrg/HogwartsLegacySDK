#include "UAblAbilityBlueprint.hpp"
#include "UBlueprint.hpp"
UAblAbilityBlueprint* UAblAbilityBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityBlueprint");
    return (UAblAbilityBlueprint*)res;
}
