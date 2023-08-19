#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class UBillboardComponent;
class AActor;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_OL_BroomActivity_Marker_M_C : public ABP_Marker_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x308
    UChildActorComponent* BeaconLocation; // 0x310
    UBillboardComponent* Billboard; // 0x318
    FString VFXMarkerName; // 0x320
    FString Name; // 0x330
    static ABP_OL_BroomActivity_Marker_M_C* StaticClass();
    void UserConstructionScript(AActor* CallFunc_GetParentActor_ReturnValue, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, FString CallFunc_Conv_ObjectToString_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_Contains_ReturnValue_4, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue, FColor K2Node_MakeStruct_Color, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_InitMarker_Valid, bool CallFunc_NotEqual_StrStr_ReturnValue);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_OL_BroomActivity_Marker_M(int32_t EntryPoint);
}; // Size: 0x340
#pragma pack(pop)
