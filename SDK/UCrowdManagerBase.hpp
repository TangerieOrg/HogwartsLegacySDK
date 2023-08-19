#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCrowdManagerBase : public UObject {
public:
    static UCrowdManagerBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
