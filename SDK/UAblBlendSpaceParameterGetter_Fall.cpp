#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Fall.hpp"
UAblBlendSpaceParameterGetter_Fall* UAblBlendSpaceParameterGetter_Fall::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Fall");
    return (UAblBlendSpaceParameterGetter_Fall*)res;
}
