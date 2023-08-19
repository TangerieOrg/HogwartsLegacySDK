#pragma once
#include <cstdint>
#include "UWindGustController.hpp"
#pragma pack(push, 1)
class UWindGustControllerList : public UWindGustController {
public:
    TArray<UWindGustController*> GustControllers; // 0x28
    static UWindGustControllerList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
