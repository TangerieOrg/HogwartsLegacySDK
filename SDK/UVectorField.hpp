#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UVectorField : public UObject {
public:
    FBox Bounds; // 0x28
    float Intensity; // 0x44
    static UVectorField* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
