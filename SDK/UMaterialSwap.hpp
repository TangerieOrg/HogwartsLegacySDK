#pragma once
#include <cstdint>
#include "EMaterialSwapPriority.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UObject.hpp"
class UTexture;
#pragma pack(push, 1)
class UMaterialSwap : public UObject {
public:
    char pad_28[0x10];
    FMaterialPermuterKey Key; // 0x38
    EMaterialSwapPriority Priority; // 0x48
    char pad_49[0x7];
    static UMaterialSwap* StaticClass();
    void SetVectorParameter(FName Name, FVector Value);
    void SetVector4Parameter(FName Name, FVector4 Value);
    void SetTextureParameter(FName Name, UTexture* Value);
    void SetScalarParameter(FName Name, float Value);
    void SetColorParameter(FName Name, FLinearColor Value);
}; // Size: 0x50
#pragma pack(pop)
