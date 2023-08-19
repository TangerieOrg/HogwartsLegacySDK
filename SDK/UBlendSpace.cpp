#include "EBlendSpaceAxis.hpp"
#include "UBlendSpace.hpp"
#include "UBlendSpaceBase.hpp"
UBlendSpace* UBlendSpace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlendSpace");
    return (UBlendSpace*)res;
}
