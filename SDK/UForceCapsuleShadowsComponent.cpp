#include "AActor.hpp"
#include "FForceCapsuleShadowsSettings.hpp"
#include "UActorComponent.hpp"
#include "UForceCapsuleShadowsComponent.hpp"
#include "UFunction.hpp"
UForceCapsuleShadowsComponent* UForceCapsuleShadowsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.ForceCapsuleShadowsComponent");
    return (UForceCapsuleShadowsComponent*)res;
}
void UForceCapsuleShadowsComponent::Enable(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.ForceCapsuleShadowsComponent.Enable"));
    struct Params_Enable {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_Enable params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UForceCapsuleShadowsComponent::Enabled(bool& bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.ForceCapsuleShadowsComponent.Enabled"));
    struct Params_Enabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_Enabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
    bEnabled = params.bEnabled;
}
void UForceCapsuleShadowsComponent::UpdateSettings(FForceCapsuleShadowsSettings NewSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.ForceCapsuleShadowsComponent.UpdateSettings"));
    struct Params_UpdateSettings {
        FForceCapsuleShadowsSettings NewSettings; // 0x0
    }; // Size: 0x20
    Params_UpdateSettings params{};
    params.NewSettings = (FForceCapsuleShadowsSettings)NewSettings;
    ProcessEvent(func, &params);
}
void UForceCapsuleShadowsComponent::DetachAndDestroyForceCapsuleShadows(AActor* Owner, UForceCapsuleShadowsComponent* ExistingForceCapsuleShadowsComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.ForceCapsuleShadowsComponent.DetachAndDestroyForceCapsuleShadows"));
    struct Params_DetachAndDestroyForceCapsuleShadows {
        AActor* Owner; // 0x0
        UForceCapsuleShadowsComponent* ExistingForceCapsuleShadowsComponent; // 0x8
    }; // Size: 0x10
    Params_DetachAndDestroyForceCapsuleShadows params{};
    params.Owner = (AActor*)Owner;
    params.ExistingForceCapsuleShadowsComponent = (UForceCapsuleShadowsComponent*)ExistingForceCapsuleShadowsComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UForceCapsuleShadowsComponent::DestroyForceCapsuleShadows() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.ForceCapsuleShadowsComponent.DestroyForceCapsuleShadows"));
    struct Params_DestroyForceCapsuleShadows {
    }; // Size: 0x0
    Params_DestroyForceCapsuleShadows params{};
    ProcessEvent(func, &params);
}
void UForceCapsuleShadowsComponent::CreateAndAttachForceCapsuleShadows(AActor* Owner, FForceCapsuleShadowsSettings NewSettings, UForceCapsuleShadowsComponent*& NewForceCapsuleShadowsComponent, bool bTransient) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.ForceCapsuleShadowsComponent.CreateAndAttachForceCapsuleShadows"));
    struct Params_CreateAndAttachForceCapsuleShadows {
        AActor* Owner; // 0x0
        FForceCapsuleShadowsSettings NewSettings; // 0x8
        UForceCapsuleShadowsComponent* NewForceCapsuleShadowsComponent; // 0x28
        bool bTransient; // 0x30
    }; // Size: 0x31
    Params_CreateAndAttachForceCapsuleShadows params{};
    params.Owner = (AActor*)Owner;
    params.NewSettings = (FForceCapsuleShadowsSettings)NewSettings;
    params.NewForceCapsuleShadowsComponent = (UForceCapsuleShadowsComponent*)NewForceCapsuleShadowsComponent;
    params.bTransient = (bool)bTransient;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    NewForceCapsuleShadowsComponent = params.NewForceCapsuleShadowsComponent;
}
