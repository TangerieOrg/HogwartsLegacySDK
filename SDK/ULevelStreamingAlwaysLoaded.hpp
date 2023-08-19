#pragma once
#include <cstdint>
#include "ULevelStreaming.hpp"
#pragma pack(push, 1)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming {
public:
    static ULevelStreamingAlwaysLoaded* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
