#include "FVector.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_StrafeUpperBody.hpp"
UAblBlendSpaceParameterGetter_StrafeUpperBody* UAblBlendSpaceParameterGetter_StrafeUpperBody::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_StrafeUpperBody");
    return (UAblBlendSpaceParameterGetter_StrafeUpperBody*)res;
}
