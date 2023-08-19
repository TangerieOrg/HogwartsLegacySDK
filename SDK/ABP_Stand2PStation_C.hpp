#pragma once
#include <cstdint>
#include "ABP_Station_Propless2p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStationArchitectComponent;
#pragma pack(push, 1)
class ABP_Stand2PStation_C : public ABP_Station_Propless2p_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x438
    UStationArchitectComponent* StationArchitect; // 0x440
    static ABP_Stand2PStation_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Stand2PStation(int32_t EntryPoint);
}; // Size: 0x448
#pragma pack(pop)
