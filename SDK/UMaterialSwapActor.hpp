#pragma once
#include <cstdint>
#include "EMaterialSwapRefreshType.hpp"
#include "UMaterialSwapMeshPoolBase.hpp"
#pragma pack(push, 1)
class UMaterialSwapActor : public UMaterialSwapMeshPoolBase {
public:
    char pad_c0[0x8];
    TArray<UMaterialSwapActor*> DependentSwaps; // 0xc8
    char pad_d8[0x8];
    EMaterialSwapRefreshType RefreshType; // 0xe0
    char pad_e1[0x7];
    static UMaterialSwapActor* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
