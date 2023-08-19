#pragma once
#include <cstdint>
#include "UStencilManagerMatchActorName.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorNameContains : public UStencilManagerMatchActorName {
public:
    FName CONTAINS; // 0x30
    static UStencilManagerMatchActorNameContains* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
