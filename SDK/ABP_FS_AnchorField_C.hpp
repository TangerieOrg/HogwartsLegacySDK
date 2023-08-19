#pragma once
#include <cstdint>
#include "AFieldSystemActor.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FTransform.hpp"
class UStaticMeshComponent;
class UUniformInteger;
class UBoxFalloff;
class UBoxComponent;
class UCullingField;
#pragma pack(push, 1)
class ABP_FS_AnchorField_C : public AFieldSystemActor {
public:
    UStaticMeshComponent* Cube; // 0x250
    UUniformInteger* UniformInteger; // 0x258
    UBoxFalloff* BoxFalloff; // 0x260
    UBoxComponent* Box; // 0x268
    UCullingField* CullingField; // 0x270
    EObjectStateTypeEnum Static; // 0x278
    char pad_279[0x7];
    static ABP_FS_AnchorField_C* StaticClass();
    void UserConstructionScript(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, int32_t CallFunc_Conv_ByteToInt_ReturnValue, UUniformInteger* CallFunc_SetUniformInteger_ReturnValue, UBoxFalloff* CallFunc_SetBoxFalloff_ReturnValue, UCullingField* CallFunc_SetCullingField_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)
