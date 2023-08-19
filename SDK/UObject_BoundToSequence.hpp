#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UObject_BoundToSequence : public UActorProvider {
public:
    FName ActorName; // 0x38
    char pad_40[0x10];
    static UObject_BoundToSequence* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
