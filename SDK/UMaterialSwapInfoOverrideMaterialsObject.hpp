#pragma once
#include <cstdint>
#include "FMaterialSwapInfoOverrideMaterials.hpp"
#include "UMaterialSwapInfoObject.hpp"
#pragma pack(push, 1)
class UMaterialSwapInfoOverrideMaterialsObject : public UMaterialSwapInfoObject {
public:
    FMaterialSwapInfoOverrideMaterials SwapInfo; // 0x28
    static UMaterialSwapInfoOverrideMaterialsObject* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
