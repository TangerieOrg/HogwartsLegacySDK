#include "UBlendSpace1D.hpp"
#include "UBlendSpaceBase.hpp"
UBlendSpace1D* UBlendSpace1D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlendSpace1D");
    return (UBlendSpace1D*)res;
}
