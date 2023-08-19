#pragma once
#include <cstdint>
#include "UObject.hpp"
class UForageablePool;
class AActor;
class AForagable;
#pragma pack(push, 1)
class UForegeableSpawnerManager : public UObject {
public:
    char pad_28[0x18];
    UForageablePool* Pool; // 0x40
    char pad_48[0x70];
    static UForegeableSpawnerManager* StaticClass();
    void UnregisterInstance(AActor* Instance);
    void RegisterInstance(AActor* Instance, bool bShouldSetInitialState);
    void OnForageableCollected(AForagable* Actor);
    void OnBreakableDestroyed(AActor* Actor);
    static bool InDungeon();
    static UForegeableSpawnerManager* Get();
}; // Size: 0xb8
#pragma pack(pop)
