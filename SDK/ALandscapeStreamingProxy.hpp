#pragma once
#include <cstdint>
#include "ALandscapeProxy.hpp"
#pragma pack(push, 1)
class ALandscapeStreamingProxy : public ALandscapeProxy {
public:
    char pad_5c0[0x20];
    static ALandscapeStreamingProxy* StaticClass();
}; // Size: 0x5e0
#pragma pack(pop)
