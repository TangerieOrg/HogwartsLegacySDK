#include "UBaseObjectCopyComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UBaseObjectCopyComponent* UBaseObjectCopyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BaseObjectCopyComponent");
    return (UBaseObjectCopyComponent*)res;
}
void UBaseObjectCopyComponent::SetExistingTemplateActorHidden(bool bIsHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BaseObjectCopyComponent.SetExistingTemplateActorHidden"));
    struct Params_SetExistingTemplateActorHidden {
        bool bIsHidden; // 0x0
    }; // Size: 0x1
    Params_SetExistingTemplateActorHidden params{};
    params.bIsHidden = (bool)bIsHidden;
    ProcessEvent(func, &params);
}
