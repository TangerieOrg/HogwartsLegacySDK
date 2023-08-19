#include "AActor.hpp"
#include "FVector2D.hpp"
#include "UBaseWatcher.hpp"
#include "UFunction.hpp"
#include "UGameLogicObject.hpp"
#include "UInputComponent.hpp"
#include "UInputWatcherComponent.hpp"
#include "UStickFlickWatcherRecord.hpp"
#include "UWatcherRecord.hpp"
void UInputWatcherComponent::FlushQueuedActionsOnOwner(AActor* Owner, UWatcherRecord* InWatcherRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.InputWatcherComponent.FlushQueuedActionsOnOwner"));
    struct Params_FlushQueuedActionsOnOwner {
        AActor* Owner; // 0x0
        UWatcherRecord* InWatcherRecord; // 0x8
    }; // Size: 0x10
    Params_FlushQueuedActionsOnOwner params{};
    params.Owner = (AActor*)Owner;
    params.InWatcherRecord = (UWatcherRecord*)InWatcherRecord;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UInputWatcherComponent* UInputWatcherComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.InputWatcherComponent");
    return (UInputWatcherComponent*)res;
}
UGameLogicObject* UInputWatcherComponent::GetGameLogicObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.InputWatcherComponent.GetGameLogicObject"));
    struct Params_GetGameLogicObject {
        UGameLogicObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameLogicObject params{};
    ProcessEvent(func, &params);
    return (UGameLogicObject*)params.ReturnValue;
}
FVector2D UInputWatcherComponent::GetFlickDirection(AActor* Owner, UStickFlickWatcherRecord* StickFlickWatcherRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.InputWatcherComponent.GetFlickDirection"));
    struct Params_GetFlickDirection {
        AActor* Owner; // 0x0
        UStickFlickWatcherRecord* StickFlickWatcherRecord; // 0x8
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetFlickDirection params{};
    params.Owner = (AActor*)Owner;
    params.StickFlickWatcherRecord = (UStickFlickWatcherRecord*)StickFlickWatcherRecord;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UInputWatcherComponent::FlushQueuedActions(UWatcherRecord* InWatcherRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.InputWatcherComponent.FlushQueuedActions"));
    struct Params_FlushQueuedActions {
        UWatcherRecord* InWatcherRecord; // 0x0
    }; // Size: 0x8
    Params_FlushQueuedActions params{};
    params.InWatcherRecord = (UWatcherRecord*)InWatcherRecord;
    ProcessEvent(func, &params);
}
