#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UPropertyAccess : public UInterface {
public:
    static UPropertyAccess* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
