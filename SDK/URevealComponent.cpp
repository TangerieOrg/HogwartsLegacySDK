#include "FRevealData.hpp"
#include "URevealComponent.hpp"
#include "UStateEffectComponent.hpp"
URevealComponent* URevealComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RevealComponent");
    return (URevealComponent*)res;
}
