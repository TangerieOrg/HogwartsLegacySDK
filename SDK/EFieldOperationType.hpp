#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldOperationType : uint8_t {
    Field_Multiply = 0,
    Field_Divide = 1,
    Field_Add = 2,
    Field_Substract = 3,
    Field_Operation_Max = 4,
};
#pragma pack(pop)
