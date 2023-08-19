#pragma once
#include <cstdint>
#include "FRotator.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FSTR_Torch_LF {
    bool UseCustomTexture_20_E4C8FF6640CD9D1233F15188936F367B; // 0x0
    char pad_1[0x7];
    UTexture2D* CusomTexture_21_92F5A8A34887AC90D6FC9692DB7FE271; // 0x8
    bool UseCustomRotation_18_DE29E6D9412FFE0BBCEC1F96083E2E19; // 0x10
    char pad_11[0x3];
    FRotator CustomRotation_19_353015E2441EBE4CDBE6C186B3D192CF; // 0x14
    bool CastShadow_24_0E95C2374FF381011BD5089E490310E9; // 0x20
    char pad_21[0x3];
    float MInShadow_26_563F690E441D46B32A087C8FAB3C5F30; // 0x24
}; // Size: 0x28
#pragma pack(pop)
