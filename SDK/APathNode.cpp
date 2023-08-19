#include "AActor.hpp"
#include "APathNode.hpp"
#include "EEnemyAIState.hpp"
#include "EPathNodeSpeed.hpp"
#include "UFunction.hpp"
APathNode* APathNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PathNode");
    return (APathNode*)res;
}
float APathNode::GetArrivalTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNode.GetArrivalTimeout"));
    struct Params_GetArrivalTimeout {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetArrivalTimeout params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void APathNode::BroadcastArrived(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNode.BroadcastArrived"));
    struct Params_BroadcastArrived {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_BroadcastArrived params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void APathNode::Arrived() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathNode.Arrived"));
    struct Params_Arrived {
    }; // Size: 0x0
    Params_Arrived params{};
    ProcessEvent(func, &params);
}
