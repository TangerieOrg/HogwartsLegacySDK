#include "AActor.hpp"
#include "UFunction.hpp"
#include "USceneActionState_WaitForDeath.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_WaitForDeath* USceneActionState_WaitForDeath::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WaitForDeath");
    return (USceneActionState_WaitForDeath*)res;
}
void USceneActionState_WaitForDeath::OnActorEndPlay(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_WaitForDeath.OnActorEndPlay"));
    struct Params_OnActorEndPlay {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnActorEndPlay params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
