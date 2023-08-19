#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UReplicationDriver : public UObject {
public:
    static UReplicationDriver* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
