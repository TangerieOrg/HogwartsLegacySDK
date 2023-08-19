#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UControlRigObjectHolder : public UObject {
public:
    TArray<UObject*> Objects; // 0x28
    static UControlRigObjectHolder* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
