#include "UFunction.hpp"
#include "USceneActionState_WaitForPlayer.hpp"
#include "USceneRigObjectActionState.hpp"
#include "UScheduledEntity.hpp"
USceneActionState_WaitForPlayer* USceneActionState_WaitForPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WaitForPlayer");
    return (USceneActionState_WaitForPlayer*)res;
}
void USceneActionState_WaitForPlayer::OnPerformTaskComplete(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_WaitForPlayer.OnPerformTaskComplete"));
    struct Params_OnPerformTaskComplete {
        UScheduledEntity* InScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_OnPerformTaskComplete params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
