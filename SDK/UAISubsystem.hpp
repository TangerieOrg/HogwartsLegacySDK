#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAISystem;
#pragma pack(push, 1)
class UAISubsystem : public UObject {
public:
    char pad_28[0x8];
    UAISystem* AISystem; // 0x30
    static UAISubsystem* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
