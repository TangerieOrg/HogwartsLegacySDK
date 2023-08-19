#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameLogicBase : public UObject {
public:
    static UGameLogicBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
