#include "UAblAbilityTask.hpp"
#include "UablNPCPhysicsTask.hpp"
UablNPCPhysicsTask* UablNPCPhysicsTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPCPhysicsTask");
    return (UablNPCPhysicsTask*)res;
}
