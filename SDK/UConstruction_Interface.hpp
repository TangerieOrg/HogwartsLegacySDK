#pragma once
#include <cstdint>
#include "UInterface.hpp"
struct FTransform;
#pragma pack(push, 1)
class UConstruction_Interface : public UInterface {
public:
    static UConstruction_Interface* StaticClass();
    void Construct(FTransform& Transform);
}; // Size: 0x28
#pragma pack(pop)
