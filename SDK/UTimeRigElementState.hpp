#pragma once
#include <cstdint>
#include "UObject.hpp"
class UTimeRigInstanceContext;
class UTimeRigElement;
#pragma pack(push, 1)
class UTimeRigElementState : public UObject {
public:
    char pad_28[0x10];
    UTimeRigInstanceContext* Context; // 0x38
    UTimeRigElement* BaseDefinition; // 0x40
    static UTimeRigElementState* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
