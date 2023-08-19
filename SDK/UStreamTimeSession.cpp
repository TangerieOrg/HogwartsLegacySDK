#include "UFunction.hpp"
#include "USessionTracker.hpp"
#include "UStreamTimeSession.hpp"
UStreamTimeSession* UStreamTimeSession::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamTimeSession");
    return (UStreamTimeSession*)res;
}
void UStreamTimeSession::Tick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamTimeSession.Tick"));
    struct Params_Tick {
    }; // Size: 0x0
    Params_Tick params{};
    ProcessEvent(func, &params);
}
