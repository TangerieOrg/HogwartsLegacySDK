#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGizmoLambdaStateTarget : public UObject {
public:
    char pad_28[0x88];
    static UGizmoLambdaStateTarget* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
