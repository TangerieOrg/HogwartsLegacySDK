#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetParameterValue.hpp"
#include "UAblSetShaderParameterTask.hpp"
UAblSetShaderParameterTask* UAblSetShaderParameterTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetShaderParameterTask");
    return (UAblSetShaderParameterTask*)res;
}
