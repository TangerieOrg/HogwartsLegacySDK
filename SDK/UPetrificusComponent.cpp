#include "FPetrificusData.hpp"
#include "UPetrificusComponent.hpp"
#include "UStateEffectComponent.hpp"
UPetrificusComponent* UPetrificusComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PetrificusComponent");
    return (UPetrificusComponent*)res;
}
