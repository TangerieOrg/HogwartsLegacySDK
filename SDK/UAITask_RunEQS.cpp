#include "AAIController.hpp"
#include "UAITask.hpp"
#include "UAITask_RunEQS.hpp"
#include "UEnvQuery.hpp"
#include "UFunction.hpp"
UAITask_RunEQS* UAITask_RunEQS::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AITask_RunEQS");
    return (UAITask_RunEQS*)res;
}
UAITask_RunEQS* UAITask_RunEQS::RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AITask_RunEQS.RunEQS"));
    struct Params_RunEQS {
        AAIController* Controller; // 0x0
        UEnvQuery* QueryTemplate; // 0x8
        UAITask_RunEQS* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_RunEQS params{};
    params.Controller = (AAIController*)Controller;
    params.QueryTemplate = (UEnvQuery*)QueryTemplate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAITask_RunEQS*)params.ReturnValue;
}
