#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_LumosHold.hpp"
UAblBlendSpaceParameterGetter_LumosHold* UAblBlendSpaceParameterGetter_LumosHold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_LumosHold");
    return (UAblBlendSpaceParameterGetter_LumosHold*)res;
}
