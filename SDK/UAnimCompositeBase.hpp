#pragma once
#include <cstdint>
#include "UAnimSequenceBase.hpp"
#pragma pack(push, 1)
class UAnimCompositeBase : public UAnimSequenceBase {
public:
    static UAnimCompositeBase* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
