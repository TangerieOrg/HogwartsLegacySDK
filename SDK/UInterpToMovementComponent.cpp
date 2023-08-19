#include "EInterpToBehaviourType.hpp"
#include "ETeleportType.hpp"
#include "FHitResult.hpp"
#include "FInterpControlPoint.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInterpToMovementComponent.hpp"
#include "UMovementComponent.hpp"
UInterpToMovementComponent* UInterpToMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpToMovementComponent");
    return (UInterpToMovementComponent*)res;
}
void UInterpToMovementComponent::OnInterpToWaitEndDelegate__DelegateSignature(FHitResult& ImpactResult, float Time) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature"));
    struct Params_OnInterpToWaitEndDelegate__DelegateSignature {
        FHitResult ImpactResult; // 0x0
        float Time; // 0x88
    }; // Size: 0x8c
    Params_OnInterpToWaitEndDelegate__DelegateSignature params{};
    params.ImpactResult = (FHitResult)ImpactResult;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
    ImpactResult = params.ImpactResult;
}
void UInterpToMovementComponent::StopSimulating(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InterpToMovementComponent.StopSimulating"));
    struct Params_StopSimulating {
        FHitResult HitResult; // 0x0
    }; // Size: 0x88
    Params_StopSimulating params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void UInterpToMovementComponent::RestartMovement(float InitialDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InterpToMovementComponent.RestartMovement"));
    struct Params_RestartMovement {
        float InitialDirection; // 0x0
    }; // Size: 0x4
    Params_RestartMovement params{};
    params.InitialDirection = (float)InitialDirection;
    ProcessEvent(func, &params);
}
void UInterpToMovementComponent::OnInterpToStopDelegate__DelegateSignature(FHitResult& ImpactResult, float Time) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature"));
    struct Params_OnInterpToStopDelegate__DelegateSignature {
        FHitResult ImpactResult; // 0x0
        float Time; // 0x88
    }; // Size: 0x8c
    Params_OnInterpToStopDelegate__DelegateSignature params{};
    params.ImpactResult = (FHitResult)ImpactResult;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
    ImpactResult = params.ImpactResult;
}
void UInterpToMovementComponent::ResetControlPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InterpToMovementComponent.ResetControlPoints"));
    struct Params_ResetControlPoints {
    }; // Size: 0x0
    Params_ResetControlPoints params{};
    ProcessEvent(func, &params);
}
void UInterpToMovementComponent::OnInterpToReverseDelegate__DelegateSignature(FHitResult& ImpactResult, float Time) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature"));
    struct Params_OnInterpToReverseDelegate__DelegateSignature {
        FHitResult ImpactResult; // 0x0
        float Time; // 0x88
    }; // Size: 0x8c
    Params_OnInterpToReverseDelegate__DelegateSignature params{};
    params.ImpactResult = (FHitResult)ImpactResult;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
    ImpactResult = params.ImpactResult;
}
void UInterpToMovementComponent::OnInterpToWaitBeginDelegate__DelegateSignature(FHitResult& ImpactResult, float Time) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature"));
    struct Params_OnInterpToWaitBeginDelegate__DelegateSignature {
        FHitResult ImpactResult; // 0x0
        float Time; // 0x88
    }; // Size: 0x8c
    Params_OnInterpToWaitBeginDelegate__DelegateSignature params{};
    params.ImpactResult = (FHitResult)ImpactResult;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
    ImpactResult = params.ImpactResult;
}
void UInterpToMovementComponent::OnInterpToResetDelegate__DelegateSignature(FHitResult& ImpactResult, float Time) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature"));
    struct Params_OnInterpToResetDelegate__DelegateSignature {
        FHitResult ImpactResult; // 0x0
        float Time; // 0x88
    }; // Size: 0x8c
    Params_OnInterpToResetDelegate__DelegateSignature params{};
    params.ImpactResult = (FHitResult)ImpactResult;
    params.Time = (float)Time;
    ProcessEvent(func, &params);
    ImpactResult = params.ImpactResult;
}
void UInterpToMovementComponent::FinaliseControlPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InterpToMovementComponent.FinaliseControlPoints"));
    struct Params_FinaliseControlPoints {
    }; // Size: 0x0
    Params_FinaliseControlPoints params{};
    ProcessEvent(func, &params);
}
void UInterpToMovementComponent::AddControlPointPosition(FVector Pos, bool bPositionIsRelative) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InterpToMovementComponent.AddControlPointPosition"));
    struct Params_AddControlPointPosition {
        FVector Pos; // 0x0
        bool bPositionIsRelative; // 0xc
    }; // Size: 0xd
    Params_AddControlPointPosition params{};
    params.Pos = (FVector)Pos;
    params.bPositionIsRelative = (bool)bPositionIsRelative;
    ProcessEvent(func, &params);
}
