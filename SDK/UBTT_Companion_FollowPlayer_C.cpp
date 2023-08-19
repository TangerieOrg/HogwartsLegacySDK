#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FCompanionFollowParams.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_Companion_FollowPlayer_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
#include "UNPC_PathFollowingComponent.hpp"
UBTT_Companion_FollowPlayer_C* UBTT_Companion_FollowPlayer_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C");
    return (UBTT_Companion_FollowPlayer_C*)res;
}
void UBTT_Companion_FollowPlayer_C::TimeOutEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.TimeOutEvent"));
    struct Params_TimeOutEvent {
    }; // Size: 0x0
    Params_TimeOutEvent params{};
    ProcessEvent(func, &params);
}
void UBTT_Companion_FollowPlayer_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
bool UBTT_Companion_FollowPlayer_C::ShouldRepath(FVector CallFunc_K2_GetActorLocation_ReturnValue, FCompanionFollowParams CallFunc_GetCompanionFollowParamsBP_Params, bool CallFunc_GetCompanionFollowParamsBP_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ShouldRepath"));
    struct Params_ShouldRepath {
        bool ReturnValue; // 0x0
        char pad_1[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x4
        FCompanionFollowParams CallFunc_GetCompanionFollowParamsBP_Params; // 0x10
        bool CallFunc_GetCompanionFollowParamsBP_ReturnValue; // 0x30
        char pad_31[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x34
        float CallFunc_Vector_Distance_ReturnValue; // 0x40
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x44
        float CallFunc_Vector_Distance_ReturnValue_1; // 0x48
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x4c
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x4d
        bool CallFunc_BooleanAND_ReturnValue; // 0x4e
    }; // Size: 0x4f
    Params_ShouldRepath params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetCompanionFollowParamsBP_Params = (FCompanionFollowParams)CallFunc_GetCompanionFollowParamsBP_Params;
    params.CallFunc_GetCompanionFollowParamsBP_ReturnValue = (bool)CallFunc_GetCompanionFollowParamsBP_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Vector_Distance_ReturnValue = (float)CallFunc_Vector_Distance_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Vector_Distance_ReturnValue_1 = (float)CallFunc_Vector_Distance_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTT_Companion_FollowPlayer_C::ExecuteUbergraph_BTT_Companion_FollowPlayer(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, bool CallFunc_GetMoveToDone_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue) {}
void UBTT_Companion_FollowPlayer_C::Repath() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.Repath"));
    struct Params_Repath {
    }; // Size: 0x0
    Params_Repath params{};
    ProcessEvent(func, &params);
}
void UBTT_Companion_FollowPlayer_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Companion_FollowPlayer_C::ChoseSpeed(bool CallFunc_IsValid_ReturnValue, FVector CallFunc_FindLinkOnCurrentPath_OutPos, bool CallFunc_FindLinkOnCurrentPath_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_Companion_FollowPlayer.BTT_Companion_FollowPlayer_C.ChoseSpeed"));
    struct Params_ChoseSpeed {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        char pad_1[0x3];
        FVector CallFunc_FindLinkOnCurrentPath_OutPos; // 0x4
        bool CallFunc_FindLinkOnCurrentPath_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue_1; // 0x11
    }; // Size: 0x12
    Params_ChoseSpeed params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_FindLinkOnCurrentPath_OutPos = (FVector)CallFunc_FindLinkOnCurrentPath_OutPos;
    params.CallFunc_FindLinkOnCurrentPath_ReturnValue = (bool)CallFunc_FindLinkOnCurrentPath_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
