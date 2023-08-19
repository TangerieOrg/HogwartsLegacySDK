#include "UDPICustomScalingRule.hpp"
#include "UObject.hpp"
UDPICustomScalingRule* UDPICustomScalingRule::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DPICustomScalingRule");
    return (UDPICustomScalingRule*)res;
}
