#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_CurrentCamera : public UTransformProvider {
public:
    static UTransform_CurrentCamera* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
