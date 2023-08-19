#include "URenderSettingsCustomBlendDomainAudioIndoors.hpp"
#include "URenderSettingsNamedCustomBlendDomain.hpp"
URenderSettingsCustomBlendDomainAudioIndoors* URenderSettingsCustomBlendDomainAudioIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsCustomBlendDomainAudioIndoors");
    return (URenderSettingsCustomBlendDomainAudioIndoors*)res;
}
