#pragma once
#include <cstdint>
#include "AActor.hpp"
class USphereComponent;
#pragma pack(push, 1)
class ASceneRigMayaExportSphere : public AActor {
public:
    USphereComponent* SphereComponent; // 0x248
    static ASceneRigMayaExportSphere* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
