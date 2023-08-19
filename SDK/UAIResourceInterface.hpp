#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UAIResourceInterface : public UInterface {
public:
    static UAIResourceInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
