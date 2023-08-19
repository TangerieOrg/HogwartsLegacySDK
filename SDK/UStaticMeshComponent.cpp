#include "FColor.hpp"
#include "FLightmassPrimitiveSettings.hpp"
#include "FStaticMeshComponentLODInfo.hpp"
#include "FStreamingTextureBuildInfo.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
UStaticMeshComponent* UStaticMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StaticMeshComponent");
    return (UStaticMeshComponent*)res;
}
bool UStaticMeshComponent::SetStaticMesh(UStaticMesh* NewMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshComponent.SetStaticMesh"));
    struct Params_SetStaticMesh {
        UStaticMesh* NewMesh; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetStaticMesh params{};
    params.NewMesh = (UStaticMesh*)NewMesh;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStaticMeshComponent::SetReverseCulling(bool ReverseCulling) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshComponent.SetReverseCulling"));
    struct Params_SetReverseCulling {
        bool ReverseCulling; // 0x0
    }; // Size: 0x1
    Params_SetReverseCulling params{};
    params.ReverseCulling = (bool)ReverseCulling;
    ProcessEvent(func, &params);
}
void UStaticMeshComponent::SetDistanceFieldSelfShadowBias(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias"));
    struct Params_SetDistanceFieldSelfShadowBias {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetDistanceFieldSelfShadowBias params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UStaticMeshComponent::SetForcedLodModel(int32_t NewForcedLodModel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshComponent.SetForcedLodModel"));
    struct Params_SetForcedLodModel {
        int32_t NewForcedLodModel; // 0x0
    }; // Size: 0x4
    Params_SetForcedLodModel params{};
    params.NewForcedLodModel = (int32_t)NewForcedLodModel;
    ProcessEvent(func, &params);
}
void UStaticMeshComponent::OnRep_StaticMesh(UStaticMesh* OldStaticMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshComponent.OnRep_StaticMesh"));
    struct Params_OnRep_StaticMesh {
        UStaticMesh* OldStaticMesh; // 0x0
    }; // Size: 0x8
    Params_OnRep_StaticMesh params{};
    params.OldStaticMesh = (UStaticMesh*)OldStaticMesh;
    ProcessEvent(func, &params);
}
void UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshComponent.SetEvaluateWorldPositionOffsetInRayTracing"));
    struct Params_SetEvaluateWorldPositionOffsetInRayTracing {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_SetEvaluateWorldPositionOffsetInRayTracing params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
void UStaticMeshComponent::GetLocalBounds(FVector& Min, FVector& Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshComponent.GetLocalBounds"));
    struct Params_GetLocalBounds {
        FVector Min; // 0x0
        FVector Max; // 0xc
    }; // Size: 0x18
    Params_GetLocalBounds params{};
    params.Min = (FVector)Min;
    params.Max = (FVector)Max;
    ProcessEvent(func, &params);
    Min = params.Min;
    Max = params.Max;
}
