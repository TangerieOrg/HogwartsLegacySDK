#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_MoveQuadrupedSpine.hpp"
UAblBlendSpaceParameterGetter_MoveQuadrupedSpine* UAblBlendSpaceParameterGetter_MoveQuadrupedSpine::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_MoveQuadrupedSpine");
    return (UAblBlendSpaceParameterGetter_MoveQuadrupedSpine*)res;
}
