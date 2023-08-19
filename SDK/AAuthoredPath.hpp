#pragma once
#include <cstdint>
#include "AActor.hpp"
class USplineComponent;
#pragma pack(push, 1)
class AAuthoredPath : public AActor {
public:
    USplineComponent* PathComponent; // 0x248
    FName Name; // 0x250
    float SnapDistance; // 0x258
    char pad_25c[0x4];
    static AAuthoredPath* StaticClass();
    void SnapPoints();
    void ReversePoints();
}; // Size: 0x260
#pragma pack(pop)
