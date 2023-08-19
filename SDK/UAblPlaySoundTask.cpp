#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPlaySoundTask.hpp"
#include "USoundBase.hpp"
UAblPlaySoundTask* UAblPlaySoundTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlaySoundTask");
    return (UAblPlaySoundTask*)res;
}
