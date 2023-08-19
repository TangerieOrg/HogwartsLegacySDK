#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimeSource : public UObject {
public:
    static UTimeSource* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
