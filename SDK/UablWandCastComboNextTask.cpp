#include "EWandComboType\Type.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UClass.hpp"
#include "UablWandCastComboNextTask.hpp"
UablWandCastComboNextTask* UablWandCastComboNextTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablWandCastComboNextTask");
    return (UablWandCastComboNextTask*)res;
}
