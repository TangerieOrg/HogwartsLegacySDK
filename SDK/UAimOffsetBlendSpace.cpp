#include "UAimOffsetBlendSpace.hpp"
#include "UBlendSpace.hpp"
UAimOffsetBlendSpace* UAimOffsetBlendSpace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AimOffsetBlendSpace");
    return (UAimOffsetBlendSpace*)res;
}
