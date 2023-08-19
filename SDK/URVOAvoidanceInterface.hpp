#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class URVOAvoidanceInterface : public UInterface {
public:
    static URVOAvoidanceInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
