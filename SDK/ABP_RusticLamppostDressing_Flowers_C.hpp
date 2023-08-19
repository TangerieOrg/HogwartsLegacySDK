#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class UAkComponent;
class UPhysicalResponseComponent;
class USceneComponent;
struct FVector;
#pragma pack(push, 1)
class ABP_RusticLamppostDressing_Flowers_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* Pot; // 0x250
    UStaticMeshComponent* Plant; // 0x258
    UPhysicalResponseComponent* PhysicalResponse; // 0x260
    UStaticMeshComponent* Flower_02; // 0x268
    UStaticMeshComponent* Pot_04; // 0x270
    UPhysicalResponseComponent* PhysicalResponse_04; // 0x278
    UStaticMeshComponent* Flower_03; // 0x280
    UStaticMeshComponent* Pot_03; // 0x288
    UPhysicalResponseComponent* PhysicalResponse_03; // 0x290
    UStaticMeshComponent* Pot_02; // 0x298
    UPhysicalResponseComponent* PhysicalResponse_02; // 0x2a0
    UStaticMeshComponent* Flower_01; // 0x2a8
    UStaticMeshComponent* Pot_01; // 0x2b0
    UPhysicalResponseComponent* PhysicalResponse_01; // 0x2b8
    UAkComponent* AkComponent; // 0x2c0
    UStaticMeshComponent* Knot; // 0x2c8
    USceneComponent* Scene; // 0x2d0
    UStaticMeshComponent* Nail; // 0x2d8
    UStaticMeshComponent* SM_BCProps_RopeKnot_A; // 0x2e0
    USceneComponent* DefaultSceneRoot; // 0x2e8
    static ABP_RusticLamppostDressing_Flowers_C* StaticClass();
    void CustomEvent(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation);
    void ExecuteUbergraph_BP_RusticLamppostDressing_Flowers(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2f0
#pragma pack(pop)
