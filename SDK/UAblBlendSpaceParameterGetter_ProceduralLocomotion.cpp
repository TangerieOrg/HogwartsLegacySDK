#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_ProceduralLocomotion.hpp"
UAblBlendSpaceParameterGetter_ProceduralLocomotion* UAblBlendSpaceParameterGetter_ProceduralLocomotion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_ProceduralLocomotion");
    return (UAblBlendSpaceParameterGetter_ProceduralLocomotion*)res;
}
