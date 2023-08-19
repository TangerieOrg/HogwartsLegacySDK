#pragma once
#include <cstdint>
#include "AFieldSystemActor.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UCullingField;
class URadialFalloff;
class UNoiseField;
class UStaticMeshComponent;
class UOperatorField;
class URadialVector;
class UMaterialInterface;
#pragma pack(push, 1)
class ABP_FS_SpellImpact_C : public AFieldSystemActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    UCullingField* CullingField___Strain_; // 0x258
    URadialFalloff* RadialFalloff___Strain_Culling; // 0x260
    UStaticMeshComponent* Strain_Volume; // 0x268
    URadialFalloff* RadialFalloff___Strain_Magnitude; // 0x270
    URadialFalloff* RadialFalloff___Culling_Force; // 0x278
    UCullingField* CullingField___Force; // 0x280
    UOperatorField* OperatorField___Force; // 0x288
    URadialVector* RadialVector___Force; // 0x290
    UOperatorField* OperatorField___Force_Noise; // 0x298
    UNoiseField* NoiseField___Force; // 0x2a0
    URadialFalloff* RadialFalloff___Force_Magnitude; // 0x2a8
    bool DemolitionActive_; // 0x2b0
    char pad_2b1[0x3];
    float Delay; // 0x2b4
    float Strain_Radius; // 0x2b8
    float Strain_Magnitude; // 0x2bc
    float Push_Magnitude; // 0x2c0
    FLinearColor Deactivated; // 0x2c4
    float Push_Noise_Min; // 0x2d4
    float Push_Noise_Max; // 0x2d8
    bool Is_Debug_; // 0x2dc
    bool Destroy_Node_After_Strike_; // 0x2dd
    char pad_2de[0x2];
    static ABP_FS_SpellImpact_C* StaticClass();
    void UserConstructionScript(UMaterialInterface* Strain_Material, float Radius_Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FS_SpellImpact(int32_t EntryPoint, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, UNoiseField* CallFunc_SetNoiseField_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, URadialVector* CallFunc_SetRadialVector_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_1, UOperatorField* CallFunc_SetOperatorField_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_2, UOperatorField* CallFunc_SetOperatorField_ReturnValue_1, UCullingField* CallFunc_SetCullingField_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_3, UCullingField* CallFunc_SetCullingField_ReturnValue_1);
}; // Size: 0x2e0
#pragma pack(pop)
