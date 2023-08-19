#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UMeshComponent : public UPrimitiveComponent {
public:
    TArray<UMaterialInterface*> OverrideMaterials; // 0x480
    char pad_490[0x10];
    uint8_t bEnableMaterialParameterCaching : 1; // 0x4a0
    uint8_t pad_bitfield_4a0_1 : 7;
    char pad_4a1[0xf];
    static UMeshComponent* StaticClass();
    void SetVectorParameterValueOnMaterials(FName ParameterName, FVector ParameterValue);
    void SetScalarParameterValueOnMaterials(FName ParameterName, float ParameterValue);
    void SetDitheredAlpha(float Alpha);
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups);
    void PrestreamMesh(float Seconds);
    bool IsMaterialSlotNameValid(FName MaterialSlotName);
    TArray<FName> GetMaterialSlotNames();
    TArray<UMaterialInterface*> GetMaterials();
    int32_t GetMaterialIndex(FName MaterialSlotName);
    float GetDitheredAlpha();
}; // Size: 0x4b0
#pragma pack(pop)
