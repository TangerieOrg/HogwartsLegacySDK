#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Speed.hpp"
UAblBlendSpaceParameterGetter_Speed* UAblBlendSpaceParameterGetter_Speed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Speed");
    return (UAblBlendSpaceParameterGetter_Speed*)res;
}
