#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UTimeRigInterval.hpp"
class UTimeRigElement;
#pragma pack(push, 1)
class UTimeRigGroup : public UTimeRigInterval {
public:
    FLinearColor Color; // 0x88
    TArray<UTimeRigElement*> ChildElements; // 0x98
    static UTimeRigGroup* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
