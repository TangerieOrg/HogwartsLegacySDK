#pragma once
#include <cstdint>
#include "AActor.hpp"
class UGeometryCacheComponent;
#pragma pack(push, 1)
class AGeometryCacheActor : public AActor {
public:
    UGeometryCacheComponent* GeometryCacheComponent; // 0x248
    static AGeometryCacheActor* StaticClass();
    UGeometryCacheComponent* GetGeometryCacheComponent();
}; // Size: 0x250
#pragma pack(pop)
