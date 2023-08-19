#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UBillboardComponent;
class UChildActorComponent;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_BroomActivityBalloonGroup_Marker_C : public ABP_Marker_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x308
    UBillboardComponent* Billboard; // 0x310
    UChildActorComponent* BeaconLocation; // 0x318
    static ABP_BroomActivityBalloonGroup_Marker_C* StaticClass();
    void UserConstructionScript(FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_BroomActivityBalloonGroup_Marker(int32_t EntryPoint);
}; // Size: 0x320
#pragma pack(pop)
