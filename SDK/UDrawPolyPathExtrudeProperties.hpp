#pragma once
#include <cstdint>
#include "EDrawPolyPathExtrudeDirection.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet {
public:
    EDrawPolyPathExtrudeDirection Direction; // 0x60
    char pad_64[0x4];
    static UDrawPolyPathExtrudeProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
