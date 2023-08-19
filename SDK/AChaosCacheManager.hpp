#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECacheMode.hpp"
#include "EStartMode.hpp"
#include "FObservedComponent.hpp"
class UChaosCacheCollection;
class UPrimitiveComponent;
#pragma pack(push, 1)
class AChaosCacheManager : public AActor {
public:
    UChaosCacheCollection* CacheCollection; // 0x248
    ECacheMode CacheMode; // 0x250
    EStartMode StartMode; // 0x251
    char pad_252[0x2];
    float StartTime; // 0x254
    char pad_258[0x8];
    TArray<FObservedComponent> ObservedComponents; // 0x260
    char pad_270[0x80];
    static AChaosCacheManager* StaticClass();
    void TriggerComponentByCache(FName InCacheName);
    void TriggerComponent(UPrimitiveComponent* InComponent);
    void TriggerAll();
    void SetStartTime(float InStartTime);
    void ResetSingleTransform(int32_t InIndex);
    void ResetAllComponentTransforms();
}; // Size: 0x2f0
#pragma pack(pop)
