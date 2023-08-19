#pragma once
#include <cstdint>
#include "FFontParameterValue.hpp"
#include "FRuntimeVirtualTextureParameterValue.hpp"
#include "FScalarParameterValue.hpp"
#include "FStaticComponentMaskParameter.hpp"
#include "FStaticSwitchParameter.hpp"
#include "FTextureParameterValue.hpp"
#include "FVectorParameterValue.hpp"
#include "UMaterialFunctionInterface.hpp"
#pragma pack(push, 1)
class UMaterialFunctionInstance : public UMaterialFunctionInterface {
public:
    UMaterialFunctionInterface* Parent; // 0x40
    UMaterialFunctionInterface* Base; // 0x48
    TArray<FScalarParameterValue> ScalarParameterValues; // 0x50
    TArray<FVectorParameterValue> VectorParameterValues; // 0x60
    TArray<FTextureParameterValue> TextureParameterValues; // 0x70
    TArray<FFontParameterValue> FontParameterValues; // 0x80
    TArray<FStaticSwitchParameter> StaticSwitchParameterValues; // 0x90
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xa0
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xb0
    static UMaterialFunctionInstance* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
