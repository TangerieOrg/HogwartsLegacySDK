#pragma once
#include <cstdint>
#include "FTrainNavRenderSplines.hpp"
#include "USplineComponent.hpp"
#pragma pack(push, 1)
class UTrainNavigationSplineComponent : public USplineComponent {
public:
    char pad_580[0x10];
    static UTrainNavigationSplineComponent* StaticClass();
}; // Size: 0x590
#pragma pack(pop)
