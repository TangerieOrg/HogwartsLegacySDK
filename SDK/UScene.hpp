#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UScene : public UObject {
public:
    static UScene* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
