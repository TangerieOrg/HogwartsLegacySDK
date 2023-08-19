#pragma once
#include <cstdint>
#include "AActor.hpp"
class UGroomComponent;
#pragma pack(push, 1)
class AGroomActor : public AActor {
public:
    UGroomComponent* GroomComponent; // 0x248
    static AGroomActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
