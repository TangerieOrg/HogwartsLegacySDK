#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_AimWand.hpp"
UAblBlendSpaceParameterGetter_AimWand* UAblBlendSpaceParameterGetter_AimWand::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_AimWand");
    return (UAblBlendSpaceParameterGetter_AimWand*)res;
}
