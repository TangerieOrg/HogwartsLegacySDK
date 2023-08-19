#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UGameLogicBPFunctionLibrary.hpp"
#include "UGameLogicObject.hpp"
#include "UObject.hpp"
UGameLogicBPFunctionLibrary* UGameLogicBPFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicBPFunctionLibrary");
    return (UGameLogicBPFunctionLibrary*)res;
}
UGameLogicObject* UGameLogicBPFunctionLibrary::SpawnAndAttachToGameLogicObject(UObject* InBlueprint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicBPFunctionLibrary.SpawnAndAttachToGameLogicObject"));
    struct Params_SpawnAndAttachToGameLogicObject {
        UObject* InBlueprint; // 0x0
        UGameLogicObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnAndAttachToGameLogicObject params{};
    params.InBlueprint = (UObject*)InBlueprint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicObject*)params.ReturnValue;
}
void UGameLogicBPFunctionLibrary::DetachFromGameLogicEvents(UObject* InputReceiver, UGameLogicObject* GameLogicObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicBPFunctionLibrary.DetachFromGameLogicEvents"));
    struct Params_DetachFromGameLogicEvents {
        UObject* InputReceiver; // 0x0
        UGameLogicObject* GameLogicObject; // 0x8
    }; // Size: 0x10
    Params_DetachFromGameLogicEvents params{};
    params.InputReceiver = (UObject*)InputReceiver;
    params.GameLogicObject = (UGameLogicObject*)GameLogicObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameLogicBPFunctionLibrary::AttachToGameLogicEvents(UObject* InputReceiver, UGameLogicObject* GameLogicObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicBPFunctionLibrary.AttachToGameLogicEvents"));
    struct Params_AttachToGameLogicEvents {
        UObject* InputReceiver; // 0x0
        UGameLogicObject* GameLogicObject; // 0x8
    }; // Size: 0x10
    Params_AttachToGameLogicEvents params{};
    params.InputReceiver = (UObject*)InputReceiver;
    params.GameLogicObject = (UGameLogicObject*)GameLogicObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
