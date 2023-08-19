#pragma once
#include <cstdint>
#include "AFieldSystemActor.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UCullingField;
class UOperatorField;
class UUniformVector;
class URadialFalloff;
class UUniformScalar;
class URandomVector;
class UStaticMeshComponent;
class URadialVector;
class UNoiseField;
class UMaterialInterface;
#pragma pack(push, 1)
class ABP_FS_SpellImpactNew_C : public AFieldSystemActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    UCullingField* CullingField___LinearForce; // 0x258
    UOperatorField* OperatorField___LinearForce; // 0x260
    UUniformVector* UniformVector___LinearForce; // 0x268
    UCullingField* CullingField___Torque; // 0x270
    UOperatorField* OperatorField___TorqueB; // 0x278
    UOperatorField* OperatorField___TorqueA; // 0x280
    UUniformScalar* UniformScalar___Torque; // 0x288
    URandomVector* RandomVector___Torque; // 0x290
    UUniformVector* UniformVector___Torque; // 0x298
    UCullingField* CullingField___Strain_; // 0x2a0
    URadialFalloff* RadialFalloff___Strain_Culling; // 0x2a8
    UStaticMeshComponent* Strain_Volume; // 0x2b0
    URadialFalloff* RadialFalloff___Strain_Magnitude; // 0x2b8
    URadialFalloff* RadialFalloff___Culling_Force; // 0x2c0
    UCullingField* CullingField___Force; // 0x2c8
    UOperatorField* OperatorField___Force; // 0x2d0
    URadialVector* RadialVector___Force; // 0x2d8
    UOperatorField* OperatorField___Force_Noise; // 0x2e0
    UNoiseField* NoiseField___Force; // 0x2e8
    URadialFalloff* RadialFalloff___Force_Magnitude; // 0x2f0
    FVector Impact_Direction; // 0x2f8
    bool DemolitionActive_; // 0x304
    char pad_305[0x3];
    float Delay; // 0x308
    float Strain_Radius; // 0x30c
    float Strain_Magnitude; // 0x310
    float Radial_Push_Magnitude; // 0x314
    FLinearColor Deactivated; // 0x318
    float Linear_Push_Magnitude; // 0x328
    float Push_Noise_Max; // 0x32c
    float Push_Noise_Min; // 0x330
    float Torque_Magnitude; // 0x334
    FVector Torque_Vector_Override; // 0x338
    bool Is_Debug_; // 0x344
    bool Destroy_Node_After_Strike_; // 0x345
    char pad_346[0x2];
    static ABP_FS_SpellImpactNew_C* StaticClass();
    void UserConstructionScript(UMaterialInterface* Strain_Material, float Radius_Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FS_SpellImpactNew(int32_t EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UNoiseField* CallFunc_SetNoiseField_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, URadialVector* CallFunc_SetRadialVector_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, URandomVector* CallFunc_SetRandomVector_ReturnValue, UUniformVector* CallFunc_SetUniformVector_ReturnValue, UUniformScalar* CallFunc_SetUniformScalar_ReturnValue, UOperatorField* CallFunc_SetOperatorField_ReturnValue, UOperatorField* CallFunc_SetOperatorField_ReturnValue_1, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, UOperatorField* CallFunc_SetOperatorField_ReturnValue_2, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_1, UOperatorField* CallFunc_SetOperatorField_ReturnValue_3, UCullingField* CallFunc_SetCullingField_ReturnValue, UCullingField* CallFunc_SetCullingField_ReturnValue_1, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_2, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_3, UCullingField* CallFunc_SetCullingField_ReturnValue_2, UUniformVector* CallFunc_SetUniformVector_ReturnValue_1, UOperatorField* CallFunc_SetOperatorField_ReturnValue_4, UCullingField* CallFunc_SetCullingField_ReturnValue_3);
}; // Size: 0x348
#pragma pack(pop)
