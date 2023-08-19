#pragma once
#include <cstdint>
#include "UMaterialSwapInfoObjectBase.hpp"
#pragma pack(push, 1)
class UMaterialSwapInfoObject : public UMaterialSwapInfoObjectBase {
public:
    static UMaterialSwapInfoObject* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
