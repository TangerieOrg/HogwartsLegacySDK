#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTransformAllLoadController : public UObject {
public:
    char pad_28[0x40];
    static UTransformAllLoadController* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
