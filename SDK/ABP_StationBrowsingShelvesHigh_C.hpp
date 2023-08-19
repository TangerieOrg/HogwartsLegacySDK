#pragma once
#include <cstdint>
#include "ABP_Station_Propless1p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStationArchitectComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ABP_StationBrowsingShelvesHigh_C : public ABP_Station_Propless1p_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x410
    UStationArchitectComponent* StationArchitect; // 0x418
    USkeletalMeshComponent* SkelMesh_0; // 0x420
    static ABP_StationBrowsingShelvesHigh_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_StationBrowsingShelvesHigh(int32_t EntryPoint);
}; // Size: 0x428
#pragma pack(pop)
