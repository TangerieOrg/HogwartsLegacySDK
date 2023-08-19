#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FIntPoint.hpp"
#include "UStaticMeshComponent.hpp"
#pragma pack(push, 1)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent {
public:
    FGuid LandscapeGuid; // 0x510
    TArray<FIntPoint> ProxyComponentBases; // 0x520
    int8_t ProxyLOD; // 0x530
    char pad_531[0xf];
    static ULandscapeMeshProxyComponent* StaticClass();
}; // Size: 0x540
#pragma pack(pop)
