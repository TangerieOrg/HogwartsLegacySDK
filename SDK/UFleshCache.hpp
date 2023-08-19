#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UActorComponent;
#pragma pack(push, 1)
class UFleshCache : public UObject {
public:
    char pad_28[0x2d8];
    static UFleshCache* StaticClass();
    void OnPreCacheFinished(AActor* InOwner);
    void OnComponentActivated(UActorComponent* InComponent, bool InSuccess);
    void HandleFastTravelFinished(UObject* InCaller);
    void HandleFastTravelBegun(UObject* InCaller);
    static UFleshCache* Get();
}; // Size: 0x300
#pragma pack(pop)
