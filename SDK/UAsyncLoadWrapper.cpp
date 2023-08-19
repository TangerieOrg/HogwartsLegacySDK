#include "ESlateVisibility.hpp"
#include "FSoftClassPath.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UCanvasPanel.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
UAsyncLoadWrapper* UAsyncLoadWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AsyncLoadWrapper");
    return (UAsyncLoadWrapper*)res;
}
void UAsyncLoadWrapper::SetThrobberVisibility(ESlateVisibility NewVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncLoadWrapper.SetThrobberVisibility"));
    struct Params_SetThrobberVisibility {
        ESlateVisibility NewVisibility; // 0x0
    }; // Size: 0x1
    Params_SetThrobberVisibility params{};
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    ProcessEvent(func, &params);
}
void UAsyncLoadWrapper::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncLoadWrapper.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UAsyncLoadWrapper::InstantiateChild() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncLoadWrapper.InstantiateChild"));
    struct Params_InstantiateChild {
    }; // Size: 0x0
    Params_InstantiateChild params{};
    ProcessEvent(func, &params);
}
void UAsyncLoadWrapper::InitChild() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncLoadWrapper.InitChild"));
    struct Params_InitChild {
    }; // Size: 0x0
    Params_InitChild params{};
    ProcessEvent(func, &params);
}
void UAsyncLoadWrapper::AsyncLoadChildClass(bool InstantiateImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncLoadWrapper.AsyncLoadChildClass"));
    struct Params_AsyncLoadChildClass {
        bool InstantiateImmediately; // 0x0
    }; // Size: 0x1
    Params_AsyncLoadChildClass params{};
    params.InstantiateImmediately = (bool)InstantiateImmediately;
    ProcessEvent(func, &params);
}
UCanvasPanel* UAsyncLoadWrapper::GetAttachCanvas() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncLoadWrapper.GetAttachCanvas"));
    struct Params_GetAttachCanvas {
        UCanvasPanel* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachCanvas params{};
    ProcessEvent(func, &params);
    return (UCanvasPanel*)params.ReturnValue;
}
