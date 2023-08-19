#include "UBlendDomainChildVisibilityComponent.hpp"
#include "UBlendDomainComponentVisibilityComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UBlendDomainChildVisibilityComponent* UBlendDomainChildVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.BlendDomainChildVisibilityComponent");
    return (UBlendDomainChildVisibilityComponent*)res;
}
UBlendDomainChildVisibilityComponent* UBlendDomainChildVisibilityComponent::CreateForChildComponents(USceneComponent* Parent, bool bTransient, bool bStartEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.BlendDomainChildVisibilityComponent.CreateForChildComponents"));
    struct Params_CreateForChildComponents {
        USceneComponent* Parent; // 0x0
        bool bTransient; // 0x8
        bool bStartEnabled; // 0x9
        char pad_a[0x6];
        UBlendDomainChildVisibilityComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateForChildComponents params{};
    params.Parent = (USceneComponent*)Parent;
    params.bTransient = (bool)bTransient;
    params.bStartEnabled = (bool)bStartEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBlendDomainChildVisibilityComponent*)params.ReturnValue;
}
