#pragma once
#include <cstdint>
#include "UBoxComponent.hpp"
#pragma pack(push, 1)
class UConjurationSnappingComponentBase : public UBoxComponent {
public:
    char pad_4b0[0x40];
    static UConjurationSnappingComponentBase* StaticClass();
}; // Size: 0x4f0
#pragma pack(pop)
