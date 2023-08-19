#include "AActor.hpp"
#include "APerceptionPointArea.hpp"
#include "ASpiderEggs.hpp"
#include "ESpiderTypeEnum.hpp"
#include "FHitResult.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UArrowComponent.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UEnemyStateComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "ULootDropComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ASpiderEggs::OnStartPulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnStartPulse"));
    struct Params_OnStartPulse {
    }; // Size: 0x0
    Params_OnStartPulse params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_HideEggSacMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._HideEggSacMesh"));
    struct Params__HideEggSacMesh {
    }; // Size: 0x0
    Params__HideEggSacMesh params{};
    ProcessEvent(func, &params);
}
ASpiderEggs* ASpiderEggs::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderEggs");
    return (ASpiderEggs*)res;
}
void ASpiderEggs::_StartBreathing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartBreathing"));
    struct Params__StartBreathing {
    }; // Size: 0x0
    Params__StartBreathing params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::OnOverlapEnd_ActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnOverlapEnd_ActivationSphere"));
    struct Params_OnOverlapEnd_ActivationSphere {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd_ActivationSphere params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ASpiderEggs::OnStopPulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnStopPulse"));
    struct Params_OnStopPulse {
    }; // Size: 0x0
    Params_OnStopPulse params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_PropagateFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._PropagateFire"));
    struct Params__PropagateFire {
    }; // Size: 0x0
    Params__PropagateFire params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::OnOverlapEnd_StealthActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnOverlapEnd_StealthActivationSphere"));
    struct Params_OnOverlapEnd_StealthActivationSphere {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd_StealthActivationSphere params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ASpiderEggs::_DoDamageOnExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._DoDamageOnExplode"));
    struct Params__DoDamageOnExplode {
    }; // Size: 0x0
    Params__DoDamageOnExplode params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::OnOverlapEnd_ProximitySphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnOverlapEnd_ProximitySphere"));
    struct Params_OnOverlapEnd_ProximitySphere {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd_ProximitySphere params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ASpiderEggs::_ActivateObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._ActivateObject"));
    struct Params__ActivateObject {
    }; // Size: 0x0
    Params__ActivateObject params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_HeavyBlowExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._HeavyBlowExplode"));
    struct Params__HeavyBlowExplode {
    }; // Size: 0x0
    Params__HeavyBlowExplode params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::OnOverlapBegin_StealthActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnOverlapBegin_StealthActivationSphere"));
    struct Params_OnOverlapBegin_StealthActivationSphere {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin_StealthActivationSphere params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ASpiderEggs::_StopFireLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopFireLight"));
    struct Params__StopFireLight {
    }; // Size: 0x0
    Params__StopFireLight params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::OnOverlapBegin_ProximitySphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnOverlapBegin_ProximitySphere"));
    struct Params_OnOverlapBegin_ProximitySphere {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin_ProximitySphere params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ASpiderEggs::_AlertNearby() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._AlertNearby"));
    struct Params__AlertNearby {
    }; // Size: 0x0
    Params__AlertNearby params{};
    ProcessEvent(func, &params);
}
bool ASpiderEggs::_RemoveActorInRadius(AActor* InActor, bool RemoveAll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._RemoveActorInRadius"));
    struct Params__RemoveActorInRadius {
        AActor* InActor; // 0x0
        bool RemoveAll; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params__RemoveActorInRadius params{};
    params.InActor = (AActor*)InActor;
    params.RemoveAll = (bool)RemoveAll;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpiderEggs::OnOverlapBegin_ActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnOverlapBegin_ActivationSphere"));
    struct Params_OnOverlapBegin_ActivationSphere {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin_ActivationSphere params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ASpiderEggs::_HideBaseMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._HideBaseMesh"));
    struct Params__HideBaseMesh {
    }; // Size: 0x0
    Params__HideBaseMesh params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::OnBurst() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs.OnBurst"));
    struct Params_OnBurst {
    }; // Size: 0x0
    Params_OnBurst params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_UpdateObjectState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._UpdateObjectState"));
    struct Params__UpdateObjectState {
    }; // Size: 0x0
    Params__UpdateObjectState params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_ForceBurst() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._ForceBurst"));
    struct Params__ForceBurst {
    }; // Size: 0x0
    Params__ForceBurst params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_SpawnEnemies() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._SpawnEnemies"));
    struct Params__SpawnEnemies {
    }; // Size: 0x0
    Params__SpawnEnemies params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StopPulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopPulse"));
    struct Params__StopPulse {
    }; // Size: 0x0
    Params__StopPulse params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StopMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopMotion"));
    struct Params__StopMotion {
    }; // Size: 0x0
    Params__StopMotion params{};
    ProcessEvent(func, &params);
}
FTransform ASpiderEggs::_FindValidEnemySpawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._FindValidEnemySpawn"));
    struct Params__FindValidEnemySpawn {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params__FindValidEnemySpawn params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void ASpiderEggs::_LightFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._LightFire"));
    struct Params__LightFire {
    }; // Size: 0x0
    Params__LightFire params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StopForceBurstDelay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopForceBurstDelay"));
    struct Params__StopForceBurstDelay {
    }; // Size: 0x0
    Params__StopForceBurstDelay params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_CancelExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._CancelExplode"));
    struct Params__CancelExplode {
    }; // Size: 0x0
    Params__CancelExplode params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StopFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopFire"));
    struct Params__StopFire {
    }; // Size: 0x0
    Params__StopFire params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StopExplodeDelay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopExplodeDelay"));
    struct Params__StopExplodeDelay {
    }; // Size: 0x0
    Params__StopExplodeDelay params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StopBreathing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopBreathing"));
    struct Params__StopBreathing {
    }; // Size: 0x0
    Params__StopBreathing params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StopAlertDelay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StopAlertDelay"));
    struct Params__StopAlertDelay {
    }; // Size: 0x0
    Params__StopAlertDelay params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_Explode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._Explode"));
    struct Params__Explode {
    }; // Size: 0x0
    Params__Explode params{};
    ProcessEvent(func, &params);
}
bool ASpiderEggs::_HasActorsInRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._HasActorsInRadius"));
    struct Params__HasActorsInRadius {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params__HasActorsInRadius params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpiderEggs::_StartTimerDelays() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartTimerDelays"));
    struct Params__StartTimerDelays {
    }; // Size: 0x0
    Params__StartTimerDelays params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StartPulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartPulse"));
    struct Params__StartPulse {
    }; // Size: 0x0
    Params__StartPulse params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StartMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartMotion"));
    struct Params__StartMotion {
    }; // Size: 0x0
    Params__StartMotion params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StartForceBurstDelay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartForceBurstDelay"));
    struct Params__StartForceBurstDelay {
    }; // Size: 0x0
    Params__StartForceBurstDelay params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_SpawnLoot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._SpawnLoot"));
    struct Params__SpawnLoot {
    }; // Size: 0x0
    Params__SpawnLoot params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StartFireLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartFireLight"));
    struct Params__StartFireLight {
    }; // Size: 0x0
    Params__StartFireLight params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_FireTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._FireTick"));
    struct Params__FireTick {
    }; // Size: 0x0
    Params__FireTick params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_ResumePulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._ResumePulse"));
    struct Params__ResumePulse {
    }; // Size: 0x0
    Params__ResumePulse params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StartExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartExplode"));
    struct Params__StartExplode {
    }; // Size: 0x0
    Params__StartExplode params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_Fire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._Fire"));
    struct Params__Fire {
    }; // Size: 0x0
    Params__Fire params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_StartBurst() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._StartBurst"));
    struct Params__StartBurst {
    }; // Size: 0x0
    Params__StartBurst params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_SetupParamsForSpawnType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._SetupParamsForSpawnType"));
    struct Params__SetupParamsForSpawnType {
    }; // Size: 0x0
    Params__SetupParamsForSpawnType params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_ResumeMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._ResumeMotion"));
    struct Params__ResumeMotion {
    }; // Size: 0x0
    Params__ResumeMotion params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_ResumeBreathing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._ResumeBreathing"));
    struct Params__ResumeBreathing {
    }; // Size: 0x0
    Params__ResumeBreathing params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_PrintDebug(FString Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._PrintDebug"));
    struct Params__PrintDebug {
        FString Name; // 0x0
        float Value; // 0x10
    }; // Size: 0x14
    Params__PrintDebug params{};
    params.Name = (FString)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void ASpiderEggs::_PlayExplodeEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._PlayExplodeEffects"));
    struct Params__PlayExplodeEffects {
    }; // Size: 0x0
    Params__PlayExplodeEffects params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_DoDamageFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._DoDamageFire"));
    struct Params__DoDamageFire {
    }; // Size: 0x0
    Params__DoDamageFire params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_PlayDamagedEffects(float InDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._PlayDamagedEffects"));
    struct Params__PlayDamagedEffects {
        float InDamage; // 0x0
    }; // Size: 0x4
    Params__PlayDamagedEffects params{};
    params.InDamage = (float)InDamage;
    ProcessEvent(func, &params);
}
void ASpiderEggs::_PausePulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._PausePulse"));
    struct Params__PausePulse {
    }; // Size: 0x0
    Params__PausePulse params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_PauseMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._PauseMotion"));
    struct Params__PauseMotion {
    }; // Size: 0x0
    Params__PauseMotion params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_PauseBreathing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._PauseBreathing"));
    struct Params__PauseBreathing {
    }; // Size: 0x0
    Params__PauseBreathing params{};
    ProcessEvent(func, &params);
}
bool ASpiderEggs::_IsPausedBySpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._IsPausedBySpell"));
    struct Params__IsPausedBySpell {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params__IsPausedBySpell params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASpiderEggs::_ForceBurstStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._ForceBurstStart"));
    struct Params__ForceBurstStart {
    }; // Size: 0x0
    Params__ForceBurstStart params{};
    ProcessEvent(func, &params);
}
void ASpiderEggs::_CallDispatcher() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._CallDispatcher"));
    struct Params__CallDispatcher {
    }; // Size: 0x0
    Params__CallDispatcher params{};
    ProcessEvent(func, &params);
}
bool ASpiderEggs::_AddActorInRadius(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderEggs._AddActorInRadius"));
    struct Params__AddActorInRadius {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params__AddActorInRadius params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
