#pragma once
#include <cstdint>
#include "AActor.hpp"
class UVectorFieldComponent;
#pragma pack(push, 1)
class AVectorFieldVolume : public AActor {
public:
    UVectorFieldComponent* VectorFieldComponent; // 0x248
    static AVectorFieldVolume* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
