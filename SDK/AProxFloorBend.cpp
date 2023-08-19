#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AProxFloorBend.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UBoxComponent.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void AProxFloorBend::ResetFloor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.ResetFloor"));
    struct Params_ResetFloor {
    }; // Size: 0x0
    Params_ResetFloor params{};
    ProcessEvent(func, &params);
}
AProxFloorBend* AProxFloorBend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ProxFloorBend");
    return (AProxFloorBend*)res;
}
void AProxFloorBend::UpdateProxFloorBend(float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.UpdateProxFloorBend"));
    struct Params_UpdateProxFloorBend {
        float Blend; // 0x0
    }; // Size: 0x4
    Params_UpdateProxFloorBend params{};
    params.Blend = (float)Blend;
    ProcessEvent(func, &params);
}
void AProxFloorBend::UpdateRTPCValues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.UpdateRTPCValues"));
    struct Params_UpdateRTPCValues {
    }; // Size: 0x0
    Params_UpdateRTPCValues params{};
    ProcessEvent(func, &params);
}
void AProxFloorBend::UpdateCollisionResponse(float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.UpdateCollisionResponse"));
    struct Params_UpdateCollisionResponse {
        float Blend; // 0x0
    }; // Size: 0x4
    Params_UpdateCollisionResponse params{};
    params.Blend = (float)Blend;
    ProcessEvent(func, &params);
}
void AProxFloorBend::OnTimelineFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.OnTimelineFinished"));
    struct Params_OnTimelineFinished {
    }; // Size: 0x0
    Params_OnTimelineFinished params{};
    ProcessEvent(func, &params);
}
bool AProxFloorBend::ProxFloorBendSetUp(USceneComponent* i_SceneComponent, UStaticMeshComponent* i_NewFloor, UAkComponent* i_AkComponent, UBoxComponent* i_TriggerBox, AActor* i_ComparisonActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.ProxFloorBendSetUp"));
    struct Params_ProxFloorBendSetUp {
        USceneComponent* i_SceneComponent; // 0x0
        UStaticMeshComponent* i_NewFloor; // 0x8
        UAkComponent* i_AkComponent; // 0x10
        UBoxComponent* i_TriggerBox; // 0x18
        AActor* i_ComparisonActor; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_ProxFloorBendSetUp params{};
    params.i_SceneComponent = (USceneComponent*)i_SceneComponent;
    params.i_NewFloor = (UStaticMeshComponent*)i_NewFloor;
    params.i_AkComponent = (UAkComponent*)i_AkComponent;
    params.i_TriggerBox = (UBoxComponent*)i_TriggerBox;
    params.i_ComparisonActor = (AActor*)i_ComparisonActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AProxFloorBend::SetFloorLocation(UPrimitiveComponent* Obj, float Blend, FVector BaseLOC, FVector CompareLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.SetFloorLocation"));
    struct Params_SetFloorLocation {
        UPrimitiveComponent* Obj; // 0x0
        float Blend; // 0x8
        FVector BaseLOC; // 0xc
        FVector CompareLocation; // 0x18
    }; // Size: 0x24
    Params_SetFloorLocation params{};
    params.Obj = (UPrimitiveComponent*)Obj;
    params.Blend = (float)Blend;
    params.BaseLOC = (FVector)BaseLOC;
    params.CompareLocation = (FVector)CompareLocation;
    ProcessEvent(func, &params);
}
void AProxFloorBend::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void AProxFloorBend::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProxFloorBend.OnOverlapBegin"));
    struct Params_OnOverlapBegin {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
