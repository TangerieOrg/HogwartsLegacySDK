#pragma once
#include <cstdint>
#include "EHoudiniHandleType.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UHoudiniHandleComponent : public USceneComponent {
public:
    char pad_220[0xa8];
    EHoudiniHandleType HandleType; // 0x2c8
    char pad_2c9[0x7];
    static UHoudiniHandleComponent* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
