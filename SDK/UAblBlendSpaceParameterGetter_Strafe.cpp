#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Strafe.hpp"
UAblBlendSpaceParameterGetter_Strafe* UAblBlendSpaceParameterGetter_Strafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Strafe");
    return (UAblBlendSpaceParameterGetter_Strafe*)res;
}
