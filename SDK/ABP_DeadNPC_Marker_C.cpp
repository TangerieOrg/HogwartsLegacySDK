#include "AActor.hpp"
#include "ABP_DeadNPC_Marker_C.hpp"
#include "ABP_DeadNPC_Spawner_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_DeadNPC_Marker_C* ABP_DeadNPC_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_DeadNPC_Marker.BP_DeadNPC_Marker_C");
    return (ABP_DeadNPC_Marker_C*)res;
}
void ABP_DeadNPC_Marker_C::UserConstructionScript(FString Infiltrator_Coin_Location_Glade, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, AActor* CallFunc_GetParentActor_ReturnValue, ABP_DeadNPC_Spawner_C* K2Node_DynamicCast_AsBP_Dead_NPC_Spawner, bool K2Node_DynamicCast_bSuccess, FColor K2Node_MakeStruct_Color, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_InitMarker_Valid, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_DeadNPC_Marker.BP_DeadNPC_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FString Infiltrator_Coin_Location_Glade; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x10
        bool CallFunc_Contains_ReturnValue; // 0x1c
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0x1d
        bool CallFunc_Contains_ReturnValue_1; // 0x1e
        bool CallFunc_Contains_ReturnValue_2; // 0x1f
        bool CallFunc_Contains_ReturnValue_3; // 0x20
        bool CallFunc_Contains_ReturnValue_4; // 0x21
        bool CallFunc_Contains_ReturnValue_5; // 0x22
        char pad_23[0x5];
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x28
        ABP_DeadNPC_Spawner_C* K2Node_DynamicCast_AsBP_Dead_NPC_Spawner; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x3];
        FColor K2Node_MakeStruct_Color; // 0x3c
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x40
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x50
        bool CallFunc_InitMarker_Valid; // 0x5c
        char pad_5d[0x3];
        float CallFunc_BreakRotator_Roll; // 0x60
        float CallFunc_BreakRotator_Pitch; // 0x64
        float CallFunc_BreakRotator_Yaw; // 0x68
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x6c
    }; // Size: 0x78
    Params_UserConstructionScript params{};
    params.Infiltrator_Coin_Location_Glade = (FString)Infiltrator_Coin_Location_Glade;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_Contains_ReturnValue_5 = (bool)CallFunc_Contains_ReturnValue_5;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Dead_NPC_Spawner = (ABP_DeadNPC_Spawner_C*)K2Node_DynamicCast_AsBP_Dead_NPC_Spawner;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    ProcessEvent(func, &params);
}
