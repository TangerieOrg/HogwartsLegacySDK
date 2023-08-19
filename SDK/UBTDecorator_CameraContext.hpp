#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_CameraContext : public UBTDecorator {
public:
    FName Context; // 0x68
    static UBTDecorator_CameraContext* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
