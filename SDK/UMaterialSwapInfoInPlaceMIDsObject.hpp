#pragma once
#include <cstdint>
#include "FMaterialSwapInfoInPlaceMIDs.hpp"
#include "UMaterialSwapInfoObject.hpp"
#pragma pack(push, 1)
class UMaterialSwapInfoInPlaceMIDsObject : public UMaterialSwapInfoObject {
public:
    FMaterialSwapInfoInPlaceMIDs SwapInfo; // 0x28
    static UMaterialSwapInfoInPlaceMIDsObject* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
