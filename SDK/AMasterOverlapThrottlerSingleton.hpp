#pragma once
#include <cstdint>
#include "AActor.hpp"
class UPrimitiveComponent;
struct FMasterOverlapThrottlerSettings;
#pragma pack(push, 1)
class AMasterOverlapThrottlerSingleton : public AActor {
public:
    char pad_248[0x50];
    static AMasterOverlapThrottlerSingleton* StaticClass();
    static void RemoveManagedPrimitiveComponent(UPrimitiveComponent* Component);
    static void IsPrimitiveComponentThrottled(UPrimitiveComponent* Component, bool& bIsThrottled);
    static void IsManagedPrimitiveComponent(UPrimitiveComponent* Component, bool& bIsManaged);
    static void EnablePrimitiveComponentThrottling(UPrimitiveComponent* Component, bool bEnable);
    static void DisablePrimitiveComponentThrottling(UPrimitiveComponent* Component);
    static void AddManagedPrimitiveComponent(UPrimitiveComponent* Component, FMasterOverlapThrottlerSettings& Settings);
}; // Size: 0x298
#pragma pack(pop)
