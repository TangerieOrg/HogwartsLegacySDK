#pragma once
#include <cstdint>
#include "FRemoteControlInterceptionFunctionParamStruct.hpp"
#include "FRemoteControlInterceptionTestStruct.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class URemoteControlInterceptionTestObject : public UObject {
public:
    FRemoteControlInterceptionTestStruct CustomStruct; // 0x28
    char pad_2c[0x4];
    FRemoteControlInterceptionFunctionParamStruct FunctionParamStruct; // 0x30
    static URemoteControlInterceptionTestObject* StaticClass();
    FRemoteControlInterceptionFunctionParamStruct TestFunction(FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor);
}; // Size: 0x58
#pragma pack(pop)
