#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainInEditor.hpp"
URenderSettingsCustomBlendDomainInEditor* URenderSettingsCustomBlendDomainInEditor::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainInEditor");
    return (URenderSettingsCustomBlendDomainInEditor*)res;
}
