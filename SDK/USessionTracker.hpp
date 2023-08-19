#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USessionTracker : public UObject {
public:
    static USessionTracker* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
