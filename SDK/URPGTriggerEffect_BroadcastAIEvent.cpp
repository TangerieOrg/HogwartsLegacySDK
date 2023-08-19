#include "AActor.hpp"
#include "EGameEvent_Intensity.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMultiFX.hpp"
#include "UMultiFX2_Base.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_BroadcastAIEvent.hpp"
URPGTriggerEffect_BroadcastAIEvent* URPGTriggerEffect_BroadcastAIEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_BroadcastAIEvent");
    return (URPGTriggerEffect_BroadcastAIEvent*)res;
}
