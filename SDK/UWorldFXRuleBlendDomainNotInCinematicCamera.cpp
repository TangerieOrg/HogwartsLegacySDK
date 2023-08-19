#include "UWorldFXRuleBlendDomainBase.hpp"
#include "UWorldFXRuleBlendDomainNotInCinematicCamera.hpp"
UWorldFXRuleBlendDomainNotInCinematicCamera* UWorldFXRuleBlendDomainNotInCinematicCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainNotInCinematicCamera");
    return (UWorldFXRuleBlendDomainNotInCinematicCamera*)res;
}
