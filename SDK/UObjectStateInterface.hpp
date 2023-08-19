#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UAkComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UObjectStateInterface : public UInterface {
public:
    static UObjectStateInterface* StaticClass();
    void SetupSfx(UAkComponent* AkComponent);
    void OnReset();
    UPrimitiveComponent* GetMainPrimitive();
    FName GetMainBone();
}; // Size: 0x28
#pragma pack(pop)
