#include "UAblAbilityTaskScratchPad.hpp"
#include "UablIKBlendTaskScratchPad.hpp"
UablIKBlendTaskScratchPad* UablIKBlendTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablIKBlendTaskScratchPad");
    return (UablIKBlendTaskScratchPad*)res;
}
