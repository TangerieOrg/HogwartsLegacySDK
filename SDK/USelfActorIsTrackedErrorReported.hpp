#pragma once
#include <cstdint>
#include "EUtilityTrackedErrorType.hpp"
#include "USelfActorIsTrackedErrorReported_Base.hpp"
#pragma pack(push, 1)
class USelfActorIsTrackedErrorReported : public USelfActorIsTrackedErrorReported_Base {
public:
    bool bUseName; // 0x30
    char pad_31[0x3];
    FName ErrorName; // 0x34
    bool bUseType; // 0x3c
    EUtilityTrackedErrorType ErrorType; // 0x3d
    char pad_3e[0x2];
    static USelfActorIsTrackedErrorReported* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
