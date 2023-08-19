#include "UBlendDomainComponentVisibilityComponent.hpp"
#include "UBlendDomainParentVisibilityComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UBlendDomainParentVisibilityComponent* UBlendDomainParentVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.BlendDomainParentVisibilityComponent");
    return (UBlendDomainParentVisibilityComponent*)res;
}
UBlendDomainParentVisibilityComponent* UBlendDomainParentVisibilityComponent::CreateForParentComponent(USceneComponent* Parent, bool bTransient, bool bStartEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.BlendDomainParentVisibilityComponent.CreateForParentComponent"));
    struct Params_CreateForParentComponent {
        USceneComponent* Parent; // 0x0
        bool bTransient; // 0x8
        bool bStartEnabled; // 0x9
        char pad_a[0x6];
        UBlendDomainParentVisibilityComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateForParentComponent params{};
    params.Parent = (USceneComponent*)Parent;
    params.bTransient = (bool)bTransient;
    params.bStartEnabled = (bool)bStartEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBlendDomainParentVisibilityComponent*)params.ReturnValue;
}
