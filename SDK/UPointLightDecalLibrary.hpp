#pragma once
#include <cstdint>
#include "FDecalPointLightInfo.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UPointLightComponent;
#pragma pack(push, 1)
class UPointLightDecalLibrary : public UBlueprintFunctionLibrary {
public:
    static UPointLightDecalLibrary* StaticClass();
    static FDecalPointLightInfo MakeDecalPointLightInfo(UPointLightComponent* PointLightComponent);
}; // Size: 0x28
#pragma pack(pop)
