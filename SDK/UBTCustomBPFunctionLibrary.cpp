#include "UBTCustomBPFunctionLibrary.hpp"
#include "UBTCustomComponent.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTCustomBPFunctionLibrary* UBTCustomBPFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTCustomBPFunctionLibrary");
    return (UBTCustomBPFunctionLibrary*)res;
}
void UBTCustomBPFunctionLibrary::EnableBTCustomAction(UObject* InputReceiver, UBTCustomComponent* InputComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomBPFunctionLibrary.EnableBTCustomAction"));
    struct Params_EnableBTCustomAction {
        UObject* InputReceiver; // 0x0
        UBTCustomComponent* InputComponent; // 0x8
    }; // Size: 0x10
    Params_EnableBTCustomAction params{};
    params.InputReceiver = (UObject*)InputReceiver;
    params.InputComponent = (UBTCustomComponent*)InputComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBTCustomBPFunctionLibrary::DisableBTCustomAction(UObject* InputReceiver, UBTCustomComponent* InputComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomBPFunctionLibrary.DisableBTCustomAction"));
    struct Params_DisableBTCustomAction {
        UObject* InputReceiver; // 0x0
        UBTCustomComponent* InputComponent; // 0x8
    }; // Size: 0x10
    Params_DisableBTCustomAction params{};
    params.InputReceiver = (UObject*)InputReceiver;
    params.InputComponent = (UBTCustomComponent*)InputComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
