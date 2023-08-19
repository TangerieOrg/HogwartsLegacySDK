#include "EGameEvent_Intensity.hpp"
#include "FGameplayTagContainer.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_GameEvent.hpp"
UMultiFX2_GameEvent* UMultiFX2_GameEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_GameEvent");
    return (UMultiFX2_GameEvent*)res;
}
