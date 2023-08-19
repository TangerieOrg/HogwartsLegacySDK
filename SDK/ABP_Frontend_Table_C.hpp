#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_Table_C : public AActor {
public:
    UStaticMeshComponent* SM_HW_LetterBundle_A1; // 0x248
    UStaticMeshComponent* SM_HW_LetterBundle_A; // 0x250
    UStaticMeshComponent* SM_HW_L_BookStand; // 0x258
    UStaticMeshComponent* SM_HM_Quill_Rolled_Parchment_D1; // 0x260
    UStaticMeshComponent* SM_HM_Quill_Rolled_Parchment_D; // 0x268
    UStaticMeshComponent* SM_HW_GenericTrunk_A; // 0x270
    UStaticMeshComponent* SM_HW_Laundry_Chair_E; // 0x278
    UStaticMeshComponent* SM_FrontEnd_Desk_01; // 0x280
    USceneComponent* DefaultSceneRoot; // 0x288
    static ABP_Frontend_Table_C* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
