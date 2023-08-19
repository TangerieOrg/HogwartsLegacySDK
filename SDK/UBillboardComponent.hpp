#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UBillboardComponent : public UPrimitiveComponent {
public:
    UTexture2D* Sprite; // 0x480
    uint8_t bIsScreenSizeScaled : 1; // 0x488
    uint8_t pad_bitfield_488_1 : 7;
    char pad_489[0x3];
    float ScreenSize; // 0x48c
    float U; // 0x490
    float UL; // 0x494
    float V; // 0x498
    float VL; // 0x49c
    static UBillboardComponent* StaticClass();
    void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
    void SetSpriteAndUV(UTexture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
    void SetSprite(UTexture2D* NewSprite);
}; // Size: 0x4a0
#pragma pack(pop)
