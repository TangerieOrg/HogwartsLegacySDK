#include "FLinearColor.hpp"
#include "UBodySetup.hpp"
#include "UFunction.hpp"
#include "UMRMeshComponent.hpp"
#include "UMaterialInterface.hpp"
#include "UPrimitiveComponent.hpp"
void UMRMeshComponent::SetEnableMeshOcclusion(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion"));
    struct Params_SetEnableMeshOcclusion {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetEnableMeshOcclusion params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
UMRMeshComponent* UMRMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MRMesh.MRMeshComponent");
    return (UMRMeshComponent*)res;
}
void UMRMeshComponent::SetUseWireframe(bool bUseWireframe) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.SetUseWireframe"));
    struct Params_SetUseWireframe {
        bool bUseWireframe; // 0x0
    }; // Size: 0x1
    Params_SetUseWireframe params{};
    params.bUseWireframe = (bool)bUseWireframe;
    ProcessEvent(func, &params);
}
void UMRMeshComponent::SetWireframeMaterial(UMaterialInterface* InMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial"));
    struct Params_SetWireframeMaterial {
        UMaterialInterface* InMaterial; // 0x0
    }; // Size: 0x8
    Params_SetWireframeMaterial params{};
    params.InMaterial = (UMaterialInterface*)InMaterial;
    ProcessEvent(func, &params);
}
void UMRMeshComponent::SetWireframeColor(FLinearColor& InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.SetWireframeColor"));
    struct Params_SetWireframeColor {
        FLinearColor InColor; // 0x0
    }; // Size: 0x10
    Params_SetWireframeColor params{};
    params.InColor = (FLinearColor)InColor;
    ProcessEvent(func, &params);
    InColor = params.InColor;
}
bool UMRMeshComponent::IsConnected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.IsConnected"));
    struct Params_IsConnected {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsConnected params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMRMeshComponent::GetUseWireframe() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.GetUseWireframe"));
    struct Params_GetUseWireframe {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUseWireframe params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMRMeshComponent::ForceNavMeshUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate"));
    struct Params_ForceNavMeshUpdate {
    }; // Size: 0x0
    Params_ForceNavMeshUpdate params{};
    ProcessEvent(func, &params);
}
FLinearColor UMRMeshComponent::GetWireframeColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.GetWireframeColor"));
    struct Params_GetWireframeColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWireframeColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UMRMeshComponent::GetEnableMeshOcclusion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion"));
    struct Params_GetEnableMeshOcclusion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetEnableMeshOcclusion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMRMeshComponent::Clear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MRMeshComponent.Clear"));
    struct Params_Clear {
    }; // Size: 0x0
    Params_Clear params{};
    ProcessEvent(func, &params);
}
