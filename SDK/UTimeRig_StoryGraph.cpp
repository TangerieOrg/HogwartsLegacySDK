#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimeRig_StoryGraph.hpp"
#include "UTimeRig_StoryGraphEdge.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
UTimeRig_StoryGraph* UTimeRig_StoryGraph::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRig_StoryGraph");
    return (UTimeRig_StoryGraph*)res;
}
void UTimeRig_StoryGraph::Print(bool ToConsole, bool ToScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRig_StoryGraph.Print"));
    struct Params_Print {
        bool ToConsole; // 0x0
        bool ToScreen; // 0x1
    }; // Size: 0x2
    Params_Print params{};
    params.ToConsole = (bool)ToConsole;
    params.ToScreen = (bool)ToScreen;
    ProcessEvent(func, &params);
}
void UTimeRig_StoryGraph::GetNodesByLevel(int32_t Level, TArray<UTimeRig_StoryGraphNode*>& Nodes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRig_StoryGraph.GetNodesByLevel"));
    struct Params_GetNodesByLevel {
        int32_t Level; // 0x0
        char pad_4[0x4];
        TArray<UTimeRig_StoryGraphNode*> Nodes; // 0x8
    }; // Size: 0x18
    Params_GetNodesByLevel params{};
    params.Level = (int32_t)Level;
    params.Nodes = (TArray<UTimeRig_StoryGraphNode*>)Nodes;
    ProcessEvent(func, &params);
    Nodes = params.Nodes;
}
int32_t UTimeRig_StoryGraph::GetLevelNum() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRig_StoryGraph.GetLevelNum"));
    struct Params_GetLevelNum {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLevelNum params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
