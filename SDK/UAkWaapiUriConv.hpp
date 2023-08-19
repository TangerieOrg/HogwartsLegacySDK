#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FAkWaapiUri;
#pragma pack(push, 1)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary {
public:
    static UAkWaapiUriConv* StaticClass();
    static void Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);
    static FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);
}; // Size: 0x28
#pragma pack(pop)
