#include "ESanctuaryIdentity.hpp"
#include "FSanctuaryPortalMaterialSettings.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "USanctuaryPortalMaterialComponent.hpp"
#include "USceneComponent.hpp"
void USanctuaryPortalMaterialComponent::OnUpdateIdentity(ESanctuaryIdentity PreviousIdentity, ESanctuaryIdentity CurrentIdentity, float BlendWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryPortalMaterialComponent.OnUpdateIdentity"));
    struct Params_OnUpdateIdentity {
        ESanctuaryIdentity PreviousIdentity; // 0x0
        ESanctuaryIdentity CurrentIdentity; // 0x1
        char pad_2[0x2];
        float BlendWeight; // 0x4
    }; // Size: 0x8
    Params_OnUpdateIdentity params{};
    params.PreviousIdentity = (ESanctuaryIdentity)PreviousIdentity;
    params.CurrentIdentity = (ESanctuaryIdentity)CurrentIdentity;
    params.BlendWeight = (float)BlendWeight;
    ProcessEvent(func, &params);
}
USanctuaryPortalMaterialComponent* USanctuaryPortalMaterialComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryPortalMaterialComponent");
    return (USanctuaryPortalMaterialComponent*)res;
}
void USanctuaryPortalMaterialComponent::OnUpdateEntranceMaterials(UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryPortalMaterialComponent.OnUpdateEntranceMaterials"));
    struct Params_OnUpdateEntranceMaterials {
        UObject* InCaller; // 0x0
    }; // Size: 0x8
    Params_OnUpdateEntranceMaterials params{};
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
