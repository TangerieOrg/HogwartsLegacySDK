#include "UWorldFXRuleBlendDomainBase.hpp"
#include "UWorldFXRuleBlendDomainInCinematicCamera.hpp"
UWorldFXRuleBlendDomainInCinematicCamera* UWorldFXRuleBlendDomainInCinematicCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainInCinematicCamera");
    return (UWorldFXRuleBlendDomainInCinematicCamera*)res;
}
