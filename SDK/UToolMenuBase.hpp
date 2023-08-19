#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UToolMenuBase : public UObject {
public:
    static UToolMenuBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
