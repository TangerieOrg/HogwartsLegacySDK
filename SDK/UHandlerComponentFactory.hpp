#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UHandlerComponentFactory : public UObject {
public:
    static UHandlerComponentFactory* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
