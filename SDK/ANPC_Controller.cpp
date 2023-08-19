#include "ANPC_Controller.hpp"
#include "ASocialAIController.hpp"
#include "UBlackboardComponent.hpp"
#include "UCognitionComponent.hpp"
#include "UFunction.hpp"
ANPC_Controller* ANPC_Controller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Controller");
    return (ANPC_Controller*)res;
}
UBlackboardComponent* ANPC_Controller::GetBlackboard() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Controller.GetBlackboard"));
    struct Params_GetBlackboard {
        UBlackboardComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBlackboard params{};
    ProcessEvent(func, &params);
    return (UBlackboardComponent*)params.ReturnValue;
}
