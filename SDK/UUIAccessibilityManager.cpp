#include "AActor.hpp"
#include "EAccessibilityAudioCueEventType.hpp"
#include "FVector.hpp"
#include "UCanvasPanel.hpp"
#include "UClass.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UUIAccessibilityAudioCueWidget.hpp"
#include "UUIAccessibilityManager.hpp"
void UUIAccessibilityManager::DeactivateAudioCues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIAccessibilityManager.DeactivateAudioCues"));
    struct Params_DeactivateAudioCues {
    }; // Size: 0x0
    Params_DeactivateAudioCues params{};
    ProcessEvent(func, &params);
}
UUIAccessibilityManager* UUIAccessibilityManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIAccessibilityManager");
    return (UUIAccessibilityManager*)res;
}
void UUIAccessibilityManager::TriggerAccessibilityEventDamage(AActor* EventActor, FVector Location, float Angle, float Damage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIAccessibilityManager.TriggerAccessibilityEventDamage"));
    struct Params_TriggerAccessibilityEventDamage {
        AActor* EventActor; // 0x0
        FVector Location; // 0x8
        float Angle; // 0x14
        float Damage; // 0x18
    }; // Size: 0x1c
    Params_TriggerAccessibilityEventDamage params{};
    params.EventActor = (AActor*)EventActor;
    params.Location = (FVector)Location;
    params.Angle = (float)Angle;
    params.Damage = (float)Damage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIAccessibilityManager::TriggerAccessibilityEventEnter(EAccessibilityAudioCueEventType EventType, AActor* EventActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIAccessibilityManager.TriggerAccessibilityEventEnter"));
    struct Params_TriggerAccessibilityEventEnter {
        EAccessibilityAudioCueEventType EventType; // 0x0
        char pad_1[0x7];
        AActor* EventActor; // 0x8
    }; // Size: 0x10
    Params_TriggerAccessibilityEventEnter params{};
    params.EventType = (EAccessibilityAudioCueEventType)EventType;
    params.EventActor = (AActor*)EventActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIAccessibilityManager::TriggerAccessibilityEventLeave(EAccessibilityAudioCueEventType EventType, AActor* EventActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIAccessibilityManager.TriggerAccessibilityEventLeave"));
    struct Params_TriggerAccessibilityEventLeave {
        EAccessibilityAudioCueEventType EventType; // 0x0
        char pad_1[0x7];
        AActor* EventActor; // 0x8
    }; // Size: 0x10
    Params_TriggerAccessibilityEventLeave params{};
    params.EventType = (EAccessibilityAudioCueEventType)EventType;
    params.EventActor = (AActor*)EventActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIAccessibilityManager::TriggerAccessibilityEvent(EAccessibilityAudioCueEventType EventType, AActor* EventActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIAccessibilityManager.TriggerAccessibilityEvent"));
    struct Params_TriggerAccessibilityEvent {
        EAccessibilityAudioCueEventType EventType; // 0x0
        char pad_1[0x7];
        AActor* EventActor; // 0x8
    }; // Size: 0x10
    Params_TriggerAccessibilityEvent params{};
    params.EventType = (EAccessibilityAudioCueEventType)EventType;
    params.EventActor = (AActor*)EventActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIAccessibilityManager::ActivateAudioCues(UCanvasPanel* pPanel, UUIAccessibilityAudioCueWidget* pWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIAccessibilityManager.ActivateAudioCues"));
    struct Params_ActivateAudioCues {
        UCanvasPanel* pPanel; // 0x0
        UUIAccessibilityAudioCueWidget* pWidget; // 0x8
    }; // Size: 0x10
    Params_ActivateAudioCues params{};
    params.pPanel = (UCanvasPanel*)pPanel;
    params.pWidget = (UUIAccessibilityAudioCueWidget*)pWidget;
    ProcessEvent(func, &params);
}
