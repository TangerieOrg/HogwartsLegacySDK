#include "UDecalComponent.hpp"
#include "UDecalPointLightComponentBase.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
UDecalPointLightComponentBase* UDecalPointLightComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.DecalPointLightComponentBase");
    return (UDecalPointLightComponentBase*)res;
}
void UDecalPointLightComponentBase::UpdateDecal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.DecalPointLightComponentBase.UpdateDecal"));
    struct Params_UpdateDecal {
    }; // Size: 0x0
    Params_UpdateDecal params{};
    ProcessEvent(func, &params);
}
void UDecalPointLightComponentBase::SetInverseSquaredDecalMaterial(UMaterialInterface* NewInverseSquaredDecalMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.DecalPointLightComponentBase.SetInverseSquaredDecalMaterial"));
    struct Params_SetInverseSquaredDecalMaterial {
        UMaterialInterface* NewInverseSquaredDecalMaterial; // 0x0
    }; // Size: 0x8
    Params_SetInverseSquaredDecalMaterial params{};
    params.NewInverseSquaredDecalMaterial = (UMaterialInterface*)NewInverseSquaredDecalMaterial;
    ProcessEvent(func, &params);
}
void UDecalPointLightComponentBase::SetFalloffExponentDecalMaterial(UMaterialInterface* NewFalloffExponentDecalMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.DecalPointLightComponentBase.SetFalloffExponentDecalMaterial"));
    struct Params_SetFalloffExponentDecalMaterial {
        UMaterialInterface* NewFalloffExponentDecalMaterial; // 0x0
    }; // Size: 0x8
    Params_SetFalloffExponentDecalMaterial params{};
    params.NewFalloffExponentDecalMaterial = (UMaterialInterface*)NewFalloffExponentDecalMaterial;
    ProcessEvent(func, &params);
}
