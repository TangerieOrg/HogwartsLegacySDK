#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UConjurationSnappingWallComponent;
class UStaticMeshComponent;
class UConjurationSurfaceShapeComponent;
class UPhysicalResponseComponent;
class USceneComponent;
struct FVector;
#pragma pack(push, 1)
class ABP_Sanc_PaintingCanvasXtraSmall03A_C : public ATransfigurationObjectBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
    UConjurationSnappingWallComponent* ConjurationSnappingWall; // 0x2b0
    UConjurationSurfaceShapeComponent* ConjurationSurfaceShape; // 0x2b8
    UStaticMeshComponent* SM_Sanc_PaintingCanvasMedium_05; // 0x2c0
    UStaticMeshComponent* StaticMeshComponent0; // 0x2c8
    UPhysicalResponseComponent* PhysicalResponse; // 0x2d0
    USceneComponent* Scene; // 0x2d8
    static ABP_Sanc_PaintingCanvasXtraSmall03A_C* StaticClass();
    void ObjectConjured();
    void ObjectTransformationCancelled();
    void ObjectTransformationConfirmed();
    void ObjectVanished();
    void ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation);
    void ExecuteUbergraph_BP_Sanc_PaintingCanvasXtraSmall03A(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2e0
#pragma pack(pop)
