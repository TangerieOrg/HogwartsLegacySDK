#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class UGizmoComponentHitTarget : public UObject {
public:
    char pad_28[0x8];
    UPrimitiveComponent* Component; // 0x30
    char pad_38[0x48];
    static UGizmoComponentHitTarget* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
