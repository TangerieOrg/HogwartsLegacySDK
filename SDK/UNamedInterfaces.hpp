#pragma once
#include <cstdint>
#include "FNamedInterface.hpp"
#include "FNamedInterfaceDef.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNamedInterfaces : public UObject {
public:
    TArray<FNamedInterface> NamedInterfaces; // 0x28
    TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
    char pad_48[0x18];
    static UNamedInterfaces* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
