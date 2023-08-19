#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ARigidBodyBase : public AActor {
public:
    static ARigidBodyBase* StaticClass();
}; // Size: 0x248
#pragma pack(pop)
