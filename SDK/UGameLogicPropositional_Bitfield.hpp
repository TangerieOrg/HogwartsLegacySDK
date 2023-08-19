#pragma once
#include <cstdint>
#include "FBitfield256.hpp"
#include "UGameLogicPropositional.hpp"
#pragma pack(push, 1)
class UGameLogicPropositional_Bitfield : public UGameLogicPropositional {
public:
    static UGameLogicPropositional_Bitfield* StaticClass();
    void _MemberValueChanged(FBitfield256 NewResult);
}; // Size: 0x48
#pragma pack(pop)
