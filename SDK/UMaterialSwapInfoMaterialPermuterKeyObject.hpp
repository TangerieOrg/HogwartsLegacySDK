#pragma once
#include <cstdint>
#include "FMaterialSwapKey.hpp"
#include "UMaterialSwapInfoObjectBase.hpp"
#pragma pack(push, 1)
class UMaterialSwapInfoMaterialPermuterKeyObject : public UMaterialSwapInfoObjectBase {
public:
    FMaterialSwapKey SwapInfo; // 0x28
    static UMaterialSwapInfoMaterialPermuterKeyObject* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
