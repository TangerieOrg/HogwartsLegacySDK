#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInterpFilter : public UObject {
public:
    FString Caption; // 0x28
    static UInterpFilter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
