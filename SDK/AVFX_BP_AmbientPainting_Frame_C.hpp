#pragma once
#include <cstdint>
#include "AAmbientPaintingActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UAkComponent;
struct FVector;
#pragma pack(push, 1)
class AVFX_BP_AmbientPainting_Frame_C : public AAmbientPaintingActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
    UAkComponent* Ak_VFX_BP_AmbientPainting_Frame; // 0x2d8
    static AVFX_BP_AmbientPainting_Frame_C* StaticClass();
    void ReceiveBeginPlay();
    void ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation);
    void ExecuteUbergraph_VFX_BP_AmbientPainting_Frame(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2e0
#pragma pack(pop)
