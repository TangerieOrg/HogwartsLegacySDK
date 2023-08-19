#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBeaconableObject : public UInterface {
public:
    static UBeaconableObject* StaticClass();
    FName GetUniqueBeaconId();
}; // Size: 0x28
#pragma pack(pop)
