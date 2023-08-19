#include "FVector.hpp"
#include "UBaseProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVectorProvider.hpp"
UVectorProvider* UVectorProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.VectorProvider");
    return (UVectorProvider*)res;
}
FVector UVectorProvider::GetVectorBP(UObject* Context, float TimeOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.VectorProvider.GetVectorBP"));
    struct Params_GetVectorBP {
        UObject* Context; // 0x0
        float TimeOffset; // 0x8
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetVectorBP params{};
    params.Context = (UObject*)Context;
    params.TimeOffset = (float)TimeOffset;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
