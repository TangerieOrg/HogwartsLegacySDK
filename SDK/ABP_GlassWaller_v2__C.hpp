#pragma once
#include <cstdint>
#include "AGlassWaller.hpp"
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "FF_SplineCollisionGenerationSettings.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
class UBP_SplineCollisionGenerator_C;
class UPhysicalMaterial;
class USplineComponent;
#pragma pack(push, 1)
class ABP_GlassWaller_v2__C : public AGlassWaller {
public:
    UBP_SplineCollisionGenerator_C* SplineCollisionGenerator; // 0x280
    float CheckIntervalDistance; // 0x288
    float MaxAngleDelta; // 0x28c
    float WallWidth; // 0x290
    float WallHeight; // 0x294
    UPhysicalMaterial* PhysicalMaterial; // 0x298
    bool GenerateOverlapEvents; // 0x2a0
    bool UseCollisionPreset; // 0x2a1
    char pad_2a2[0x2];
    FName CollisionPresetName; // 0x2a4
    ECollisionChannel ObjectType; // 0x2ac
    ECollisionEnabled::Type CollisionEnabled; // 0x2ad
    char pad_2ae[0x52];
    FLinearColor WallColor; // 0x300
    bool Use_Pitch; // 0x310
    char pad_311[0x1f];
    bool HiddenInGame; // 0x330
    bool Loops; // 0x331
    bool ReRun; // 0x332
    char pad_333[0x5];
    static ABP_GlassWaller_v2__C* StaticClass();
    void Request_Destroy_Spline_Helper(USplineComponent* SplineHelper, bool& Success, bool CallFunc_IsValid_ReturnValue);
    void ViewDocumentation();
    void UserConstructionScript(bool CallFunc_WithEditor_ReturnValue, FVector CallFunc_Conv_LinearColorToVector_ReturnValue, FF_SplineCollisionGenerationSettings K2Node_MakeStruct_F_SplineCollisionGenerationSettings);
}; // Size: 0x338
#pragma pack(pop)
