#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Hitch.hpp"
UAblBlendSpaceParameterGetter_Hitch* UAblBlendSpaceParameterGetter_Hitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Hitch");
    return (UAblBlendSpaceParameterGetter_Hitch*)res;
}
