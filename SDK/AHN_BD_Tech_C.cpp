#include "AActor.hpp"
#include "ABP_Hamlets_RichPaperGeneral_C.hpp"
#include "ABiped_Character.hpp"
#include "AHN_BD_Tech_C.hpp"
#include "ALevelScriptActor.hpp"
#include "AmbientChatterTopicIDs.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USocialReactor.hpp"
AHN_BD_Tech_C* AHN_BD_Tech_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BD_Tech.HN_BD_Tech_C");
    return (AHN_BD_Tech_C*)res;
}
void AHN_BD_Tech_C::BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BD_Tech.HN_BD_Tech_C.BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHN_BD_Tech_C::BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BD_Tech.HN_BD_Tech_C.BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__HN_BD_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHN_BD_Tech_C::ExecuteUbergraph_HN_BD_Tech(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, AmbientChatterTopicIDs Temp_byte_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, AmbientChatterTopicIDs Temp_byte_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, USocialReactor* CallFunc_GetTheSocialReactor_ReturnValue, USocialReactor* CallFunc_GetTheSocialReactor_ReturnValue_1, AmbientChatterTopicIDs Temp_byte_Variable_2, AActor* K2Node_ActorBoundEvent_OverlappedActor_1, AActor* K2Node_ActorBoundEvent_OtherActor_1, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_ActorBoundEvent_OverlappedActor, AActor* K2Node_ActorBoundEvent_OtherActor, ABiped_Character* K2Node_DynamicCast_AsBiped_Character_1, bool K2Node_DynamicCast_bSuccess_1, AmbientChatterTopicIDs CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, AmbientChatterTopicIDs CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, FName CallFunc_GetLockName_ReturnValue, bool CallFunc_IsLockedPure_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, FName CallFunc_GetLockName_ReturnValue_1, bool CallFunc_IsLockedPure_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_GetMissionStepCompletedBP_ReturnValue, TArray<ABP_Hamlets_RichPaperGeneral_C*>& K2Node_MakeArray_Array, ABP_Hamlets_RichPaperGeneral_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BD_Tech.HN_BD_Tech_C.ExecuteUbergraph_HN_BD_Tech"));
    struct Params_ExecuteUbergraph_HN_BD_Tech {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        bool Temp_bool_Has_Been_Initd_Variable; // 0x8
        AmbientChatterTopicIDs Temp_byte_Variable; // 0x9
        bool Temp_bool_IsClosed_Variable; // 0xa
        bool Temp_bool_Has_Been_Initd_Variable_1; // 0xb
        bool Temp_bool_IsClosed_Variable_1; // 0xc
        char pad_d[0x3];
        int32_t Temp_int_Array_Index_Variable_1; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        int32_t Temp_int_Array_Index_Variable_2; // 0x1c
        AmbientChatterTopicIDs Temp_byte_Variable_1; // 0x20
        bool Temp_bool_IsClosed_Variable_2; // 0x21
        bool Temp_bool_Has_Been_Initd_Variable_2; // 0x22
        char pad_23[0x1];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x28
        char pad_2c[0x4];
        USocialReactor* CallFunc_GetTheSocialReactor_ReturnValue; // 0x30
        USocialReactor* CallFunc_GetTheSocialReactor_ReturnValue_1; // 0x38
        AmbientChatterTopicIDs Temp_byte_Variable_2; // 0x40
        char pad_41[0x7];
        AActor* K2Node_ActorBoundEvent_OverlappedActor_1; // 0x48
        AActor* K2Node_ActorBoundEvent_OtherActor_1; // 0x50
        ABiped_Character* K2Node_DynamicCast_AsBiped_Character; // 0x58
        bool K2Node_DynamicCast_bSuccess; // 0x60
        char pad_61[0x7];
        AActor* K2Node_ActorBoundEvent_OverlappedActor; // 0x68
        AActor* K2Node_ActorBoundEvent_OtherActor; // 0x70
        ABiped_Character* K2Node_DynamicCast_AsBiped_Character_1; // 0x78
        bool K2Node_DynamicCast_bSuccess_1; // 0x80
        AmbientChatterTopicIDs CallFunc_Array_Get_Item; // 0x81
        char pad_82[0x2];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x84
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue; // 0x98
        AmbientChatterTopicIDs CallFunc_Array_Get_Item_1; // 0x99
        bool CallFunc_Array_RemoveItem_ReturnValue; // 0x9a
        char pad_9b[0x5];
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0xa0
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xb0
        FName CallFunc_GetLockName_ReturnValue; // 0xb4
        bool CallFunc_IsLockedPure_ReturnValue; // 0xbc
        char pad_bd[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0xc0
        bool CallFunc_Array_RemoveItem_ReturnValue_1; // 0xc4
        char pad_c5[0x3];
        int32_t Temp_int_Loop_Counter_Variable_2; // 0xc8
        FName CallFunc_GetLockName_ReturnValue_1; // 0xcc
        bool CallFunc_IsLockedPure_ReturnValue_1; // 0xd4
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xd5
        char pad_d6[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0xd8
        bool CallFunc_GetMissionStepCompletedBP_ReturnValue; // 0xdc
        char pad_dd[0x3];
        TArray<ABP_Hamlets_RichPaperGeneral_C*> K2Node_MakeArray_Array; // 0xe0
        ABP_Hamlets_RichPaperGeneral_C* CallFunc_Array_Get_Item_2; // 0xf0
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0xf8
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0xfc
        char pad_fd[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x100
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x10c
        FHitResult CallFunc_K2_SetActorLocation_SweepHitResult; // 0x118
        bool CallFunc_K2_SetActorLocation_ReturnValue; // 0x1a0
    }; // Size: 0x1a1
    Params_ExecuteUbergraph_HN_BD_Tech params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
    params.Temp_byte_Variable = (AmbientChatterTopicIDs)Temp_byte_Variable;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.Temp_bool_Has_Been_Initd_Variable_1 = (bool)Temp_bool_Has_Been_Initd_Variable_1;
    params.Temp_bool_IsClosed_Variable_1 = (bool)Temp_bool_IsClosed_Variable_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_byte_Variable_1 = (AmbientChatterTopicIDs)Temp_byte_Variable_1;
    params.Temp_bool_IsClosed_Variable_2 = (bool)Temp_bool_IsClosed_Variable_2;
    params.Temp_bool_Has_Been_Initd_Variable_2 = (bool)Temp_bool_Has_Been_Initd_Variable_2;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetTheSocialReactor_ReturnValue = (USocialReactor*)CallFunc_GetTheSocialReactor_ReturnValue;
    params.CallFunc_GetTheSocialReactor_ReturnValue_1 = (USocialReactor*)CallFunc_GetTheSocialReactor_ReturnValue_1;
    params.Temp_byte_Variable_2 = (AmbientChatterTopicIDs)Temp_byte_Variable_2;
    params.K2Node_ActorBoundEvent_OverlappedActor_1 = (AActor*)K2Node_ActorBoundEvent_OverlappedActor_1;
    params.K2Node_ActorBoundEvent_OtherActor_1 = (AActor*)K2Node_ActorBoundEvent_OtherActor_1;
    params.K2Node_DynamicCast_AsBiped_Character = (ABiped_Character*)K2Node_DynamicCast_AsBiped_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_ActorBoundEvent_OverlappedActor = (AActor*)K2Node_ActorBoundEvent_OverlappedActor;
    params.K2Node_ActorBoundEvent_OtherActor = (AActor*)K2Node_ActorBoundEvent_OtherActor;
    params.K2Node_DynamicCast_AsBiped_Character_1 = (ABiped_Character*)K2Node_DynamicCast_AsBiped_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Array_Get_Item = (AmbientChatterTopicIDs)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (AmbientChatterTopicIDs)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_RemoveItem_ReturnValue = (bool)CallFunc_Array_RemoveItem_ReturnValue;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_GetLockName_ReturnValue = (FName)CallFunc_GetLockName_ReturnValue;
    params.CallFunc_IsLockedPure_ReturnValue = (bool)CallFunc_IsLockedPure_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_RemoveItem_ReturnValue_1 = (bool)CallFunc_Array_RemoveItem_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_GetLockName_ReturnValue_1 = (FName)CallFunc_GetLockName_ReturnValue_1;
    params.CallFunc_IsLockedPure_ReturnValue_1 = (bool)CallFunc_IsLockedPure_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_GetMissionStepCompletedBP_ReturnValue = (bool)CallFunc_GetMissionStepCompletedBP_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<ABP_Hamlets_RichPaperGeneral_C*>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Get_Item_2 = (ABP_Hamlets_RichPaperGeneral_C*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_K2_SetActorLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetActorLocation_SweepHitResult;
    params.CallFunc_K2_SetActorLocation_ReturnValue = (bool)CallFunc_K2_SetActorLocation_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
