#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UUIDManager : public UObject {
public:
    char pad_28[0x50];
    static UUIDManager* StaticClass();
    void OnActorDestroyed(AActor* DestroyedActor);
}; // Size: 0x78
#pragma pack(pop)
