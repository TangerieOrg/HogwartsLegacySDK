#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInterface : public UObject {
public:
    static UInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
