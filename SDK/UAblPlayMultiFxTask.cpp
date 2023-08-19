#include "FAblMultiFxChildTask.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPlayMultiFxTask.hpp"
#include "UAblTaskCondition.hpp"
#include "UMultiFX2_Base.hpp"
UAblPlayMultiFxTask* UAblPlayMultiFxTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayMultiFxTask");
    return (UAblPlayMultiFxTask*)res;
}
