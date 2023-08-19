#include "FAlphaBlend.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetParameterValue.hpp"
#include "UAblSetShaderParameterTaskScratchPad.hpp"
#include "UMaterialInstanceDynamic.hpp"
UAblSetShaderParameterTaskScratchPad* UAblSetShaderParameterTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetShaderParameterTaskScratchPad");
    return (UAblSetShaderParameterTaskScratchPad*)res;
}
