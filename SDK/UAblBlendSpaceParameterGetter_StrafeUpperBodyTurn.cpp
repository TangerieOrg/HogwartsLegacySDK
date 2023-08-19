#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_StrafeUpperBodyTurn.hpp"
UAblBlendSpaceParameterGetter_StrafeUpperBodyTurn* UAblBlendSpaceParameterGetter_StrafeUpperBodyTurn::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_StrafeUpperBodyTurn");
    return (UAblBlendSpaceParameterGetter_StrafeUpperBodyTurn*)res;
}
