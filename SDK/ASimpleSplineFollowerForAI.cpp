#include "AActor.hpp"
#include "ASimpleSplineFollowerForAI.hpp"
#include "EPerformTaskSplineTypes.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FSplinePoint.hpp"
#include "UFunction.hpp"
#include "UPathComponent.hpp"
#include "UScheduledEntity.hpp"
void ASimpleSplineFollowerForAI::MoveOnSplineFleshLoad(AActor* FleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleSplineFollowerForAI.MoveOnSplineFleshLoad"));
    struct Params_MoveOnSplineFleshLoad {
        AActor* FleshActor; // 0x0
    }; // Size: 0x8
    Params_MoveOnSplineFleshLoad params{};
    params.FleshActor = (AActor*)FleshActor;
    ProcessEvent(func, &params);
}
ASimpleSplineFollowerForAI* ASimpleSplineFollowerForAI::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SimpleSplineFollowerForAI");
    return (ASimpleSplineFollowerForAI*)res;
}
void ASimpleSplineFollowerForAI::CreateSplineFromGivenPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleSplineFollowerForAI.CreateSplineFromGivenPoints"));
    struct Params_CreateSplineFromGivenPoints {
    }; // Size: 0x0
    Params_CreateSplineFromGivenPoints params{};
    ProcessEvent(func, &params);
}
void ASimpleSplineFollowerForAI::StartAIMovementOnSpline(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleSplineFollowerForAI.StartAIMovementOnSpline"));
    struct Params_StartAIMovementOnSpline {
        UScheduledEntity* InScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_StartAIMovementOnSpline params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
void ASimpleSplineFollowerForAI::OnFleshLoadComplete(AActor* FleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleSplineFollowerForAI.OnFleshLoadComplete"));
    struct Params_OnFleshLoadComplete {
        AActor* FleshActor; // 0x0
    }; // Size: 0x8
    Params_OnFleshLoadComplete params{};
    params.FleshActor = (AActor*)FleshActor;
    ProcessEvent(func, &params);
}
