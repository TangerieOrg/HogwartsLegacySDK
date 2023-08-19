#pragma once
#include <cstdint>
#include "UGameLogicBoolBase.hpp"
#pragma pack(push, 1)
class UGameLogicSentence : public UGameLogicBoolBase {
public:
    char pad_40[0x8];
    static UGameLogicSentence* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
