#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUtilityContextProvider : public UInterface {
public:
    static UUtilityContextProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
