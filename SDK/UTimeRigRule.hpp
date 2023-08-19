#pragma once
#include <cstdint>
#include "UTimeRigInterval.hpp"
class UTimeRigElement;
#pragma pack(push, 1)
class UTimeRigRule : public UTimeRigInterval {
public:
    char pad_88[0x8];
    TArray<UTimeRigElement*> BakedChildren; // 0x90
    static UTimeRigRule* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
