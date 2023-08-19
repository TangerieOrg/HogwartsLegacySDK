#pragma once
#include <cstdint>
#include "ATransfigurationStructureBase.hpp"
class UStaticMeshComponent;
class UTransformationFxInfoComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Sanc_FloorHub_Potnr_C : public ATransfigurationStructureBase {
public:
    UStaticMeshComponent* SM_Sanc_FloorMain_Potnr_01A; // 0x2a8
    UTransformationFxInfoComponent* TransformationFxInfo; // 0x2b0
    UStaticMeshComponent* SM_Sanc_Alcove_01_Dwiz1; // 0x2b8
    USceneComponent* DefaultSceneRoot2; // 0x2c0
    USceneComponent* DefaultSceneRoot; // 0x2c8
    static ABP_Sanc_FloorHub_Potnr_C* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
