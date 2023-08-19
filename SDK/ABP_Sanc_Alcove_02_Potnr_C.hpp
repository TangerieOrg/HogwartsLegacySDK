#pragma once
#include <cstdint>
#include "ABP_Sanc_Alcove_02_Parent_C.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_Sanc_Alcove_02_Potnr_C : public ABP_Sanc_Alcove_02_Parent_C {
public:
    UStaticMeshComponent* SM_HOG_EH_StatueWitch; // 0x310
    UStaticMeshComponent* SM_Sanc_Alcove_01E_Potnr; // 0x318
    UStaticMeshComponent* SM_Sanc_Alcove_01D_Potnr; // 0x320
    UStaticMeshComponent* SM_Sanc_Alcove_01C_Potnr; // 0x328
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz; // 0x330
    UStaticMeshComponent* SM_Sanc_Alcove_01B_Potnr; // 0x338
    static ABP_Sanc_Alcove_02_Potnr_C* StaticClass();
}; // Size: 0x340
#pragma pack(pop)
