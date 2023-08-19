#pragma once
#include <cstdint>
#include "FMyPluginStruct.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMyPluginObject : public UObject {
public:
    FMyPluginStruct MyStruct; // 0x28
    static UMyPluginObject* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
