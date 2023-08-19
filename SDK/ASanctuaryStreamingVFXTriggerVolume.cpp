#include "AActor.hpp"
#include "ASanctuaryStreamingVFXTriggerVolume.hpp"
#include "AStreamingPlaceholderBase.hpp"
#include "ESanctuaryIdentity.hpp"
#include "FHitResult.hpp"
#include "FIdentityParticleSystemsData.hpp"
#include "FParticleSystemsData.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPrimitiveComponent.hpp"
ASanctuaryStreamingVFXTriggerVolume* ASanctuaryStreamingVFXTriggerVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryStreamingVFXTriggerVolume");
    return (ASanctuaryStreamingVFXTriggerVolume*)res;
}
void ASanctuaryStreamingVFXTriggerVolume::OnParticleSystemFinished(UParticleSystemComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingVFXTriggerVolume.OnParticleSystemFinished"));
    struct Params_OnParticleSystemFinished {
        UParticleSystemComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_OnParticleSystemFinished params{};
    params.PSystem = (UParticleSystemComponent*)PSystem;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingVFXTriggerVolume::OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingVFXTriggerVolume.OnIdentityChanged"));
    struct Params_OnIdentityChanged {
        ESanctuaryIdentity OldIdentity; // 0x0
        ESanctuaryIdentity NewIdentity; // 0x1
    }; // Size: 0x2
    Params_OnIdentityChanged params{};
    params.OldIdentity = (ESanctuaryIdentity)OldIdentity;
    params.NewIdentity = (ESanctuaryIdentity)NewIdentity;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingVFXTriggerVolume::OnOverlapStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingVFXTriggerVolume.OnOverlapStart"));
    struct Params_OnOverlapStart {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapStart params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ASanctuaryStreamingVFXTriggerVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingVFXTriggerVolume.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingVFXTriggerVolume::OnNiagaraFinished(UNiagaraComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingVFXTriggerVolume.OnNiagaraFinished"));
    struct Params_OnNiagaraFinished {
        UNiagaraComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_OnNiagaraFinished params{};
    params.PSystem = (UNiagaraComponent*)PSystem;
    ProcessEvent(func, &params);
}
