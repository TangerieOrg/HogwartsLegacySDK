#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAkComponent;
#pragma pack(push, 1)
class UAkCallbackInfo : public UObject {
public:
    UAkComponent* AkComponent; // 0x28
    static UAkCallbackInfo* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
