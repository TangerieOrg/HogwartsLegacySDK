#include "UAblAbilityTask.hpp"
#include "UablWandCastContextsTask.hpp"
UablWandCastContextsTask* UablWandCastContextsTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablWandCastContextsTask");
    return (UablWandCastContextsTask*)res;
}
