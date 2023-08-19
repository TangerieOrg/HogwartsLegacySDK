#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavigationSystemBase : public UObject {
public:
    static UNavigationSystemBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
