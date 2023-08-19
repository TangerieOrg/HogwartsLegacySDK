#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsSimulatingPhysics : public UFXFilter {
public:
    static UFXFilter_IsSimulatingPhysics* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
