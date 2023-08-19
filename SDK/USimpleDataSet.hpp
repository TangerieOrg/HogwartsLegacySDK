#pragma once
#include <cstdint>
#include "ESimpleDataSetPreloadState.hpp"
#include "FSimpleDataSetPendingLoad.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USimpleDataSet : public UObject {
public:
    char pad_28[0x50];
    TArray<FSimpleDataSetPendingLoad> PendingLoads; // 0x78
    ESimpleDataSetPreloadState PreloadState; // 0x88
    char pad_89[0x1f];
    static USimpleDataSet* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
