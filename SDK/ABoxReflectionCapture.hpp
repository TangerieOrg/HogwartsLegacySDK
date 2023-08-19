#pragma once
#include <cstdint>
#include "AReflectionCapture.hpp"
#pragma pack(push, 1)
class ABoxReflectionCapture : public AReflectionCapture {
public:
    static ABoxReflectionCapture* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
