#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UMatineeInterface : public UInterface {
public:
    static UMatineeInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
