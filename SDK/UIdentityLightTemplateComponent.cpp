#include "ESanctuaryIdentity.hpp"
#include "UFunction.hpp"
#include "UIdentityLightTemplateComponent.hpp"
#include "ULightTemplateComponent.hpp"
UIdentityLightTemplateComponent* UIdentityLightTemplateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IdentityLightTemplateComponent");
    return (UIdentityLightTemplateComponent*)res;
}
void UIdentityLightTemplateComponent::OnUpdateIdentity(ESanctuaryIdentity PreviousIdentity, ESanctuaryIdentity CurrentIdentity, float BlendWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IdentityLightTemplateComponent.OnUpdateIdentity"));
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
