#include "FVector.hpp"
#include "UBaseProvider.hpp"
#include "UBlendSpaceInputProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UBlendSpaceInputProvider::GetBlendSpaceInput(UObject* Caller, FVector& BlendSpaceInput) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.BlendSpaceInputProvider.GetBlendSpaceInput"));
    struct Params_GetBlendSpaceInput {
        UObject* Caller; // 0x0
        FVector BlendSpaceInput; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetBlendSpaceInput params{};
    params.Caller = (UObject*)Caller;
    params.BlendSpaceInput = (FVector)BlendSpaceInput;
    ProcessEvent(func, &params);
    BlendSpaceInput = params.BlendSpaceInput;
    return (bool)params.ReturnValue;
}
UBlendSpaceInputProvider* UBlendSpaceInputProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BlendSpaceInputProvider");
    return (UBlendSpaceInputProvider*)res;
}
