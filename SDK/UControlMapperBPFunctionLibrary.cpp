#include "AActor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UControlMapperBPFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
#include "UObject.hpp"
UControlMapperBPFunctionLibrary* UControlMapperBPFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.ControlMapperBPFunctionLibrary");
    return (UControlMapperBPFunctionLibrary*)res;
}
float UControlMapperBPFunctionLibrary::GetInputAxisValue(AActor* InputComponentOwner, FName InputAxisName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ControlMapperBPFunctionLibrary.GetInputAxisValue"));
    struct Params_GetInputAxisValue {
        AActor* InputComponentOwner; // 0x0
        FName InputAxisName; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetInputAxisValue params{};
    params.InputComponentOwner = (AActor*)InputComponentOwner;
    params.InputAxisName = (FName)InputAxisName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UControlMapperBPFunctionLibrary::EnableCustomInput(UObject* InputReceiver, UInputComponent* InputComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ControlMapperBPFunctionLibrary.EnableCustomInput"));
    struct Params_EnableCustomInput {
        UObject* InputReceiver; // 0x0
        UInputComponent* InputComponent; // 0x8
    }; // Size: 0x10
    Params_EnableCustomInput params{};
    params.InputReceiver = (UObject*)InputReceiver;
    params.InputComponent = (UInputComponent*)InputComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UControlMapperBPFunctionLibrary::DisableCustomInput(UObject* InputReceiver, UInputComponent* InputComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ControlMapperBPFunctionLibrary.DisableCustomInput"));
    struct Params_DisableCustomInput {
        UObject* InputReceiver; // 0x0
        UInputComponent* InputComponent; // 0x8
    }; // Size: 0x10
    Params_DisableCustomInput params{};
    params.InputReceiver = (UObject*)InputReceiver;
    params.InputComponent = (UInputComponent*)InputComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
