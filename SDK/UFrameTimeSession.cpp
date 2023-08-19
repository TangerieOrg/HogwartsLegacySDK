#include "UFrameTimeSession.hpp"
#include "UFunction.hpp"
#include "USessionTracker.hpp"
UFrameTimeSession* UFrameTimeSession::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FrameTimeSession");
    return (UFrameTimeSession*)res;
}
void UFrameTimeSession::Tick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrameTimeSession.Tick"));
    struct Params_Tick {
    }; // Size: 0x0
    Params_Tick params{};
    ProcessEvent(func, &params);
}
