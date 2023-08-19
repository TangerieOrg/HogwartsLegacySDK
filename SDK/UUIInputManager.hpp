#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UUIInputManager : public UObject {
public:
    char pad_28[0xb8];
    static UUIInputManager* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
