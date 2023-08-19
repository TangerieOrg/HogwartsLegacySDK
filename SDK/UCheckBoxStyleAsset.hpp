#pragma once
#include <cstdint>
#include "FCheckBoxStyle.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCheckBoxStyleAsset : public UObject {
public:
    FCheckBoxStyle CheckBoxStyle; // 0x28
    static UCheckBoxStyleAsset* StaticClass();
}; // Size: 0x5a8
#pragma pack(pop)
