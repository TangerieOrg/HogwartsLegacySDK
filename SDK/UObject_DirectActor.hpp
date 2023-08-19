#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
class AActor;
#pragma pack(push, 1)
class UObject_DirectActor : public UActorProvider {
public:
    AActor* Actor; // 0x38
    static UObject_DirectActor* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
