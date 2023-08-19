#pragma once
#include <cstdint>
#include "ABP_Station_Propless2p_C.hpp"
class UStationArchitectComponent;
#pragma pack(push, 1)
class ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C : public ABP_Station_Propless2p_C {
public:
    UStationArchitectComponent* StationArchitect; // 0x438
    TArray<FString> ParentPropArray; // 0x440
    static ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C* StaticClass();
}; // Size: 0x450
#pragma pack(pop)
