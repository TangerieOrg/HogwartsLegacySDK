#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_MoveStop.hpp"
UAblBlendSpaceParameterGetter_MoveStop* UAblBlendSpaceParameterGetter_MoveStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_MoveStop");
    return (UAblBlendSpaceParameterGetter_MoveStop*)res;
}
