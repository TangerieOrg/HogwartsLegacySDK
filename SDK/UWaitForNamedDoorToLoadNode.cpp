#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWaitForNamedDoorToLoadNode.hpp"
#include "UWorld.hpp"
UWaitForNamedDoorToLoadNode* UWaitForNamedDoorToLoadNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WaitForNamedDoorToLoadNode");
    return (UWaitForNamedDoorToLoadNode*)res;
}
UWaitForNamedDoorToLoadNode* UWaitForNamedDoorToLoadNode::WaitForNamedDoorToLoad(UObject* WorldContextObject, FString DoorName, float TimeOutSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaitForNamedDoorToLoadNode.WaitForNamedDoorToLoad"));
    struct Params_WaitForNamedDoorToLoad {
        UObject* WorldContextObject; // 0x0
        FString DoorName; // 0x8
        float TimeOutSeconds; // 0x18
        char pad_1c[0x4];
        UWaitForNamedDoorToLoadNode* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_WaitForNamedDoorToLoad params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DoorName = (FString)DoorName;
    params.TimeOutSeconds = (float)TimeOutSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWaitForNamedDoorToLoadNode*)params.ReturnValue;
}
void UWaitForNamedDoorToLoadNode::FindDoorOrQueue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaitForNamedDoorToLoadNode.FindDoorOrQueue"));
    struct Params_FindDoorOrQueue {
    }; // Size: 0x0
    Params_FindDoorOrQueue params{};
    ProcessEvent(func, &params);
}
