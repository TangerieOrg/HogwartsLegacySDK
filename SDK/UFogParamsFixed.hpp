#pragma once
#include <cstdint>
#include "FFogParameters.hpp"
#include "UFogParams.hpp"
#pragma pack(push, 1)
class UFogParamsFixed : public UFogParams {
public:
    FName Name; // 0x28
    FFogParameters Parameters; // 0x30
    static UFogParamsFixed* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
