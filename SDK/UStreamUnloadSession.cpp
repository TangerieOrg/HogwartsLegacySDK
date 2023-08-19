#include "UFunction.hpp"
#include "USessionTracker.hpp"
#include "UStreamUnloadSession.hpp"
UStreamUnloadSession* UStreamUnloadSession::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamUnloadSession");
    return (UStreamUnloadSession*)res;
}
void UStreamUnloadSession::Tick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamUnloadSession.Tick"));
    struct Params_Tick {
    }; // Size: 0x0
    Params_Tick params{};
    ProcessEvent(func, &params);
}
