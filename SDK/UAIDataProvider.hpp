#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAIDataProvider : public UObject {
public:
    static UAIDataProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
