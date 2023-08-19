#include "EAxisMapping.hpp"
#include "UActorProvider.hpp"
#include "UBlendSpaceInputProvider.hpp"
#include "UBlendSpaceInput_GForce.hpp"
#include "UFloatProvider.hpp"
UBlendSpaceInput_GForce* UBlendSpaceInput_GForce::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BlendSpaceInput_GForce");
    return (UBlendSpaceInput_GForce*)res;
}
