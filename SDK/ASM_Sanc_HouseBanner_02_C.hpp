#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UConjurationSnappingWallComponent;
class UStaticMeshComponent;
class UConjurationSurfaceShapeComponent;
class USceneComponent;
#pragma pack(push, 1)
class ASM_Sanc_HouseBanner_02_C : public ATransfigurationObjectBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x2b0
    UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x2b8
    UStaticMeshComponent* SM_Sanc_HouseBanner_02; // 0x2c0
    USceneComponent* DefaultSceneRoot; // 0x2c8
    static ASM_Sanc_HouseBanner_02_C* StaticClass();
    void ObjectConjured();
    void ObjectTransformationCancelled();
    void ObjectTransformationConfirmed();
    void ObjectVanished();
    void ExecuteUbergraph_SM_Sanc_HouseBanner_02(int32_t EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
}; // Size: 0x2d0
#pragma pack(pop)
