#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPageStack.hpp"
UPageStack* UPageStack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PageStack");
    return (UPageStack*)res;
}
FString UPageStack::Pop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PageStack.Pop"));
    struct Params_Pop {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_Pop params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UPageStack::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PageStack.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void UPageStack::Push(FString Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PageStack.Push"));
    struct Params_Push {
        FString Widget; // 0x0
    }; // Size: 0x10
    Params_Push params{};
    params.Widget = (FString)Widget;
    ProcessEvent(func, &params);
}
TArray<FString> UPageStack::GetStack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PageStack.GetStack"));
    struct Params_GetStack {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetStack params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FString UPageStack::Peek() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PageStack.Peek"));
    struct Params_Peek {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_Peek params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
