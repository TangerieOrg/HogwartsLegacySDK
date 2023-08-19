#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_Frontend_PhoenixPerch_C : public AActor {
public:
    UStaticMeshComponent* StaticMesh; // 0x248
    static ABP_Frontend_PhoenixPerch_C* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
