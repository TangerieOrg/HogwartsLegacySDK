#pragma once
#include <cstdint>
#include "FButtonStyle.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UButtonStyleAsset : public UObject {
public:
    FButtonStyle ButtonStyle; // 0x28
    static UButtonStyleAsset* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
