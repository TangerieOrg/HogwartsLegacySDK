#include "AActor.hpp"
#include "ADraingingDraughtOrb.hpp"
#include "ADrainingDraughtEffect.hpp"
#include "AMunitionType_AOESpell.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
void ADrainingDraughtEffect::SpawnOrbs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.SpawnOrbs"));
    struct Params_SpawnOrbs {
    }; // Size: 0x0
    Params_SpawnOrbs params{};
    ProcessEvent(func, &params);
}
ADrainingDraughtEffect* ADrainingDraughtEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DrainingDraughtEffect");
    return (ADrainingDraughtEffect*)res;
}
void ADrainingDraughtEffect::SendOutOrb() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.SendOutOrb"));
    struct Params_SendOutOrb {
    }; // Size: 0x0
    Params_SendOutOrb params{};
    ProcessEvent(func, &params);
}
void ADrainingDraughtEffect::Tick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.Tick"));
    struct Params_Tick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_Tick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ADrainingDraughtEffect::SetNumberOrbs(int32_t NumOrbs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.SetNumberOrbs"));
    struct Params_SetNumberOrbs {
        int32_t NumOrbs; // 0x0
    }; // Size: 0x4
    Params_SetNumberOrbs params{};
    params.NumOrbs = (int32_t)NumOrbs;
    ProcessEvent(func, &params);
}
void ADrainingDraughtEffect::OnOverlapEndCloudSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.OnOverlapEndCloudSphere"));
    struct Params_OnOverlapEndCloudSphere {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEndCloudSphere params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ADrainingDraughtEffect::OnOverlapEndSeekSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.OnOverlapEndSeekSphere"));
    struct Params_OnOverlapEndSeekSphere {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEndSeekSphere params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ADrainingDraughtEffect::OnOverlapBeginSeekSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.OnOverlapBeginSeekSphere"));
    struct Params_OnOverlapBeginSeekSphere {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBeginSeekSphere params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ADrainingDraughtEffect::OnOverlapBeginCloudSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.OnOverlapBeginCloudSphere"));
    struct Params_OnOverlapBeginCloudSphere {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBeginCloudSphere params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
ADraingingDraughtOrb* ADrainingDraughtEffect::GetBestAvailableOrb(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.GetBestAvailableOrb"));
    struct Params_GetBestAvailableOrb {
        AActor* Target; // 0x0
        ADraingingDraughtOrb* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBestAvailableOrb params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
    return (ADraingingDraughtOrb*)params.ReturnValue;
}
void ADrainingDraughtEffect::DoAOECloudDamageCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.DoAOECloudDamageCallback"));
    struct Params_DoAOECloudDamageCallback {
    }; // Size: 0x0
    Params_DoAOECloudDamageCallback params{};
    ProcessEvent(func, &params);
}
void ADrainingDraughtEffect::BeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DrainingDraughtEffect.BeginPlay"));
    struct Params_BeginPlay {
    }; // Size: 0x0
    Params_BeginPlay params{};
    ProcessEvent(func, &params);
}
