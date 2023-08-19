#pragma once
#include <cstdint>
#include "EBakeMapType.hpp"
#include "EBakeTextureResolution.hpp"
#include "UInteractiveToolPropertySet.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet {
public:
    EBakeMapType MapType; // 0x60
    EBakeTextureResolution Resolution; // 0x64
    bool bUseWorldSpace; // 0x68
    char pad_69[0x3];
    float Thickness; // 0x6c
    FString UVLayer; // 0x70
    TArray<FString> UVLayerNamesList; // 0x80
    TArray<UTexture2D*> Result; // 0x90
    static UBakeMeshAttributeMapsToolProperties* StaticClass();
    TArray<FString> GetUVLayerNamesFunc();
}; // Size: 0xa0
#pragma pack(pop)
