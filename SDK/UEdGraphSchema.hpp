#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UEdGraphSchema : public UObject {
public:
    static UEdGraphSchema* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
