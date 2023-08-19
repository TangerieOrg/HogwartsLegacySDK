#include "AActor.hpp"
#include "FSkinFXAutoTriggerDriverTracker.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkinFXAutoTriggerComponent.hpp"
#include "USkinFXAutoTriggerDriver.hpp"
void USkinFXAutoTriggerComponent::RemoveDriver(USkinFXAutoTriggerDriver* Driver) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.RemoveDriver"));
    struct Params_RemoveDriver {
        USkinFXAutoTriggerDriver* Driver; // 0x0
    }; // Size: 0x8
    Params_RemoveDriver params{};
    params.Driver = (USkinFXAutoTriggerDriver*)Driver;
    ProcessEvent(func, &params);
}
USkinFXAutoTriggerComponent* USkinFXAutoTriggerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXAutoTriggerComponent");
    return (USkinFXAutoTriggerComponent*)res;
}
void USkinFXAutoTriggerComponent::Refresh(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.Refresh"));
    struct Params_Refresh {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_Refresh params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFXAutoTriggerComponent::RefreshAll(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.RefreshAll"));
    struct Params_RefreshAll {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_RefreshAll params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkinFXAutoTriggerComponent::SetEnabled(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void USkinFXAutoTriggerComponent::RemoveDriverByName(FName TriggerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.RemoveDriverByName"));
    struct Params_RemoveDriverByName {
        FName TriggerName; // 0x0
    }; // Size: 0x8
    Params_RemoveDriverByName params{};
    params.TriggerName = (FName)TriggerName;
    ProcessEvent(func, &params);
}
bool USkinFXAutoTriggerComponent::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkinFXAutoTriggerComponent::HasDriverByName(FName TriggerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.HasDriverByName"));
    struct Params_HasDriverByName {
        FName TriggerName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasDriverByName params{};
    params.TriggerName = (FName)TriggerName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkinFXAutoTriggerComponent::HasDriver(USkinFXAutoTriggerDriver* Driver) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.HasDriver"));
    struct Params_HasDriver {
        USkinFXAutoTriggerDriver* Driver; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasDriver params{};
    params.Driver = (USkinFXAutoTriggerDriver*)Driver;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinFXAutoTriggerComponent::AddDriver(USkinFXAutoTriggerDriver* Driver) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXAutoTriggerComponent.AddDriver"));
    struct Params_AddDriver {
        USkinFXAutoTriggerDriver* Driver; // 0x0
    }; // Size: 0x8
    Params_AddDriver params{};
    params.Driver = (USkinFXAutoTriggerDriver*)Driver;
    ProcessEvent(func, &params);
}
