#pragma once
#include <cstdint>
#include "UFieldNodeFloat.hpp"
class UFieldNodeInt;
#pragma pack(push, 1)
class UToFloatField : public UFieldNodeFloat {
public:
    UFieldNodeInt* IntField; // 0xc8
    static UToFloatField* StaticClass();
    UToFloatField* SetToFloatField(UFieldNodeInt* IntegerField);
}; // Size: 0xd0
#pragma pack(pop)
