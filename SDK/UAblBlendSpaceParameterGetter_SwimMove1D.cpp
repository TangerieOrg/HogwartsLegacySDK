#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_SwimMove1D.hpp"
UAblBlendSpaceParameterGetter_SwimMove1D* UAblBlendSpaceParameterGetter_SwimMove1D::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_SwimMove1D");
    return (UAblBlendSpaceParameterGetter_SwimMove1D*)res;
}
