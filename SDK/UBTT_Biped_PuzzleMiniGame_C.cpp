#include "AActor.hpp"
#include "ABP_AlohomoraLock_C.hpp"
#include "ABiped_Player.hpp"
#include "ADoor.hpp"
#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "FHitBySpellData.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTT_Biped_PuzzleMiniGame_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "ULockableComponent.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
void UBTT_Biped_PuzzleMiniGame_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::CustActionEvt_Success_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.CustActionEvt_Success_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_Success_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Success_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_3"));
    struct Params_InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
UBTT_Biped_PuzzleMiniGame_C* UBTT_Biped_PuzzleMiniGame_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C");
    return (UBTT_Biped_PuzzleMiniGame_C*)res;
}
ABP_AlohomoraLock_C* UBTT_Biped_PuzzleMiniGame_C::SpawnLock(FVector LockScale, FVector PuzzleToPlayer, ABP_AlohomoraLock_C* LockPuzzle, FVector CallFunc_Conv_FloatToVector_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetActorBounds_Origin, FVector CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FName Temp_name_Variable, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_GetActorBounds_Origin_1, FVector CallFunc_GetActorBounds_BoxExtent_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, ABP_AlohomoraLock_C* CallFunc_FinishSpawningActor_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_GetActorRightVector_ReturnValue, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, ABP_AlohomoraLock_C* CallFunc_FinishSpawningActor_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.SpawnLock"));
    struct Params_SpawnLock {
        ABP_AlohomoraLock_C* ReturnValue; // 0x0
        FVector LockScale; // 0x8
        FVector PuzzleToPlayer; // 0x14
        ABP_AlohomoraLock_C* LockPuzzle; // 0x20
        FVector CallFunc_Conv_FloatToVector_ReturnValue; // 0x28
        char pad_34[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x38
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x40
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x4c
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x58
        float CallFunc_BreakVector_X; // 0x64
        float CallFunc_BreakVector_Y; // 0x68
        float CallFunc_BreakVector_Z; // 0x6c
        FVector CallFunc_MakeVector_ReturnValue; // 0x70
        FVector CallFunc_GetActorBounds_Origin; // 0x7c
        FVector CallFunc_GetActorBounds_BoxExtent; // 0x88
        float CallFunc_BreakVector_X_1; // 0x94
        float CallFunc_BreakVector_Y_1; // 0x98
        float CallFunc_BreakVector_Z_1; // 0x9c
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1; // 0xa0
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0xa8
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0xb4
        float CallFunc_BreakRotator_Roll; // 0xc0
        float CallFunc_BreakRotator_Pitch; // 0xc4
        float CallFunc_BreakRotator_Yaw; // 0xc8
        float CallFunc_BreakVector_X_2; // 0xcc
        float CallFunc_BreakVector_Y_2; // 0xd0
        float CallFunc_BreakVector_Z_2; // 0xd4
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xd8
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0xdc
        FRotator CallFunc_MakeRotator_ReturnValue; // 0xe0
        FVector CallFunc_MakeVector_ReturnValue_1; // 0xec
        FName Temp_name_Variable; // 0xf8
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x100
        bool CallFunc_Array_Contains_ReturnValue; // 0x10c
        char pad_10d[0x3];
        float CallFunc_Dot_VectorVector_ReturnValue; // 0x110
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x114
        char pad_115[0x3];
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x118
        float CallFunc_SelectFloat_ReturnValue; // 0x124
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x128
        char pad_134[0x4];
        ADoor* K2Node_DynamicCast_AsDoor; // 0x138
        bool K2Node_DynamicCast_bSuccess; // 0x140
        char pad_141[0x3];
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x144
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x150
        FVector CallFunc_GetActorBounds_Origin_1; // 0x180
        FVector CallFunc_GetActorBounds_BoxExtent_1; // 0x18c
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x198
        float CallFunc_BreakVector_X_3; // 0x1a0
        float CallFunc_BreakVector_Y_3; // 0x1a4
        float CallFunc_BreakVector_Z_3; // 0x1a8
        char pad_1ac[0x4];
        ABP_AlohomoraLock_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x1b0
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_1; // 0x1b8
        char pad_1c4[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2; // 0x1c8
        FVector CallFunc_K2_GetActorLocation_ReturnValue_3; // 0x1d0
        FVector CallFunc_GetActorRightVector_ReturnValue; // 0x1dc
        float CallFunc_BreakVector_X_4; // 0x1e8
        float CallFunc_BreakVector_Y_4; // 0x1ec
        float CallFunc_BreakVector_Z_4; // 0x1f0
        float CallFunc_Dot_VectorVector_ReturnValue_1; // 0x1f4
        float CallFunc_Add_FloatFloat_ReturnValue_2; // 0x1f8
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x1fc
        char pad_1fd[0x3];
        FVector CallFunc_MakeVector_ReturnValue_2; // 0x200
        float CallFunc_SelectFloat_ReturnValue_1; // 0x20c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_2; // 0x210
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_3; // 0x21c
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x228
        char pad_234[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue_1; // 0x240
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x270
        ABP_AlohomoraLock_C* CallFunc_FinishSpawningActor_ReturnValue_1; // 0x278
    }; // Size: 0x280
    Params_SpawnLock params{};
    params.LockScale = (FVector)LockScale;
    params.PuzzleToPlayer = (FVector)PuzzleToPlayer;
    params.LockPuzzle = (ABP_AlohomoraLock_C*)LockPuzzle;
    params.CallFunc_Conv_FloatToVector_ReturnValue = (FVector)CallFunc_Conv_FloatToVector_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_GetActorBounds_Origin = (FVector)CallFunc_GetActorBounds_Origin;
    params.CallFunc_GetActorBounds_BoxExtent = (FVector)CallFunc_GetActorBounds_BoxExtent;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_1 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_1;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_BreakVector_X_2 = (float)CallFunc_BreakVector_X_2;
    params.CallFunc_BreakVector_Y_2 = (float)CallFunc_BreakVector_Y_2;
    params.CallFunc_BreakVector_Z_2 = (float)CallFunc_BreakVector_Z_2;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue = (float)CallFunc_Dot_VectorVector_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.K2Node_DynamicCast_AsDoor = (ADoor*)K2Node_DynamicCast_AsDoor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_GetActorBounds_Origin_1 = (FVector)CallFunc_GetActorBounds_Origin_1;
    params.CallFunc_GetActorBounds_BoxExtent_1 = (FVector)CallFunc_GetActorBounds_BoxExtent_1;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_BreakVector_X_3 = (float)CallFunc_BreakVector_X_3;
    params.CallFunc_BreakVector_Y_3 = (float)CallFunc_BreakVector_Y_3;
    params.CallFunc_BreakVector_Z_3 = (float)CallFunc_BreakVector_Z_3;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_AlohomoraLock_C*)CallFunc_FinishSpawningActor_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue_1 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_2 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue_3 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_3;
    params.CallFunc_GetActorRightVector_ReturnValue = (FVector)CallFunc_GetActorRightVector_ReturnValue;
    params.CallFunc_BreakVector_X_4 = (float)CallFunc_BreakVector_X_4;
    params.CallFunc_BreakVector_Y_4 = (float)CallFunc_BreakVector_Y_4;
    params.CallFunc_BreakVector_Z_4 = (float)CallFunc_BreakVector_Z_4;
    params.CallFunc_Dot_VectorVector_ReturnValue_1 = (float)CallFunc_Dot_VectorVector_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_2 = (float)CallFunc_Add_FloatFloat_ReturnValue_2;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_2 = (FVector)CallFunc_MakeVector_ReturnValue_2;
    params.CallFunc_SelectFloat_ReturnValue_1 = (float)CallFunc_SelectFloat_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_2 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_2;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_3 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_3;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_MakeTransform_ReturnValue_1 = (FTransform)CallFunc_MakeTransform_ReturnValue_1;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
    params.CallFunc_FinishSpawningActor_ReturnValue_1 = (ABP_AlohomoraLock_C*)CallFunc_FinishSpawningActor_ReturnValue_1;
    ProcessEvent(func, &params);
    return (ABP_AlohomoraLock_C*)params.ReturnValue;
}
void UBTT_Biped_PuzzleMiniGame_C::HideHudElements(bool Hide, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, AHUD* CallFunc_GetHUD_ReturnValue_1) {}
void UBTT_Biped_PuzzleMiniGame_C::GetTargetDirection(FVector& Direction, FVector StationRight, FVector PlayerForward, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ULockableComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UMeshComponent* CallFunc_GetLockMeshComponent_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, ULockableComponent* CallFunc_GetComponentByClass_ReturnValue_1, UMeshComponent* CallFunc_GetLockMeshComponent_ReturnValue_1, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_GetActorBounds_Origin, FVector CallFunc_GetActorBounds_BoxExtent, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Normal_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_2, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.GetTargetDirection"));
    struct Params_GetTargetDirection {
        FVector Direction; // 0x0
        FVector StationRight; // 0xc
        FVector PlayerForward; // 0x18
        char pad_24[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x28
        ULockableComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x30
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x38
        char pad_44[0x4];
        UMeshComponent* CallFunc_GetLockMeshComponent_ReturnValue; // 0x48
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1; // 0x50
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x58
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x64
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x70
        FVector CallFunc_Normal_ReturnValue; // 0x7c
        ULockableComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x88
        UMeshComponent* CallFunc_GetLockMeshComponent_ReturnValue_1; // 0x90
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x98
        bool CallFunc_IsValid_ReturnValue; // 0xa4
        char pad_a5[0x3];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2; // 0xa8
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0xb0
        FVector CallFunc_GetActorBounds_Origin; // 0xbc
        FVector CallFunc_GetActorBounds_BoxExtent; // 0xc8
        FVector CallFunc_Subtract_VectorVector_ReturnValue_1; // 0xd4
        ADoor* K2Node_DynamicCast_AsDoor; // 0xe0
        bool K2Node_DynamicCast_bSuccess; // 0xe8
        char pad_e9[0x3];
        FVector CallFunc_Normal_ReturnValue_1; // 0xec
        FVector CallFunc_K2_GetActorLocation_ReturnValue_3; // 0xf8
        FVector CallFunc_Subtract_VectorVector_ReturnValue_2; // 0x104
        FVector CallFunc_GetActorRightVector_ReturnValue; // 0x110
        FVector CallFunc_Normal_ReturnValue_2; // 0x11c
        float CallFunc_Dot_VectorVector_ReturnValue; // 0x128
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x12c
        char pad_12d[0x3];
        float CallFunc_SelectFloat_ReturnValue; // 0x130
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x134
    }; // Size: 0x140
    Params_GetTargetDirection params{};
    params.Direction = (FVector)Direction;
    params.StationRight = (FVector)StationRight;
    params.PlayerForward = (FVector)PlayerForward;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (ULockableComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetLockMeshComponent_ReturnValue = (UMeshComponent*)CallFunc_GetLockMeshComponent_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_1 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_1;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (ULockableComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_GetLockMeshComponent_ReturnValue_1 = (UMeshComponent*)CallFunc_GetLockMeshComponent_ReturnValue_1;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_2 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_GetActorBounds_Origin = (FVector)CallFunc_GetActorBounds_Origin;
    params.CallFunc_GetActorBounds_BoxExtent = (FVector)CallFunc_GetActorBounds_BoxExtent;
    params.CallFunc_Subtract_VectorVector_ReturnValue_1 = (FVector)CallFunc_Subtract_VectorVector_ReturnValue_1;
    params.K2Node_DynamicCast_AsDoor = (ADoor*)K2Node_DynamicCast_AsDoor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Normal_ReturnValue_1 = (FVector)CallFunc_Normal_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_3 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_3;
    params.CallFunc_Subtract_VectorVector_ReturnValue_2 = (FVector)CallFunc_Subtract_VectorVector_ReturnValue_2;
    params.CallFunc_GetActorRightVector_ReturnValue = (FVector)CallFunc_GetActorRightVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue_2 = (FVector)CallFunc_Normal_ReturnValue_2;
    params.CallFunc_Dot_VectorVector_ReturnValue = (float)CallFunc_Dot_VectorVector_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    ProcessEvent(func, &params);
    Direction = params.Direction;
}
void UBTT_Biped_PuzzleMiniGame_C::ExecuteUbergraph_BTT_Biped_PuzzleMiniGame(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_4, FVariantMapHandle Temp_struct_Variable, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_3, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_2, FVariantMapHandle Temp_struct_Variable_1) {}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_ParselTongue_Top_Left_K2Node_CustomInputActionEvent_17(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Top_Left_K2Node_CustomInputActionEvent_17"));
    struct Params_InpActEvt_ParselTongue_Top_Left_K2Node_CustomInputActionEvent_17 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ParselTongue_Top_Left_K2Node_CustomInputActionEvent_17 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_ParselTongue_Top_Right_K2Node_CustomInputActionEvent_16(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Top_Right_K2Node_CustomInputActionEvent_16"));
    struct Params_InpActEvt_ParselTongue_Top_Right_K2Node_CustomInputActionEvent_16 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ParselTongue_Top_Right_K2Node_CustomInputActionEvent_16 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_ParselTongue_Bottom_Left_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Bottom_Left_K2Node_CustomInputActionEvent_15"));
    struct Params_InpActEvt_ParselTongue_Bottom_Left_K2Node_CustomInputActionEvent_15 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ParselTongue_Bottom_Left_K2Node_CustomInputActionEvent_15 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_ParselTongue_Bottom_Right_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_ParselTongue_Bottom_Right_K2Node_CustomInputActionEvent_14"));
    struct Params_InpActEvt_ParselTongue_Bottom_Right_K2Node_CustomInputActionEvent_14 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ParselTongue_Bottom_Right_K2Node_CustomInputActionEvent_14 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_3"));
    struct Params_InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_1"));
    struct Params_InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_2"));
    struct Params_InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MinigameMovementAux_K2Node_CustomStickInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MinigameMovementMain_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_7"));
    struct Params_InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_13"));
    struct Params_InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_13 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_13 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_12"));
    struct Params_InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_12 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Inner_Left_K2Node_CustomInputActionEvent_12 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_11"));
    struct Params_InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_11 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_11 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_10"));
    struct Params_InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_10 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Inner_Right_K2Node_CustomInputActionEvent_10 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_9"));
    struct Params_InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_8"));
    struct Params_InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Outer_Left_K2Node_CustomInputActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_6"));
    struct Params_InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Alohomora_KB_Outer_Right_K2Node_CustomInputActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_5"));
    struct Params_InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::SetAlohomoraOrCancel() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.SetAlohomoraOrCancel"));
    struct Params_SetAlohomoraOrCancel {
    }; // Size: 0x0
    Params_SetAlohomoraOrCancel params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_4"));
    struct Params_InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MiniGame_Cancel_K2Node_CustomInputActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Minigame_SlapKey_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MiniGame_AutoSolve_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PuzzleMiniGame_C::ActorHitBySpell(UObject* Caller, FHitBySpellData& HitBySpell) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.ActorHitBySpell"));
    struct Params_ActorHitBySpell {
        UObject* Caller; // 0x0
        FHitBySpellData HitBySpell; // 0x8
    }; // Size: 0x50
    Params_ActorHitBySpell params{};
    params.Caller = (UObject*)Caller;
    params.HitBySpell = (FHitBySpellData)HitBySpell;
    ProcessEvent(func, &params);
    HitBySpell = params.HitBySpell;
}
void UBTT_Biped_PuzzleMiniGame_C::MunitionImpactDamage(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PuzzleMiniGame.BTT_Biped_PuzzleMiniGame_C.MunitionImpactDamage"));
    struct Params_MunitionImpactDamage {
        UObject* Caller; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_MunitionImpactDamage params{};
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
