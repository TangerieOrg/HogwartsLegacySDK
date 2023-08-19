#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblAbilityInstance.hpp"
#include "UAblAbilityTask.hpp"
#include "UObject.hpp"
UAblAbilityInstance* UAblAbilityInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityInstance");
    return (UAblAbilityInstance*)res;
}
