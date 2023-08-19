#include "FLinearColor.hpp"
#include "UBaseProvider.hpp"
#include "UColorProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
FLinearColor UColorProvider::GetColorBP(UObject* Context, float TimeOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.ColorProvider.GetColorBP"));
    struct Params_GetColorBP {
        UObject* Context; // 0x0
        float TimeOffset; // 0x8
        FLinearColor ReturnValue; // 0xc
    }; // Size: 0x1c
    Params_GetColorBP params{};
    params.Context = (UObject*)Context;
    params.TimeOffset = (float)TimeOffset;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
UColorProvider* UColorProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ColorProvider");
    return (UColorProvider*)res;
}
