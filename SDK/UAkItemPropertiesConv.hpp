#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FAkPropertyToControl;
#pragma pack(push, 1)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary {
public:
    static UAkItemPropertiesConv* StaticClass();
    static void Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);
    static FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);
}; // Size: 0x28
#pragma pack(pop)
