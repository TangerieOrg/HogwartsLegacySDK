#include "FLinearColor.hpp"
#include "FSMeshWidgetParticleEmitterProperties.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UParticleMeshRenderWidget.hpp"
#include "URUserVectorArtData.hpp"
#include "UStaticMesh.hpp"
#include "UTexture2D.hpp"
#include "UUserWidget.hpp"
void UParticleMeshRenderWidget::SetMaterial(UMaterialInterface* pMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleMeshRenderWidget.SetMaterial"));
    struct Params_SetMaterial {
        UMaterialInterface* pMaterial; // 0x0
    }; // Size: 0x8
    Params_SetMaterial params{};
    params.pMaterial = (UMaterialInterface*)pMaterial;
    ProcessEvent(func, &params);
}
void UParticleMeshRenderWidget::StartEmitter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleMeshRenderWidget.StartEmitter"));
    struct Params_StartEmitter {
    }; // Size: 0x0
    Params_StartEmitter params{};
    ProcessEvent(func, &params);
}
UParticleMeshRenderWidget* UParticleMeshRenderWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ParticleMeshRenderWidget");
    return (UParticleMeshRenderWidget*)res;
}
FLinearColor UParticleMeshRenderWidget::GetColorAndOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleMeshRenderWidget.GetColorAndOpacity"));
    struct Params_GetColorAndOpacity {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetColorAndOpacity params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UParticleMeshRenderWidget::StopEmitter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleMeshRenderWidget.StopEmitter"));
    struct Params_StopEmitter {
    }; // Size: 0x0
    Params_StopEmitter params{};
    ProcessEvent(func, &params);
}
UMaterialInstanceDynamic* UParticleMeshRenderWidget::CreateMaterial(UMaterialInterface* pMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ParticleMeshRenderWidget.CreateMaterial"));
    struct Params_CreateMaterial {
        UMaterialInterface* pMaterial; // 0x0
        UMaterialInstanceDynamic* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateMaterial params{};
    params.pMaterial = (UMaterialInterface*)pMaterial;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
