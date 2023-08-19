#include "UAblAbilityTask.hpp"
#include "UablWandCastComboResetTask.hpp"
UablWandCastComboResetTask* UablWandCastComboResetTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablWandCastComboResetTask");
    return (UablWandCastComboResetTask*)res;
}
