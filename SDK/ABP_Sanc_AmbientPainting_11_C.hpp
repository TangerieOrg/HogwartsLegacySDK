#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class UConjurationSurfaceShapeComponent;
class UConjurationSnappingWallComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Sanc_AmbientPainting_11_C : public ATransfigurationObjectBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    UChildActorComponent* Painting; // 0x2b0
    UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x2b8
    UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x2c0
    USceneComponent* Root; // 0x2c8
    static ABP_Sanc_AmbientPainting_11_C* StaticClass();
    void ReceiveBeginPlay();
    void ObjectConjured();
    void ObjectTransformationCancelled();
    void ObjectTransformationConfirmed();
    void ObjectVanished();
    void ExecuteUbergraph_BP_Sanc_AmbientPainting_11(int32_t EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
}; // Size: 0x2d0
#pragma pack(pop)
