#pragma once
#include <cstdint>
#include "UBTDecorator_CameraInputTimeout.hpp"
#pragma pack(push, 1)
class UBTDecorator_CameraActiveInputTimeout : public UBTDecorator_CameraInputTimeout {
public:
    static UBTDecorator_CameraActiveInputTimeout* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
