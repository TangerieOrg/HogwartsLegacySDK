#pragma once
#include <cstdint>
#include "UARTrackedGeometry.hpp"
class UARCandidateObject;
#pragma pack(push, 1)
class UARTrackedObject : public UARTrackedGeometry {
public:
    static UARTrackedObject* StaticClass();
    UARCandidateObject* GetDetectedObject();
}; // Size: 0x100
#pragma pack(pop)
