#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblCamShakeTask.hpp"
#include "UAblTaskCondition.hpp"
#include "UClass.hpp"
UAblCamShakeTask* UAblCamShakeTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCamShakeTask");
    return (UAblCamShakeTask*)res;
}
