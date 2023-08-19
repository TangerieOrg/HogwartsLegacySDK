#include "AActor.hpp"
#include "UBlendDomainActorVisibilityComponent.hpp"
#include "UBlendDomainComponentVisibilityComponent.hpp"
#include "UFunction.hpp"
UBlendDomainActorVisibilityComponent* UBlendDomainActorVisibilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.BlendDomainActorVisibilityComponent");
    return (UBlendDomainActorVisibilityComponent*)res;
}
UBlendDomainActorVisibilityComponent* UBlendDomainActorVisibilityComponent::CreateForActor(AActor* Actor, bool bTransient, bool bStartEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.BlendDomainActorVisibilityComponent.CreateForActor"));
    struct Params_CreateForActor {
        AActor* Actor; // 0x0
        bool bTransient; // 0x8
        bool bStartEnabled; // 0x9
        char pad_a[0x6];
        UBlendDomainActorVisibilityComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateForActor params{};
    params.Actor = (AActor*)Actor;
    params.bTransient = (bool)bTransient;
    params.bStartEnabled = (bool)bStartEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBlendDomainActorVisibilityComponent*)params.ReturnValue;
}
