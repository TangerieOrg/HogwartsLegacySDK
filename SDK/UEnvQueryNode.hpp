#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UEnvQueryNode : public UObject {
public:
    int32_t VerNum; // 0x28
    char pad_2c[0x4];
    static UEnvQueryNode* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
