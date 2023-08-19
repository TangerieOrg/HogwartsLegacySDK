#pragma once
#include <cstdint>
#include "UGameLogicPropositional.hpp"
#pragma pack(push, 1)
class UGameLogicPropositional_Int32 : public UGameLogicPropositional {
public:
    static UGameLogicPropositional_Int32* StaticClass();
    void _MemberValueChanged(int32_t NewResult);
}; // Size: 0x48
#pragma pack(pop)
