#pragma once
#include <cstdint>
#include "FMaterialSwapInfoOverrideMaterial.hpp"
#include "UMaterialSwapInfoObject.hpp"
#pragma pack(push, 1)
class UMaterialSwapInfoOverrideMaterialObject : public UMaterialSwapInfoObject {
public:
    FMaterialSwapInfoOverrideMaterial SwapInfo; // 0x28
    static UMaterialSwapInfoOverrideMaterialObject* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
