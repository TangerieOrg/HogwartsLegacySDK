#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class UMercunaClampToNavigableProxy : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x40];
    static UMercunaClampToNavigableProxy* StaticClass();
    static UMercunaClampToNavigableProxy* MercunaClampToNavigable(UObject* WorldContextObject, FVector Position, float NavigationRadius, float SearchRadius);
}; // Size: 0x70
#pragma pack(pop)
