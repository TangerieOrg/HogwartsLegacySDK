#include "ECabbage_Mobility.hpp"
#include "UAblAbilityTask.hpp"
#include "UAkAudioEvent.hpp"
#include "UablCabbageMobilityTask.hpp"
UablCabbageMobilityTask* UablCabbageMobilityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablCabbageMobilityTask");
    return (UablCabbageMobilityTask*)res;
}
