#pragma once
#include <cstdint>
#include "ARacePlatform.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class UStaticMeshComponent;
class USceneComponent;
class ABP_Broom_Race_Marker_C;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_BroomRace_ActivityPad_C : public ARacePlatform {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
    UChildActorComponent* BP_HM_OutsideLantern; // 0x2e8
    UChildActorComponent* BP_HM_Lantern_OL_C_NoMount; // 0x2f0
    UStaticMeshComponent* SM_HW_MC_Nail2; // 0x2f8
    UStaticMeshComponent* GC_HW_PaperStack_Small_B_Piece_09; // 0x300
    UStaticMeshComponent* SM_HW_MC_Nail1; // 0x308
    UStaticMeshComponent* SM_HW_MC_Nail; // 0x310
    UChildActorComponent* BP_Broom_Race_Marker; // 0x318
    USceneComponent* Scene; // 0x320
    UStaticMeshComponent* StaticMeshComponent0; // 0x328
    UStaticMeshComponent* StaticMeshComponent15; // 0x330
    UStaticMeshComponent* StaticMeshComponent1; // 0x338
    static ABP_BroomRace_ActivityPad_C* StaticClass();
    FName GetUniqueBeaconId(ABP_Broom_Race_Marker_C* K2Node_DynamicCast_AsBP_Broom_Race_Marker, bool K2Node_DynamicCast_bSuccess, FName CallFunc_Conv_StringToName_ReturnValue);
    void OnPlatformUnlocked0();
    void ExecuteUbergraph_BP_BroomRace_ActivityPad(int32_t EntryPoint, ABP_Broom_Race_Marker_C* K2Node_DynamicCast_AsBP_Broom_Race_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue);
}; // Size: 0x340
#pragma pack(pop)
