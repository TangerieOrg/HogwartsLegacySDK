#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class AActor;
class ABP_DeadNPC_Spawner_C;
#pragma pack(push, 1)
class ABP_DeadNPC_Marker_C : public ABP_Marker_Base_C {
public:
    UChildActorComponent* BeaconLocation; // 0x308
    static ABP_DeadNPC_Marker_C* StaticClass();
    void UserConstructionScript(FString Infiltrator_Coin_Location_Glade, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, AActor* CallFunc_GetParentActor_ReturnValue, ABP_DeadNPC_Spawner_C* K2Node_DynamicCast_AsBP_Dead_NPC_Spawner, bool K2Node_DynamicCast_bSuccess, FColor K2Node_MakeStruct_Color, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_InitMarker_Valid, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}; // Size: 0x310
#pragma pack(pop)
