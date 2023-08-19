#pragma once
#include <cstdint>
#include "FSkyLightBasicParameters.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsSimple : public USkyLightParams {
public:
    FSkyLightBasicParameters Basic; // 0x28
    static USkyLightParamsSimple* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
