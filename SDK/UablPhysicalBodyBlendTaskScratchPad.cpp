#include "UAblAbilityTaskScratchPad.hpp"
#include "UablPhysicalBodyBlendTaskScratchPad.hpp"
UablPhysicalBodyBlendTaskScratchPad* UablPhysicalBodyBlendTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablPhysicalBodyBlendTaskScratchPad");
    return (UablPhysicalBodyBlendTaskScratchPad*)res;
}
