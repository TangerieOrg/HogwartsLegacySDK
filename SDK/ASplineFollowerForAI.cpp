#include "AActor.hpp"
#include "ASceneRigActor.hpp"
#include "ASplineFollowerForAI.hpp"
#include "EPerformTaskSplineTypes.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FSplinePoint.hpp"
#include "FSplineSceneRig.hpp"
#include "UCameraStackInfluenceHandle.hpp"
#include "UCameraStackVolumePreset.hpp"
#include "UFunction.hpp"
#include "UPathComponent.hpp"
#include "UScheduledEntity.hpp"
void ASplineFollowerForAI::MoveOnSplineFleshLoad(AActor* FleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineFollowerForAI.MoveOnSplineFleshLoad"));
    struct Params_MoveOnSplineFleshLoad {
        AActor* FleshActor; // 0x0
    }; // Size: 0x8
    Params_MoveOnSplineFleshLoad params{};
    params.FleshActor = (AActor*)FleshActor;
    ProcessEvent(func, &params);
}
ASplineFollowerForAI* ASplineFollowerForAI::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SplineFollowerForAI");
    return (ASplineFollowerForAI*)res;
}
void ASplineFollowerForAI::CreateSplineFromGivenPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineFollowerForAI.CreateSplineFromGivenPoints"));
    struct Params_CreateSplineFromGivenPoints {
    }; // Size: 0x0
    Params_CreateSplineFromGivenPoints params{};
    ProcessEvent(func, &params);
}
void ASplineFollowerForAI::SetLumos(bool InbLumosOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineFollowerForAI.SetLumos"));
    struct Params_SetLumos {
        bool InbLumosOn; // 0x0
    }; // Size: 0x1
    Params_SetLumos params{};
    params.InbLumosOn = (bool)InbLumosOn;
    ProcessEvent(func, &params);
}
void ASplineFollowerForAI::UpdateSplineType(EPerformTaskSplineTypes NewSplineType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineFollowerForAI.UpdateSplineType"));
    struct Params_UpdateSplineType {
        EPerformTaskSplineTypes NewSplineType; // 0x0
    }; // Size: 0x1
    Params_UpdateSplineType params{};
    params.NewSplineType = (EPerformTaskSplineTypes)NewSplineType;
    ProcessEvent(func, &params);
}
void ASplineFollowerForAI::StartAIMovementOnSpline(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineFollowerForAI.StartAIMovementOnSpline"));
    struct Params_StartAIMovementOnSpline {
        UScheduledEntity* InScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_StartAIMovementOnSpline params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
void ASplineFollowerForAI::OnWaitForPlayerComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineFollowerForAI.OnWaitForPlayerComplete"));
    struct Params_OnWaitForPlayerComplete {
    }; // Size: 0x0
    Params_OnWaitForPlayerComplete params{};
    ProcessEvent(func, &params);
}
void ASplineFollowerForAI::OnFleshLoadComplete(AActor* FleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineFollowerForAI.OnFleshLoadComplete"));
    struct Params_OnFleshLoadComplete {
        AActor* FleshActor; // 0x0
    }; // Size: 0x8
    Params_OnFleshLoadComplete params{};
    params.FleshActor = (AActor*)FleshActor;
    ProcessEvent(func, &params);
}
