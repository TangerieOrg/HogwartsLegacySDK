#include "AActor.hpp"
#include "AWaterfall.hpp"
#include "UFunction.hpp"
void AWaterfall::StartWater() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Waterfall.StartWater"));
    struct Params_StartWater {
    }; // Size: 0x0
    Params_StartWater params{};
    ProcessEvent(func, &params);
}
AWaterfall* AWaterfall::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Waterfall");
    return (AWaterfall*)res;
}
void AWaterfall::StopWater() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Waterfall.StopWater"));
    struct Params_StopWater {
    }; // Size: 0x0
    Params_StopWater params{};
    ProcessEvent(func, &params);
}
