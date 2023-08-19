#include "UWorldFXRuleBlendDomainPlayer.hpp"
#include "UWorldFXRuleBlendDomainRange.hpp"
UWorldFXRuleBlendDomainPlayer* UWorldFXRuleBlendDomainPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleBlendDomainPlayer");
    return (UWorldFXRuleBlendDomainPlayer*)res;
}
