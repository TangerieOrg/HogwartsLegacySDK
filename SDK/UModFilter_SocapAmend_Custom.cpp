#include "EValueComparison.hpp"
#include "FSocapAmendInfo.hpp"
#include "FSocialReasoningComparison.hpp"
#include "FSocialSemanticsComparison.hpp"
#include "UFunction.hpp"
#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_Custom.hpp"
#include "UObject.hpp"
UModFilter_SocapAmend_Custom* UModFilter_SocapAmend_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_Custom");
    return (UModFilter_SocapAmend_Custom*)res;
}
bool UModFilter_SocapAmend_Custom::BlueprintPassesSocapFilter(UObject* InTargetObject, FSocapAmendInfo& SocapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ModFilter_SocapAmend_Custom.BlueprintPassesSocapFilter"));
    struct Params_BlueprintPassesSocapFilter {
        UObject* InTargetObject; // 0x0
        FSocapAmendInfo SocapInfo; // 0x8
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_BlueprintPassesSocapFilter params{};
    params.InTargetObject = (UObject*)InTargetObject;
    params.SocapInfo = (FSocapAmendInfo)SocapInfo;
    ProcessEvent(func, &params);
    SocapInfo = params.SocapInfo;
    return (bool)params.ReturnValue;
}
