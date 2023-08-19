#pragma once
#include <cstdint>
#include "UGameLogicSentence.hpp"
#pragma pack(push, 1)
class UGameLogicPropositional : public UGameLogicSentence {
public:
    static UGameLogicPropositional* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
