#include "UAblAbilityTask.hpp"
#include "UClass.hpp"
#include "UablPreStartMoveBodyLeanTask.hpp"
UablPreStartMoveBodyLeanTask* UablPreStartMoveBodyLeanTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablPreStartMoveBodyLeanTask");
    return (UablPreStartMoveBodyLeanTask*)res;
}
