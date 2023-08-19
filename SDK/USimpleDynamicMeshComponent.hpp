#pragma once
#include <cstdint>
#include "EDynamicMeshTangentCalcType.hpp"
#include "UBaseDynamicMeshComponent.hpp"
#pragma pack(push, 1)
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent {
public:
    EDynamicMeshTangentCalcType TangentsType; // 0x4f0
    bool bInvalidateProxyOnChange; // 0x4f1
    char pad_4f2[0x36];
    bool bExplicitShowWireframe; // 0x528
    char pad_529[0x47];
    bool bDrawOnTop; // 0x570
    char pad_571[0xcf];
    static USimpleDynamicMeshComponent* StaticClass();
}; // Size: 0x640
#pragma pack(pop)
