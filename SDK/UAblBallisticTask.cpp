#include "EBallisticTaskDestinationSource.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblBallisticTask.hpp"
UAblBallisticTask* UAblBallisticTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBallisticTask");
    return (UAblBallisticTask*)res;
}
