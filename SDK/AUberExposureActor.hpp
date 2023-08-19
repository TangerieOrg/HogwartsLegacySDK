#pragma once
#include <cstdint>
#include "AActor.hpp"
class UUberExposureComponent;
#pragma pack(push, 1)
class AUberExposureActor : public AActor {
public:
    UUberExposureComponent* Component; // 0x248
    static AUberExposureActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
