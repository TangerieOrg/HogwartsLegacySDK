#pragma once
#include <cstdint>
#include "UStencilManagerExternalControl.hpp"
#pragma pack(push, 1)
class UStencilManagerExternalControlNot : public UStencilManagerExternalControl {
public:
    UStencilManagerExternalControl* Control; // 0x28
    static UStencilManagerExternalControlNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
