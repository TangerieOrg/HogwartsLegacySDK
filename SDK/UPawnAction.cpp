#include "EAIRequestPriority\Type.hpp"
#include "EPawnActionResult\Type.hpp"
#include "UBrainComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPawnAction.hpp"
#include "UPawnActionsComponent.hpp"
UPawnAction* UPawnAction::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PawnAction");
    return (UPawnAction*)res;
}
EAIRequestPriority::Type UPawnAction::GetActionPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction.GetActionPriority"));
    struct Params_GetActionPriority {
        EAIRequestPriority::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActionPriority params{};
    ProcessEvent(func, &params);
    return (EAIRequestPriority::Type)params.ReturnValue;
}
void UPawnAction::Finish(EPawnActionResult::Type WithResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction.Finish"));
    struct Params_Finish {
        EPawnActionResult::Type WithResult; // 0x0
    }; // Size: 0x1
    Params_Finish params{};
    params.WithResult = (EPawnActionResult::Type)WithResult;
    ProcessEvent(func, &params);
}
UPawnAction* UPawnAction::CreateActionInstance(UObject* WorldContextObject, UClass* ActionClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction.CreateActionInstance"));
    struct Params_CreateActionInstance {
        UObject* WorldContextObject; // 0x0
        UClass* ActionClass; // 0x8
        UPawnAction* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateActionInstance params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActionClass = (UClass*)ActionClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPawnAction*)params.ReturnValue;
}
