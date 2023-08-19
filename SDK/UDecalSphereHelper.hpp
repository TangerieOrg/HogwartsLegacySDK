#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UDecalSphereHelper : public USceneComponent {
public:
    FName NameForDotsRadius; // 0x220
    FVector Sphere1Position; // 0x228
    float Sphere1Radius; // 0x234
    FVector Sphere2Position; // 0x238
    float Sphere2Radius; // 0x244
    FVector Sphere3Position; // 0x248
    float Sphere3Radius; // 0x254
    FVector Sphere4Position; // 0x258
    float Sphere4Radius; // 0x264
    char pad_268[0x98];
    static UDecalSphereHelper* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
