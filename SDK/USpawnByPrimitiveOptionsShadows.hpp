#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsShadows : public USpawnByPrimitiveOptions {
public:
    int32_t ShadowMinLOD; // 0x28
    uint8_t bCastShadow : 1; // 0x2c
    uint8_t bCastDynamicShadow : 1; // 0x2c
    uint8_t bCastStaticShadow : 1; // 0x2c
    uint8_t bCastVolumetricTranslucentShadow : 1; // 0x2c
    uint8_t bCastContactShadow : 1; // 0x2c
    uint8_t bSelfShadowOnly : 1; // 0x2c
    uint8_t bCastFarShadow : 1; // 0x2c
    uint8_t bCastInsetShadow : 1; // 0x2c
    uint8_t bCastCinematicShadow : 1; // 0x2d
    uint8_t bCastHiddenShadow : 1; // 0x2d
    uint8_t bCastShadowAsTwoSided : 1; // 0x2d
    uint8_t pad_bitfield_2d_3 : 5;
    char pad_2e[0x2];
    static USpawnByPrimitiveOptionsShadows* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
