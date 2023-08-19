#include "EHelperState.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UPathHelperComponent.hpp"
void UPathHelperComponent::StartDeploy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.StartDeploy"));
    struct Params_StartDeploy {
    }; // Size: 0x0
    Params_StartDeploy params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::StartDeployTurn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.StartDeployTurn"));
    struct Params_StartDeployTurn {
    }; // Size: 0x0
    Params_StartDeployTurn params{};
    ProcessEvent(func, &params);
}
UPathHelperComponent* UPathHelperComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PathHelperComponent");
    return (UPathHelperComponent*)res;
}
void UPathHelperComponent::SetState(EHelperState InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.SetState"));
    struct Params_SetState {
        EHelperState InState; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.InState = (EHelperState)InState;
    ProcessEvent(func, &params);
}
void UPathHelperComponent::StartStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.StartStart"));
    struct Params_StartStart {
    }; // Size: 0x0
    Params_StartStart params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::StartRun() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.StartRun"));
    struct Params_StartRun {
    }; // Size: 0x0
    Params_StartRun params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::StartHelp_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.StartHelp_Event"));
    struct Params_StartHelp_Event {
    }; // Size: 0x0
    Params_StartHelp_Event params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::StartHelp(TArray<FVector> InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.StartHelp"));
    struct Params_StartHelp {
        TArray<FVector> InPath; // 0x0
    }; // Size: 0x10
    Params_StartHelp params{};
    params.InPath = (TArray<FVector>)InPath;
    ProcessEvent(func, &params);
}
void UPathHelperComponent::SetNewStopAndAttractPoint(int32_t Index, FVector Point, bool CreatePoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.SetNewStopAndAttractPoint"));
    struct Params_SetNewStopAndAttractPoint {
        int32_t Index; // 0x0
        FVector Point; // 0x4
        bool CreatePoint; // 0x10
    }; // Size: 0x11
    Params_SetNewStopAndAttractPoint params{};
    params.Index = (int32_t)Index;
    params.Point = (FVector)Point;
    params.CreatePoint = (bool)CreatePoint;
    ProcessEvent(func, &params);
}
void UPathHelperComponent::RunStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.RunStart"));
    struct Params_RunStart {
    }; // Size: 0x0
    Params_RunStart params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::PopOutStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.PopOutStart"));
    struct Params_PopOutStart {
    }; // Size: 0x0
    Params_PopOutStart params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::EndStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.EndStart"));
    struct Params_EndStart {
    }; // Size: 0x0
    Params_EndStart params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::DeployTurnStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.DeployTurnStart"));
    struct Params_DeployTurnStart {
    }; // Size: 0x0
    Params_DeployTurnStart params{};
    ProcessEvent(func, &params);
}
void UPathHelperComponent::DeployStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.DeployStart"));
    struct Params_DeployStart {
    }; // Size: 0x0
    Params_DeployStart params{};
    ProcessEvent(func, &params);
}
float UPathHelperComponent::CalculateAngleBetweenTwoVectors(FVector v1, FVector v2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.CalculateAngleBetweenTwoVectors"));
    struct Params_CalculateAngleBetweenTwoVectors {
        FVector v1; // 0x0
        FVector v2; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_CalculateAngleBetweenTwoVectors params{};
    params.v1 = (FVector)v1;
    params.v2 = (FVector)v2;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPathHelperComponent::AttractStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathHelperComponent.AttractStart"));
    struct Params_AttractStart {
    }; // Size: 0x0
    Params_AttractStart params{};
    ProcessEvent(func, &params);
}
