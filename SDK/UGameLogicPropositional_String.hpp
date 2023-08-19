#pragma once
#include <cstdint>
#include "UGameLogicPropositional.hpp"
#pragma pack(push, 1)
class UGameLogicPropositional_String : public UGameLogicPropositional {
public:
    static UGameLogicPropositional_String* StaticClass();
    void _MemberValueChanged(FString NewResult);
}; // Size: 0x48
#pragma pack(pop)
