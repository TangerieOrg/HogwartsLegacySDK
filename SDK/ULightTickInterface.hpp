#pragma once
#include <cstdint>
#include "UInterface.hpp"
class ULightComponent;
#pragma pack(push, 1)
class ULightTickInterface : public UInterface {
public:
    static ULightTickInterface* StaticClass();
    void OnExitLightTickRange(ULightComponent* LightComponent);
    void OnEnterLightTickRange(ULightComponent* LightComponent);
}; // Size: 0x28
#pragma pack(pop)
