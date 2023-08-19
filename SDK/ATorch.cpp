#include "AActor.hpp"
#include "AStaticMeshActor.hpp"
#include "ATorch.hpp"
#include "ELightUnits.hpp"
#include "EObjectTypeQuery.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FWCullingPlane.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UDayNightLocalLightControllerComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPointLightComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
#include "USpotLightComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTexture.hpp"
#include "UTimelineComponent.hpp"
void ATorch::StopLerp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.StopLerp"));
    struct Params_StopLerp {
    }; // Size: 0x0
    Params_StopLerp params{};
    ProcessEvent(func, &params);
}
ATorch* ATorch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Torch");
    return (ATorch*)res;
}
bool ATorch::TorchSetup(UObjectStateComponent* i_ObjectStateComp, UTimelineComponent* i_Timeline, UNiagaraComponent* i_FireParticle, USphereComponent* i_PropagateTrigger, UAkComponent* i_AkComp, UAnimatedLightComponent* i_AnimatedLight, UPointLightComponent* i_PL, USpotLightComponent* i_SL, UPointLightComponent* i_IL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.TorchSetup"));
    struct Params_TorchSetup {
        UObjectStateComponent* i_ObjectStateComp; // 0x0
        UTimelineComponent* i_Timeline; // 0x8
        UNiagaraComponent* i_FireParticle; // 0x10
        USphereComponent* i_PropagateTrigger; // 0x18
        UAkComponent* i_AkComp; // 0x20
        UAnimatedLightComponent* i_AnimatedLight; // 0x28
        UPointLightComponent* i_PL; // 0x30
        USpotLightComponent* i_SL; // 0x38
        UPointLightComponent* i_IL; // 0x40
        bool ReturnValue; // 0x48
    }; // Size: 0x49
    Params_TorchSetup params{};
    params.i_ObjectStateComp = (UObjectStateComponent*)i_ObjectStateComp;
    params.i_Timeline = (UTimelineComponent*)i_Timeline;
    params.i_FireParticle = (UNiagaraComponent*)i_FireParticle;
    params.i_PropagateTrigger = (USphereComponent*)i_PropagateTrigger;
    params.i_AkComp = (UAkComponent*)i_AkComp;
    params.i_AnimatedLight = (UAnimatedLightComponent*)i_AnimatedLight;
    params.i_PL = (UPointLightComponent*)i_PL;
    params.i_SL = (USpotLightComponent*)i_SL;
    params.i_IL = (UPointLightComponent*)i_IL;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATorch::TorchGetNormalizedTime(float& NormalizedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.TorchGetNormalizedTime"));
    struct Params_TorchGetNormalizedTime {
        float NormalizedTime; // 0x0
    }; // Size: 0x4
    Params_TorchGetNormalizedTime params{};
    params.NormalizedTime = (float)NormalizedTime;
    ProcessEvent(func, &params);
    NormalizedTime = params.NormalizedTime;
}
void ATorch::SetOnFire(bool bOnFire) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.SetOnFire"));
    struct Params_SetOnFire {
        bool bOnFire; // 0x0
    }; // Size: 0x1
    Params_SetOnFire params{};
    params.bOnFire = (bool)bOnFire;
    ProcessEvent(func, &params);
}
void ATorch::EndLight(bool bLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.EndLight"));
    struct Params_EndLight {
        bool bLerp; // 0x0
    }; // Size: 0x1
    Params_EndLight params{};
    params.bLerp = (bool)bLerp;
    ProcessEvent(func, &params);
}
void ATorch::StartLight(bool bLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.StartLight"));
    struct Params_StartLight {
        bool bLerp; // 0x0
    }; // Size: 0x1
    Params_StartLight params{};
    params.bLerp = (bool)bLerp;
    ProcessEvent(func, &params);
}
void ATorch::SequentialLight(FVector LightLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.SequentialLight"));
    struct Params_SequentialLight {
        FVector LightLoc; // 0x0
    }; // Size: 0xc
    Params_SequentialLight params{};
    params.LightLoc = (FVector)LightLoc;
    ProcessEvent(func, &params);
}
bool ATorch::ShouldStartLit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.ShouldStartLit"));
    struct Params_ShouldStartLit {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldStartLit params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
uint8_t ATorch::ModFunctionSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.ModFunctionSetup"));
    struct Params_ModFunctionSetup {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ModFunctionSetup params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void ATorch::SetUpLights(UPointLightComponent* curPL, USpotLightComponent* curSL, UPointLightComponent* curIL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.SetUpLights"));
    struct Params_SetUpLights {
        UPointLightComponent* curPL; // 0x0
        USpotLightComponent* curSL; // 0x8
        UPointLightComponent* curIL; // 0x10
    }; // Size: 0x18
    Params_SetUpLights params{};
    params.curPL = (UPointLightComponent*)curPL;
    params.curSL = (USpotLightComponent*)curSL;
    params.curIL = (UPointLightComponent*)curIL;
    ProcessEvent(func, &params);
}
void ATorch::OnPropagateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.OnPropagateOverlapBegin"));
    struct Params_OnPropagateOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnPropagateOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ATorch::SequentialLightTimelineUpdate(FVector LightLoc, float Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.SequentialLightTimelineUpdate"));
    struct Params_SequentialLightTimelineUpdate {
        FVector LightLoc; // 0x0
        float Percent; // 0xc
    }; // Size: 0x10
    Params_SequentialLightTimelineUpdate params{};
    params.LightLoc = (FVector)LightLoc;
    params.Percent = (float)Percent;
    ProcessEvent(func, &params);
}
void ATorch::LoadSyncronousNiagaraSystem() {}
void ATorch::SequentialLightTimelineFinish() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.SequentialLightTimelineFinish"));
    struct Params_SequentialLightTimelineFinish {
    }; // Size: 0x0
    Params_SequentialLightTimelineFinish params{};
    ProcessEvent(func, &params);
}
void ATorch::ResetLightColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.ResetLightColor"));
    struct Params_ResetLightColor {
    }; // Size: 0x0
    Params_ResetLightColor params{};
    ProcessEvent(func, &params);
}
float ATorch::PropagationSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.PropagationSetup"));
    struct Params_PropagationSetup {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_PropagationSetup params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ATorch::Propagate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.Propagate"));
    struct Params_Propagate {
    }; // Size: 0x0
    Params_Propagate params{};
    ProcessEvent(func, &params);
}
bool ATorch::ParticleSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.ParticleSetup"));
    struct Params_ParticleSetup {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ParticleSetup params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATorch::OnProxOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.OnProxOverlapBegin"));
    struct Params_OnProxOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnProxOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ATorch::OnPropagateOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.OnPropagateOverlapEnd"));
    struct Params_OnPropagateOverlapEnd {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnPropagateOverlapEnd params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ATorch::MidLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.MidLight"));
    struct Params_MidLight {
    }; // Size: 0x0
    Params_MidLight params{};
    ProcessEvent(func, &params);
}
void ATorch::LightswitchTimelineUpdate(float Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.LightswitchTimelineUpdate"));
    struct Params_LightswitchTimelineUpdate {
        float Percent; // 0x0
    }; // Size: 0x4
    Params_LightswitchTimelineUpdate params{};
    params.Percent = (float)Percent;
    ProcessEvent(func, &params);
}
void ATorch::Lightswitch_Lerp(bool bOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.Lightswitch_Lerp"));
    struct Params_Lightswitch_Lerp {
        bool bOn; // 0x0
    }; // Size: 0x1
    Params_Lightswitch_Lerp params{};
    params.bOn = (bool)bOn;
    ProcessEvent(func, &params);
}
void ATorch::Lightswitch(bool bOn, bool bLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.Lightswitch"));
    struct Params_Lightswitch {
        bool bOn; // 0x0
        bool bLerp; // 0x1
    }; // Size: 0x2
    Params_Lightswitch params{};
    params.bOn = (bool)bOn;
    params.bLerp = (bool)bLerp;
    ProcessEvent(func, &params);
}
void ATorch::CrossLightTickRange(bool bin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.CrossLightTickRange"));
    struct Params_CrossLightTickRange {
        bool bin; // 0x0
    }; // Size: 0x1
    Params_CrossLightTickRange params{};
    params.bin = (bool)bin;
    ProcessEvent(func, &params);
}
FTransform ATorch::GetDPCInitialTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.GetDPCInitialTransform"));
    struct Params_GetDPCInitialTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetDPCInitialTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void ATorch::ExtinguishLight(bool bSlow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.ExtinguishLight"));
    struct Params_ExtinguishLight {
        bool bSlow; // 0x0
    }; // Size: 0x1
    Params_ExtinguishLight params{};
    params.bSlow = (bool)bSlow;
    ProcessEvent(func, &params);
}
bool ATorch::ConstructTorch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.ConstructTorch"));
    struct Params_ConstructTorch {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ConstructTorch params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATorch::ChangeLightColor(FLinearColor i_Color, float i_temperature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Torch.ChangeLightColor"));
    struct Params_ChangeLightColor {
        FLinearColor i_Color; // 0x0
        float i_temperature; // 0x10
    }; // Size: 0x14
    Params_ChangeLightColor params{};
    params.i_Color = (FLinearColor)i_Color;
    params.i_temperature = (float)i_temperature;
    ProcessEvent(func, &params);
}
