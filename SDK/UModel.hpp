#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UModel : public UObject {
public:
    char pad_28[0x230];
    static UModel* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
