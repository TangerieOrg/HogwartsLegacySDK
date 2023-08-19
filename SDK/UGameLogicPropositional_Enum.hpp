#pragma once
#include <cstdint>
#include "UGameLogicPropositional.hpp"
#pragma pack(push, 1)
class UGameLogicPropositional_Enum : public UGameLogicPropositional {
public:
    static UGameLogicPropositional_Enum* StaticClass();
    void _MemberValueChanged(uint8_t NewResult);
}; // Size: 0x48
#pragma pack(pop)
