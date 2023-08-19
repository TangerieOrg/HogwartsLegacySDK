#include "FHairGroupDesc.hpp"
#include "UFunction.hpp"
#include "UGroomAsset.hpp"
#include "UGroomBindingAsset.hpp"
#include "UGroomCache.hpp"
#include "UGroomComponent.hpp"
#include "UMaterialInterface.hpp"
#include "UMeshComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMesh.hpp"
UGroomComponent* UGroomComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomComponent");
    return (UGroomComponent*)res;
}
void UGroomComponent::SetGroomAsset(UGroomAsset* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HairStrandsCore.GroomComponent.SetGroomAsset"));
    struct Params_SetGroomAsset {
        UGroomAsset* Asset; // 0x0
    }; // Size: 0x8
    Params_SetGroomAsset params{};
    params.Asset = (UGroomAsset*)Asset;
    ProcessEvent(func, &params);
}
void UGroomComponent::SetBindingAsset(UGroomBindingAsset* InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HairStrandsCore.GroomComponent.SetBindingAsset"));
    struct Params_SetBindingAsset {
        UGroomBindingAsset* InBinding; // 0x0
    }; // Size: 0x8
    Params_SetBindingAsset params{};
    params.InBinding = (UGroomBindingAsset*)InBinding;
    ProcessEvent(func, &params);
}
