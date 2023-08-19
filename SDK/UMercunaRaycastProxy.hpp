#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class UMercunaRaycastProxy : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x48];
    static UMercunaRaycastProxy* StaticClass();
    static UMercunaRaycastProxy* MercunaRaycast(UObject* WorldContextObject, FVector Start, FVector End, float NavigationRadius);
}; // Size: 0x78
#pragma pack(pop)
