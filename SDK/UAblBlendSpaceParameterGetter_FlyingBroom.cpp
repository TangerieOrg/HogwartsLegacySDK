#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_FlyingBroom.hpp"
UAblBlendSpaceParameterGetter_FlyingBroom* UAblBlendSpaceParameterGetter_FlyingBroom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_FlyingBroom");
    return (UAblBlendSpaceParameterGetter_FlyingBroom*)res;
}
