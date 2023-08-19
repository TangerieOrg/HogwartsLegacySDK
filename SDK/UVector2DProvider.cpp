#include "FVector2D.hpp"
#include "UBaseProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVector2DProvider.hpp"
UVector2DProvider* UVector2DProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Vector2DProvider");
    return (UVector2DProvider*)res;
}
FVector2D UVector2DProvider::GetVector2DBP(UObject* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.Vector2DProvider.GetVector2DBP"));
    struct Params_GetVector2DBP {
        UObject* Context; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetVector2DBP params{};
    params.Context = (UObject*)Context;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
