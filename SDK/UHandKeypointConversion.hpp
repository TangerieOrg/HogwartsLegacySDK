#pragma once
#include <cstdint>
#include "EHandKeypoint.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UHandKeypointConversion : public UBlueprintFunctionLibrary {
public:
    static UHandKeypointConversion* StaticClass();
    static int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);
}; // Size: 0x28
#pragma pack(pop)
