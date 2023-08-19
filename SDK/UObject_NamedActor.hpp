#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UObject_NamedActor : public UActorProvider {
public:
    FName ActorName; // 0x38
    char pad_40[0x8];
    static UObject_NamedActor* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
