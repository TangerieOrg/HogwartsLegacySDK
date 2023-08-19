#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UNavMeshRenderingComponent : public UPrimitiveComponent {
public:
    char pad_480[0x10];
    static UNavMeshRenderingComponent* StaticClass();
}; // Size: 0x490
#pragma pack(pop)
