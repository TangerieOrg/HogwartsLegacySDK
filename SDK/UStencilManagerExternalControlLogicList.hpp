#pragma once
#include <cstdint>
#include "UStencilManagerExternalControl.hpp"
#pragma pack(push, 1)
class UStencilManagerExternalControlLogicList : public UStencilManagerExternalControl {
public:
    TArray<UStencilManagerExternalControl*> Controls; // 0x28
    static UStencilManagerExternalControlLogicList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
