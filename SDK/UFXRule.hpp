#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UFXRule : public UObject {
public:
    static UFXRule* StaticClass();
    bool IsMatch();
}; // Size: 0x28
#pragma pack(pop)
