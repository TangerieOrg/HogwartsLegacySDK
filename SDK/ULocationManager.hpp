#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULocationManager : public UObject {
public:
    char pad_28[0x98];
    static ULocationManager* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
