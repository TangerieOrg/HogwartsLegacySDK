#include "URenderSettingsCustomBlendDomainStreamingIndoors.hpp"
#include "URenderSettingsNamedCustomBlendDomain.hpp"
URenderSettingsCustomBlendDomainStreamingIndoors* URenderSettingsCustomBlendDomainStreamingIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainStreamingIndoors");
    return (URenderSettingsCustomBlendDomainStreamingIndoors*)res;
}
