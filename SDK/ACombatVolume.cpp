#include "AActor.hpp"
#include "ACombatVolume.hpp"
#include "ATargetPoint.hpp"
#include "FColor.hpp"
#include "FCustomButtonWidget.hpp"
#include "FHitResult.hpp"
#include "UBoxComponent.hpp"
#include "UCombatDOVCollection.hpp"
#include "UCombatVolumeGroup.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
ACombatVolume* ACombatVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombatVolume");
    return (ACombatVolume*)res;
}
void ACombatVolume::OnActorSpawnInFinished(AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatVolume.OnActorSpawnInFinished"));
    struct Params_OnActorSpawnInFinished {
        AActor* SpawnedActor; // 0x0
    }; // Size: 0x8
    Params_OnActorSpawnInFinished params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
void ACombatVolume::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatVolume.BeginOverlap"));
    struct Params_BeginOverlap {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BeginOverlap params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ACombatVolume::OnActorDeadEvent(AActor* DeadActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatVolume.OnActorDeadEvent"));
    struct Params_OnActorDeadEvent {
        AActor* DeadActor; // 0x0
    }; // Size: 0x8
    Params_OnActorDeadEvent params{};
    params.DeadActor = (AActor*)DeadActor;
    ProcessEvent(func, &params);
}
UCombatVolumeGroup* ACombatVolume::GetGroup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatVolume.GetGroup"));
    struct Params_GetGroup {
        UCombatVolumeGroup* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGroup params{};
    ProcessEvent(func, &params);
    return (UCombatVolumeGroup*)params.ReturnValue;
}
void ACombatVolume::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatVolume.EndOverlap"));
    struct Params_EndOverlap {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_EndOverlap params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
