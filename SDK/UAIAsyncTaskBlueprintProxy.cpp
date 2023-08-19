#include "EPathFollowingResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "UAIAsyncTaskBlueprintProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAIAsyncTaskBlueprintProxy* UAIAsyncTaskBlueprintProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIAsyncTaskBlueprintProxy");
    return (UAIAsyncTaskBlueprintProxy*)res;
}
void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type MovementResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted"));
    struct Params_OnMoveCompleted {
        FAIRequestID RequestID; // 0x0
        EPathFollowingResult::Type MovementResult; // 0x4
    }; // Size: 0x5
    Params_OnMoveCompleted params{};
    params.RequestID = (FAIRequestID)RequestID;
    params.MovementResult = (EPathFollowingResult::Type)MovementResult;
    ProcessEvent(func, &params);
}
