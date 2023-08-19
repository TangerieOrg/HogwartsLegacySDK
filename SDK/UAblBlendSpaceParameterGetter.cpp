#include "UAblBlendSpaceParameterGetter.hpp"
#include "UObject.hpp"
UAblBlendSpaceParameterGetter* UAblBlendSpaceParameterGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBlendSpaceParameterGetter");
    return (UAblBlendSpaceParameterGetter*)res;
}
