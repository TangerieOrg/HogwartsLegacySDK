#pragma once
#include <cstdint>
#include "UGameLogicPropositional.hpp"
#pragma pack(push, 1)
class UGameLogicPropositional_Float : public UGameLogicPropositional {
public:
    static UGameLogicPropositional_Float* StaticClass();
    void _MemberValueChanged(float NewResult);
}; // Size: 0x48
#pragma pack(pop)
