#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URCPropertyContainerBase : public UObject {
public:
    char pad_28[0x28];
    static URCPropertyContainerBase* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
