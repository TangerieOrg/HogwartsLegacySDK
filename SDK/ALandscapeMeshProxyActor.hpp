#pragma once
#include <cstdint>
#include "AActor.hpp"
class ULandscapeMeshProxyComponent;
#pragma pack(push, 1)
class ALandscapeMeshProxyActor : public AActor {
public:
    ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x248
    static ALandscapeMeshProxyActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
