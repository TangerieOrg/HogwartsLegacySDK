#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UReplicationConnectionDriver : public UObject {
public:
    static UReplicationConnectionDriver* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
