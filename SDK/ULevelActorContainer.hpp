#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class ULevelActorContainer : public UObject {
public:
    TArray<AActor*> Actors; // 0x28
    static ULevelActorContainer* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
