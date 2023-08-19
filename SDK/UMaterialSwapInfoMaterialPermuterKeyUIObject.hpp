#pragma once
#include <cstdint>
#include "FMaterialSwapKeyUI.hpp"
#include "UMaterialSwapInfoObject.hpp"
#pragma pack(push, 1)
class UMaterialSwapInfoMaterialPermuterKeyUIObject : public UMaterialSwapInfoObject {
public:
    FMaterialSwapKeyUI SwapInfo; // 0x28
    static UMaterialSwapInfoMaterialPermuterKeyUIObject* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
