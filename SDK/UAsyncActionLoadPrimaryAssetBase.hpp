#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
#pragma pack(push, 1)
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x48];
    static UAsyncActionLoadPrimaryAssetBase* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
