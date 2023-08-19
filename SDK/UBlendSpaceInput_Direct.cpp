#include "FVector.hpp"
#include "UBlendSpaceInputProvider.hpp"
#include "UBlendSpaceInput_Direct.hpp"
UBlendSpaceInput_Direct* UBlendSpaceInput_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BlendSpaceInput_Direct");
    return (UBlendSpaceInput_Direct*)res;
}
