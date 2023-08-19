#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMultiFX2_NiagraPropertyBase : public UObject {
public:
    FName PropertyName; // 0x28
    static UMultiFX2_NiagraPropertyBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
