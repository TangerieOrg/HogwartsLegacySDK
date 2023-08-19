#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Rotation.hpp"
UAblBlendSpaceParameterGetter_Rotation* UAblBlendSpaceParameterGetter_Rotation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Rotation");
    return (UAblBlendSpaceParameterGetter_Rotation*)res;
}
