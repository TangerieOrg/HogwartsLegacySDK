#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URuntimeOptionsBase : public UObject {
public:
    char pad_28[0x10];
    static URuntimeOptionsBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
