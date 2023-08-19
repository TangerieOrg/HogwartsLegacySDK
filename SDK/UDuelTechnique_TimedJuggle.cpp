#include "UDuelTechnique.hpp"
#include "UDuelTechnique_TimedJuggle.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UDuelTechnique_TimedJuggle* UDuelTechnique_TimedJuggle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_TimedJuggle");
    return (UDuelTechnique_TimedJuggle*)res;
}
void UDuelTechnique_TimedJuggle::TimerTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechnique_TimedJuggle.TimerTick"));
    struct Params_TimerTick {
    }; // Size: 0x0
    Params_TimerTick params{};
    ProcessEvent(func, &params);
}
