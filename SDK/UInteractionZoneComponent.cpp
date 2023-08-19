#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionZoneComponent.hpp"
#include "UPrimitiveComponent.hpp"
void UInteractionZoneComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractionZoneComponent.OnEndOverlap"));
    struct Params_OnEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
UInteractionZoneComponent* UInteractionZoneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InteractionZoneComponent");
    return (UInteractionZoneComponent*)res;
}
void UInteractionZoneComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractionZoneComponent.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void UInteractionZoneComponent::OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractionZoneComponent.OnActorEndPlay"));
    struct Params_OnActorEndPlay {
        AActor* DestroyedActor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnActorEndPlay params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
