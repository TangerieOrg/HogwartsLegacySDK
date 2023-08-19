#include "ECustomInterpType\Type.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Sprint.hpp"
UAblBlendSpaceParameterGetter_Sprint* UAblBlendSpaceParameterGetter_Sprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Sprint");
    return (UAblBlendSpaceParameterGetter_Sprint*)res;
}
