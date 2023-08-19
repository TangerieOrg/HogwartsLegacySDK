#pragma once
#include <cstdint>
#include "ULevelStreaming.hpp"
#pragma pack(push, 1)
class ULevelStreamingPersistent : public ULevelStreaming {
public:
    static ULevelStreamingPersistent* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
