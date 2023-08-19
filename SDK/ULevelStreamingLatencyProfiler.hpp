#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULevelStreamingLatencyProfiler : public UObject {
public:
    char pad_28[0x80];
    static ULevelStreamingLatencyProfiler* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
