#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UablDugbogLungeAttackTask.hpp"
UablDugbogLungeAttackTask* UablDugbogLungeAttackTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablDugbogLungeAttackTask");
    return (UablDugbogLungeAttackTask*)res;
}
