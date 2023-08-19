#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAISenseEvent : public UObject {
public:
    static UAISenseEvent* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
