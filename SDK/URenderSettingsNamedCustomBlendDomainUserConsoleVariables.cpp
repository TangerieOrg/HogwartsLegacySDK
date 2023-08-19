#include "URenderSettingsNamedCustomBlendDomainLibrary.hpp"
#include "URenderSettingsNamedCustomBlendDomainUserConsoleVariables.hpp"
URenderSettingsNamedCustomBlendDomainUserConsoleVariables* URenderSettingsNamedCustomBlendDomainUserConsoleVariables::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsNamedCustomBlendDomainUserConsoleVariables");
    return (URenderSettingsNamedCustomBlendDomainUserConsoleVariables*)res;
}
