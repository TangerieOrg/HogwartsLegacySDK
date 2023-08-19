#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_VelocityZ.hpp"
UAblBlendSpaceParameterGetter_VelocityZ* UAblBlendSpaceParameterGetter_VelocityZ::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_VelocityZ");
    return (UAblBlendSpaceParameterGetter_VelocityZ*)res;
}
