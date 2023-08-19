#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UInterface_CollisionDataProvider : public UInterface {
public:
    static UInterface_CollisionDataProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
