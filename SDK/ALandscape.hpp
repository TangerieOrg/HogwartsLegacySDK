#pragma once
#include <cstdint>
#include "ALandscapeProxy.hpp"
#pragma pack(push, 1)
class ALandscape : public ALandscapeProxy {
public:
    static ALandscape* StaticClass();
}; // Size: 0x5c0
#pragma pack(pop)
