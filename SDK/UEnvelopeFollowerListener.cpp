#include "UActorComponent.hpp"
#include "UEnvelopeFollowerListener.hpp"
UEnvelopeFollowerListener* UEnvelopeFollowerListener::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.EnvelopeFollowerListener");
    return (UEnvelopeFollowerListener*)res;
}
