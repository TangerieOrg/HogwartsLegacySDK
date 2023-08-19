#pragma once
#include <cstdint>
#include "UGameLogicSentence.hpp"
#pragma pack(push, 1)
class UGameLogicExpression : public UGameLogicSentence {
public:
    static UGameLogicExpression* StaticClass();
    void _MemberValueChanged(bool NewResult);
}; // Size: 0x48
#pragma pack(pop)
