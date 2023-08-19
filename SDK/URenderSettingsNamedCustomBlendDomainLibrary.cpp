#include "URenderSettingsNamedCustomBlendDomainBase.hpp"
#include "URenderSettingsNamedCustomBlendDomainLibrary.hpp"
URenderSettingsNamedCustomBlendDomainLibrary* URenderSettingsNamedCustomBlendDomainLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsNamedCustomBlendDomainLibrary");
    return (URenderSettingsNamedCustomBlendDomainLibrary*)res;
}
