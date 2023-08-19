#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGizmoTransformChangeStateTarget : public UObject {
public:
    char pad_28[0xb8];
    static UGizmoTransformChangeStateTarget* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
