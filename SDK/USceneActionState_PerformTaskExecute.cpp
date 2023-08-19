#include "APerformTasksForAI.hpp"
#include "UFunction.hpp"
#include "USceneActionState_PerformTaskExecute.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_PerformTaskExecute* USceneActionState_PerformTaskExecute::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PerformTaskExecute");
    return (USceneActionState_PerformTaskExecute*)res;
}
void USceneActionState_PerformTaskExecute::OnPTComplete(APerformTasksForAI* InPTPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PerformTaskExecute.OnPTComplete"));
    struct Params_OnPTComplete {
        APerformTasksForAI* InPTPtr; // 0x0
    }; // Size: 0x8
    Params_OnPTComplete params{};
    params.InPTPtr = (APerformTasksForAI*)InPTPtr;
    ProcessEvent(func, &params);
}
