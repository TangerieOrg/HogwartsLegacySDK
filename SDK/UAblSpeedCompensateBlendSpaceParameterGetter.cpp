#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblSpeedCompensateBlendSpaceParameterGetter.hpp"
UAblSpeedCompensateBlendSpaceParameterGetter* UAblSpeedCompensateBlendSpaceParameterGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSpeedCompensateBlendSpaceParameterGetter");
    return (UAblSpeedCompensateBlendSpaceParameterGetter*)res;
}
