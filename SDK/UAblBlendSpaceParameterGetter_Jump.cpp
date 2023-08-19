#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Jump.hpp"
UAblBlendSpaceParameterGetter_Jump* UAblBlendSpaceParameterGetter_Jump::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Jump");
    return (UAblBlendSpaceParameterGetter_Jump*)res;
}
