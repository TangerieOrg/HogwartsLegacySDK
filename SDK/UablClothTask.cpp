#include "UAblAbilityTask.hpp"
#include "UablClothTask.hpp"
UablClothTask* UablClothTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablClothTask");
    return (UablClothTask*)res;
}
