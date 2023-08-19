#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FAkBoolPropertyToControl;
#pragma pack(push, 1)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary {
public:
    static UAkItemBoolPropertiesConv* StaticClass();
    static void Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    static FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);
}; // Size: 0x28
#pragma pack(pop)
