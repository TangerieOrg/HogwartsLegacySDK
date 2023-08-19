#pragma once
#include <cstdint>
#include "UObjectProvider.hpp"
class UObject;
class UClass;
#pragma pack(push, 1)
class UObject_Spawn : public UObjectProvider {
public:
    UObject* ParentObject; // 0x28
    UClass* ObjectClass; // 0x30
    FName ObjectName; // 0x38
    static UObject_Spawn* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
