#include "URenderSettingsCustomBlendDomainOverrideComponentBase.hpp"
#include "URenderSettingsCustomBlendDomainOverrideRawComponent.hpp"
URenderSettingsCustomBlendDomainOverrideRawComponent* URenderSettingsCustomBlendDomainOverrideRawComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainOverrideRawComponent");
    return (URenderSettingsCustomBlendDomainOverrideRawComponent*)res;
}
