#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAISystemBase : public UObject {
public:
    FSoftClassPath AISystemClassName; // 0x28
    FName AISystemModuleName; // 0x40
    char pad_48[0x8];
    bool bInstantiateAISystemOnClient; // 0x50
    char pad_51[0x7];
    static UAISystemBase* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
