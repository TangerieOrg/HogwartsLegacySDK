#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "FSoftObjectPath.hpp"
class UClass;
class UObject;
#pragma pack(push, 1)
struct FStructSerializerObjectTestStruct {
    UClass* Class; // 0x0
    UClass* SubClass; // 0x8
    char pad_10[0x28];
    UObject* Object; // 0x38
    char pad_40[0x30];
    FSoftClassPath ClassPath; // 0x70
    FSoftObjectPath ObjectPath; // 0x88
}; // Size: 0xa0
#pragma pack(pop)
