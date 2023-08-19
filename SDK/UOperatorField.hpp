#pragma once
#include <cstdint>
#include "EFieldOperationType.hpp"
#include "UFieldNodeBase.hpp"
#pragma pack(push, 1)
class UOperatorField : public UFieldNodeBase {
public:
    float Magnitude; // 0xc8
    char pad_cc[0x4];
    UFieldNodeBase* RightField; // 0xd0
    UFieldNodeBase* LeftField; // 0xd8
    EFieldOperationType Operation; // 0xe0
    char pad_e1[0x7];
    static UOperatorField* StaticClass();
    UOperatorField* SetOperatorField(float Magnitude, UFieldNodeBase* LeftField, UFieldNodeBase* RightField, EFieldOperationType Operation);
}; // Size: 0xe8
#pragma pack(pop)
