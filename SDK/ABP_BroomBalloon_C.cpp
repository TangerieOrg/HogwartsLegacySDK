#include "AActor.hpp"
#include "ABP_BroomBalloon_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_BroomBalloon_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
ABP_BroomBalloon_C* ABP_BroomBalloon_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C");
    return (ABP_BroomBalloon_C*)res;
}
void ABP_BroomBalloon_C::SetMaterial(int32_t MaterialIndex, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.SetMaterial"));
    struct Params_SetMaterial {
        int32_t MaterialIndex; // 0x0
        bool K2Node_SwitchInteger_CmpSuccess; // 0x4
    }; // Size: 0x5
    Params_SetMaterial params{};
    params.MaterialIndex = (int32_t)MaterialIndex;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::UserConstructionScript0(bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool K2Node_SwitchInteger_CmpSuccess; // 0x0
    }; // Size: 0x1
    Params_UserConstructionScript params{};
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.TickThrottler_KeepAlive"));
    struct Params_TickThrottler_KeepAlive {
        float DeltaTime; // 0x0
        float DistanceSquaredToCamera; // 0x4
    }; // Size: 0x8
    Params_TickThrottler_KeepAlive params{};
    params.DeltaTime = (float)DeltaTime;
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::ReceiveActorBeginOverlap0(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.ReceiveActorBeginOverlap"));
    struct Params_ReceiveActorBeginOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorBeginOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::TickThrottler_GoToSleep(float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.TickThrottler_GoToSleep"));
    struct Params_TickThrottler_GoToSleep {
        float DistanceSquaredToCamera; // 0x0
    }; // Size: 0x4
    Params_TickThrottler_GoToSleep params{};
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::TickThrottler_WakeUp(float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.TickThrottler_WakeUp"));
    struct Params_TickThrottler_WakeUp {
        float DistanceSquaredToCamera; // 0x0
    }; // Size: 0x4
    Params_TickThrottler_WakeUp params{};
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::SetHidden(bool Hidden) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.SetHidden"));
    struct Params_SetHidden {
        bool Hidden; // 0x0
    }; // Size: 0x1
    Params_SetHidden params{};
    params.Hidden = (bool)Hidden;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BroomBalloon.BP_BroomBalloon_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_BroomBalloon_C::ExecuteUbergraph_BP_BroomBalloon(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
