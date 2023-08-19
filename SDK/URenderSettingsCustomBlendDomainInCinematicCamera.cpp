#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsCustomBlendDomainInCinematicCamera.hpp"
URenderSettingsCustomBlendDomainInCinematicCamera* URenderSettingsCustomBlendDomainInCinematicCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSettingsCustomBlendDomainInCinematicCamera");
    return (URenderSettingsCustomBlendDomainInCinematicCamera*)res;
}
