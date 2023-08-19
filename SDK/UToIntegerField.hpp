#pragma once
#include <cstdint>
#include "UFieldNodeInt.hpp"
class UFieldNodeFloat;
#pragma pack(push, 1)
class UToIntegerField : public UFieldNodeInt {
public:
    UFieldNodeFloat* FloatField; // 0xc8
    static UToIntegerField* StaticClass();
    UToIntegerField* SetToIntegerField(UFieldNodeFloat* FloatField);
}; // Size: 0xd0
#pragma pack(pop)
