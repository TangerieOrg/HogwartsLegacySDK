#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMercunaNavStreamingManager : public UObject {
public:
    char pad_28[0x20];
    static UMercunaNavStreamingManager* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
