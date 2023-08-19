#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_BodyLean2D.hpp"
UAblBlendSpaceParameterGetter_BodyLean2D* UAblBlendSpaceParameterGetter_BodyLean2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_BodyLean2D");
    return (UAblBlendSpaceParameterGetter_BodyLean2D*)res;
}
