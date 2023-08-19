#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "E_OL_ChestType\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
#pragma pack(push, 1)
class ABP_OL_Chest_Marker_C : public ABP_Marker_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x308
    UChildActorComponent* BeaconLocation; // 0x310
    E_OL_ChestType::Type E_OL_ChestType; // 0x318
    char pad_319[0x7];
    static ABP_OL_Chest_Marker_C* StaticClass();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_OL_Chest_Marker(int32_t EntryPoint);
}; // Size: 0x320
#pragma pack(pop)
