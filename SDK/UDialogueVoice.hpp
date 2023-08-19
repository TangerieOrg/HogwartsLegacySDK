#pragma once
#include <cstdint>
#include "EGrammaticalGender\Type.hpp"
#include "EGrammaticalNumber\Type.hpp"
#include "FGuid.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UDialogueVoice : public UObject {
public:
    EGrammaticalGender::Type Gender; // 0x28
    EGrammaticalNumber::Type Plurality; // 0x29
    char pad_2a[0x2];
    FGuid LocalizationGUID; // 0x2c
    char pad_3c[0x4];
    static UDialogueVoice* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
