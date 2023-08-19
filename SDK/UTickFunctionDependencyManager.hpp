#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTickFunctionDependencyManager : public UObject {
public:
    char pad_28[0x68];
    static UTickFunctionDependencyManager* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
