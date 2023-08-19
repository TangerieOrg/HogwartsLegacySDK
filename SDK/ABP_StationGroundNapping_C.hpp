#pragma once
#include <cstdint>
#include "ABP_Station_Propless1p_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class USkeletalMeshComponent;
class UStationArchitectComponent;
#pragma pack(push, 1)
class ABP_StationGroundNapping_C : public ABP_Station_Propless1p_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x410
    USceneComponent* Audio_location; // 0x418
    UStationArchitectComponent* StationArchitect; // 0x420
    USkeletalMeshComponent* SkelMesh_0; // 0x428
    static ABP_StationGroundNapping_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_StationGroundNapping(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason);
}; // Size: 0x430
#pragma pack(pop)
