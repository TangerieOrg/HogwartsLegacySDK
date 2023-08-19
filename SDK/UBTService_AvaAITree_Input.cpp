#include "FInputContextWithType.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UBTService_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
UBTService_AvaAITree_Input* UBTService_AvaAITree_Input::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTService_AvaAITree_Input");
    return (UBTService_AvaAITree_Input*)res;
}
void UBTService_AvaAITree_Input::SetManagedContext(FInputContextWithType InContext, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree_Input.SetManagedContext"));
    struct Params_SetManagedContext {
        FInputContextWithType InContext; // 0x0
        bool bFlag; // 0xc
    }; // Size: 0xd
    Params_SetManagedContext params{};
    params.InContext = (FInputContextWithType)InContext;
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void UBTService_AvaAITree_Input::PlayerInputComponentCreated(UInputComponent* InputComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree_Input.PlayerInputComponentCreated"));
    struct Params_PlayerInputComponentCreated {
        UInputComponent* InputComponent; // 0x0
    }; // Size: 0x8
    Params_PlayerInputComponentCreated params{};
    params.InputComponent = (UInputComponent*)InputComponent;
    ProcessEvent(func, &params);
}
void UBTService_AvaAITree_Input::PlayerInputSoonToBeRemoved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree_Input.PlayerInputSoonToBeRemoved"));
    struct Params_PlayerInputSoonToBeRemoved {
    }; // Size: 0x0
    Params_PlayerInputSoonToBeRemoved params{};
    ProcessEvent(func, &params);
}
void UBTService_AvaAITree_Input::PlayerInputComponentAboutToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree_Input.PlayerInputComponentAboutToBeDestroyed"));
    struct Params_PlayerInputComponentAboutToBeDestroyed {
    }; // Size: 0x0
    Params_PlayerInputComponentAboutToBeDestroyed params{};
    ProcessEvent(func, &params);
}
bool UBTService_AvaAITree_Input::GetManagedContext(FInputContextWithType InContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree_Input.GetManagedContext"));
    struct Params_GetManagedContext {
        FInputContextWithType InContext; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetManagedContext params{};
    params.InContext = (FInputContextWithType)InContext;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
