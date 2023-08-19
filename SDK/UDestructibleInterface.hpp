#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UDestructibleInterface : public UInterface {
public:
    static UDestructibleInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
