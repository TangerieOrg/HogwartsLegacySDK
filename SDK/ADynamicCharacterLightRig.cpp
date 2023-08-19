#include "AActor.hpp"
#include "ADynamicCharacterLightRig.hpp"
#include "EDynamicCharacterLightRigChannel.hpp"
#include "FBlendDomain.hpp"
#include "FDynamicCharacterLightRigLight.hpp"
#include "FDynamicLightAdaptationSettings.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
ADynamicCharacterLightRig* ADynamicCharacterLightRig::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.DynamicCharacterLightRig");
    return (ADynamicCharacterLightRig*)res;
}
void ADynamicCharacterLightRig::DynamicLightRigCinematicDisable(UObject* WorldContextObject, bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.DynamicLightRigCinematicDisable"));
    struct Params_DynamicLightRigCinematicDisable {
        UObject* WorldContextObject; // 0x0
        bool bDisable; // 0x8
    }; // Size: 0x9
    Params_DynamicLightRigCinematicDisable params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bDisable = (bool)bDisable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ADynamicCharacterLightRig::LightRigEnabled(bool& Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.LightRigEnabled"));
    struct Params_LightRigEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_LightRigEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
    Enabled = params.Enabled;
}
void ADynamicCharacterLightRig::GetDynamicLightRig(AActor* ToActor, ADynamicCharacterLightRig*& DynamicLightRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.GetDynamicLightRig"));
    struct Params_GetDynamicLightRig {
        AActor* ToActor; // 0x0
        ADynamicCharacterLightRig* DynamicLightRig; // 0x8
    }; // Size: 0x10
    Params_GetDynamicLightRig params{};
    params.ToActor = (AActor*)ToActor;
    params.DynamicLightRig = (ADynamicCharacterLightRig*)DynamicLightRig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DynamicLightRig = params.DynamicLightRig;
}
void ADynamicCharacterLightRig::Get(AActor* Actor, ADynamicCharacterLightRig*& DynamicLightRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.Get"));
    struct Params_Get {
        AActor* Actor; // 0x0
        ADynamicCharacterLightRig* DynamicLightRig; // 0x8
    }; // Size: 0x10
    Params_Get params{};
    params.Actor = (AActor*)Actor;
    params.DynamicLightRig = (ADynamicCharacterLightRig*)DynamicLightRig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DynamicLightRig = params.DynamicLightRig;
}
void ADynamicCharacterLightRig::EnableLightRig(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.EnableLightRig"));
    struct Params_EnableLightRig {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_EnableLightRig params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void ADynamicCharacterLightRig::DynamicLightRigCinematicEnable(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.DynamicLightRigCinematicEnable"));
    struct Params_DynamicLightRigCinematicEnable {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_DynamicLightRigCinematicEnable params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ADynamicCharacterLightRig::DynamicLightRigCinematicDiabled(UObject* WorldContextObject, bool& bDisabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.DynamicLightRigCinematicDiabled"));
    struct Params_DynamicLightRigCinematicDiabled {
        UObject* WorldContextObject; // 0x0
        bool bDisabled; // 0x8
    }; // Size: 0x9
    Params_DynamicLightRigCinematicDiabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bDisabled = (bool)bDisabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bDisabled = params.bDisabled;
}
void ADynamicCharacterLightRig::DisableLightRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.DisableLightRig"));
    struct Params_DisableLightRig {
    }; // Size: 0x0
    Params_DisableLightRig params{};
    ProcessEvent(func, &params);
}
void ADynamicCharacterLightRig::AttachDynamicLightRig(AActor* ToActor, UClass* DynamicLightRigClass, ADynamicCharacterLightRig*& DynamicLightRig, FName AttachSocket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.DynamicCharacterLightRig.AttachDynamicLightRig"));
    struct Params_AttachDynamicLightRig {
        AActor* ToActor; // 0x0
        UClass* DynamicLightRigClass; // 0x8
        ADynamicCharacterLightRig* DynamicLightRig; // 0x10
        FName AttachSocket; // 0x18
    }; // Size: 0x20
    Params_AttachDynamicLightRig params{};
    params.ToActor = (AActor*)ToActor;
    params.DynamicLightRigClass = (UClass*)DynamicLightRigClass;
    params.DynamicLightRig = (ADynamicCharacterLightRig*)DynamicLightRig;
    params.AttachSocket = (FName)AttachSocket;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DynamicLightRig = params.DynamicLightRig;
}
