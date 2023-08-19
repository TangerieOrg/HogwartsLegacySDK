#include "EKnowledgeAction.hpp"
#include "FKnowledgeGainInfo.hpp"
#include "FValueComparison.hpp"
#include "UFunction.hpp"
#include "UModFilter_GainKnowledge_Base.hpp"
#include "UModFilter_GainKnowledge_Custom.hpp"
#include "UObject.hpp"
UModFilter_GainKnowledge_Custom* UModFilter_GainKnowledge_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_GainKnowledge_Custom");
    return (UModFilter_GainKnowledge_Custom*)res;
}
bool UModFilter_GainKnowledge_Custom::BlueprintPassesKnowledgeGainFilter(UObject* InTargetObject, FKnowledgeGainInfo& KnowledgeGainInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ModFilter_GainKnowledge_Custom.BlueprintPassesKnowledgeGainFilter"));
    struct Params_BlueprintPassesKnowledgeGainFilter {
        UObject* InTargetObject; // 0x0
        FKnowledgeGainInfo KnowledgeGainInfo; // 0x8
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_BlueprintPassesKnowledgeGainFilter params{};
    params.InTargetObject = (UObject*)InTargetObject;
    params.KnowledgeGainInfo = (FKnowledgeGainInfo)KnowledgeGainInfo;
    ProcessEvent(func, &params);
    KnowledgeGainInfo = params.KnowledgeGainInfo;
    return (bool)params.ReturnValue;
}
