#include "FPostProcessSettings.hpp"
#include "FPostProcessingFXCurveSet.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_PostProcessingDefinition.hpp"
UMultiFX2_PostProcessingDefinition* UMultiFX2_PostProcessingDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_PostProcessingDefinition");
    return (UMultiFX2_PostProcessingDefinition*)res;
}
bool UMultiFX2_PostProcessingDefinition::HasCurves() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2_PostProcessingDefinition.HasCurves"));
    struct Params_HasCurves {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasCurves params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMultiFX2_PostProcessingDefinition::LongestCurve(bool bKillOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2_PostProcessingDefinition.LongestCurve"));
    struct Params_LongestCurve {
        bool bKillOnly; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_LongestCurve params{};
    params.bKillOnly = (bool)bKillOnly;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMultiFX2_PostProcessingDefinition::CurvesCanKill() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2_PostProcessingDefinition.CurvesCanKill"));
    struct Params_CurvesCanKill {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CurvesCanKill params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
