#include "ABP_FlyingBroomProp_C.hpp"
#include "ABiped_Player.hpp"
#include "AFlyingBroom.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Apperate_Colors.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UTimelineComponent.hpp"
ABP_FlyingBroomProp_C* ABP_FlyingBroomProp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C");
    return (ABP_FlyingBroomProp_C*)res;
}
void ABP_FlyingBroomProp_C::DismountTimeline__StartFadeOut__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountTimeline__StartFadeOut__EventFunc"));
    struct Params_DismountTimeline__StartFadeOut__EventFunc {
    }; // Size: 0x0
    Params_DismountTimeline__StartFadeOut__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::ExecuteUbergraph_BP_FlyingBroomProp(int32_t EntryPoint, FVector CallFunc_VLerp_ReturnValue, FObjectFadeParamsSpeedDuration K2Node_MakeStruct_ObjectFadeParamsSpeedDuration, ABiped_Player* K2Node_Event_Player, bool K2Node_Event_Instant, FTransform CallFunc_GetTransform_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_TLerp_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_ActorStartFade_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.ExecuteUbergraph_BP_FlyingBroomProp"));
    struct Params_ExecuteUbergraph_BP_FlyingBroomProp {
        int32_t EntryPoint; // 0x0
        FVector CallFunc_VLerp_ReturnValue; // 0x4
        FObjectFadeParamsSpeedDuration K2Node_MakeStruct_ObjectFadeParamsSpeedDuration; // 0x10
        char pad_1c[0x4];
        ABiped_Player* K2Node_Event_Player; // 0x20
        bool K2Node_Event_Instant; // 0x28
        char pad_29[0x7];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x30
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x60
        char pad_e8[0x8];
        FTransform CallFunc_GetSocketTransform_ReturnValue; // 0xf0
        FTransform CallFunc_TLerp_ReturnValue; // 0x120
        FHitResult CallFunc_K2_SetActorTransform_SweepHitResult; // 0x150
        bool CallFunc_K2_SetActorTransform_ReturnValue; // 0x1d8
        bool CallFunc_ActorStartFade_ReturnValue; // 0x1d9
        char pad_1da[0x2];
        float K2Node_Event_DeltaSeconds; // 0x1dc
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x1e0
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x1e4
        float CallFunc_FClamp_ReturnValue; // 0x1e8
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x1ec
    }; // Size: 0x1ed
    Params_ExecuteUbergraph_BP_FlyingBroomProp params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_VLerp_ReturnValue = (FVector)CallFunc_VLerp_ReturnValue;
    params.K2Node_MakeStruct_ObjectFadeParamsSpeedDuration = (FObjectFadeParamsSpeedDuration)K2Node_MakeStruct_ObjectFadeParamsSpeedDuration;
    params.K2Node_Event_Player = (ABiped_Player*)K2Node_Event_Player;
    params.K2Node_Event_Instant = (bool)K2Node_Event_Instant;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_GetSocketTransform_ReturnValue = (FTransform)CallFunc_GetSocketTransform_ReturnValue;
    params.CallFunc_TLerp_ReturnValue = (FTransform)CallFunc_TLerp_ReturnValue;
    params.CallFunc_K2_SetActorTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetActorTransform_SweepHitResult;
    params.CallFunc_K2_SetActorTransform_ReturnValue = (bool)CallFunc_K2_SetActorTransform_ReturnValue;
    params.CallFunc_ActorStartFade_ReturnValue = (bool)CallFunc_ActorStartFade_ReturnValue;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::SetScale(float InScale, float CallFunc_FClamp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.SetScale"));
    struct Params_SetScale {
        float InScale; // 0x0
        float CallFunc_FClamp_ReturnValue; // 0x4
        FVector CallFunc_MakeVector_ReturnValue; // 0x8
    }; // Size: 0x14
    Params_SetScale params{};
    params.InScale = (float)InScale;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::DismountTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountTimeline__FinishedFunc"));
    struct Params_DismountTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_DismountTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::DismountTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountTimeline__UpdateFunc"));
    struct Params_DismountTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_DismountTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::DismountBroom0(ABiped_Player* Player, bool Instant) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountBroom"));
    struct Params_DismountBroom {
        ABiped_Player* Player; // 0x0
        bool Instant; // 0x8
    }; // Size: 0x9
    Params_DismountBroom params{};
    params.Player = (ABiped_Player*)Player;
    params.Instant = (bool)Instant;
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomProp_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomProp.BP_FlyingBroomProp_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
