#include "AAIController.hpp"
#include "ACreature_Character.hpp"
#include "AMountedAI_Controller.hpp"
#include "ANPC_Character.hpp"
#include "ANPC_Spline.hpp"
#include "APathNode.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UCreature_MountComponent.hpp"
#include "UCreature_PathFollowingComponent.hpp"
#include "UFunction.hpp"
#include "UIcarus3DMovementComponent.hpp"
AMountedAI_Controller* AMountedAI_Controller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MountedAI_Controller");
    return (AMountedAI_Controller*)res;
}
void AMountedAI_Controller::StartMovingToPathNode(APathNode* InPathNode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountedAI_Controller.StartMovingToPathNode"));
    struct Params_StartMovingToPathNode {
        APathNode* InPathNode; // 0x0
    }; // Size: 0x8
    Params_StartMovingToPathNode params{};
    params.InPathNode = (APathNode*)InPathNode;
    ProcessEvent(func, &params);
}
void AMountedAI_Controller::StartMoving() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountedAI_Controller.StartMoving"));
    struct Params_StartMoving {
    }; // Size: 0x0
    Params_StartMoving params{};
    ProcessEvent(func, &params);
}
