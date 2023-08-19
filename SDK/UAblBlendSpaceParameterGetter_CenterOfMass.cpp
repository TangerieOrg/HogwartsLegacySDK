#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_CenterOfMass.hpp"
UAblBlendSpaceParameterGetter_CenterOfMass* UAblBlendSpaceParameterGetter_CenterOfMass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_CenterOfMass");
    return (UAblBlendSpaceParameterGetter_CenterOfMass*)res;
}
