#pragma once
#include <cstdint>
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_CameraBase : public UBTService {
public:
    static UBTService_CameraBase* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
