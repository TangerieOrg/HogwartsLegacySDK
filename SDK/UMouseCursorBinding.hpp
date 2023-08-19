#pragma once
#include <cstdint>
#include "EMouseCursor\Type.hpp"
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UMouseCursorBinding : public UPropertyBinding {
public:
    static UMouseCursorBinding* StaticClass();
    EMouseCursor::Type GetValue();
}; // Size: 0x60
#pragma pack(pop)
