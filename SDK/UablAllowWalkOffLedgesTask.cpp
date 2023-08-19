#include "UAblAbilityTask.hpp"
#include "UablAllowWalkOffLedgesTask.hpp"
UablAllowWalkOffLedgesTask* UablAllowWalkOffLedgesTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAllowWalkOffLedgesTask");
    return (UablAllowWalkOffLedgesTask*)res;
}
