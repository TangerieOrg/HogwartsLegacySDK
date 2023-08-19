#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRenderSettingsPPFilmAdvanced.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPFilm {
    uint8_t bOverride_FilmSlope : 1; // 0x0
    uint8_t bOverride_FilmToe : 1; // 0x0
    uint8_t bOverride_FilmShoulder : 1; // 0x0
    uint8_t bOverride_FilmBlackClip : 1; // 0x0
    uint8_t bOverride_FilmWhiteClip : 1; // 0x0
    uint8_t bOverride_FilmWhitePoint : 1; // 0x0
    uint8_t bOverride_FilmSaturation : 1; // 0x0
    uint8_t bOverride_FilmContrast : 1; // 0x0
    char pad_1[0x3];
    FName Name; // 0x4
    float FilmSlope; // 0xc
    float FilmToe; // 0x10
    float FilmShoulder; // 0x14
    float FilmBlackClip; // 0x18
    float FilmWhiteClip; // 0x1c
    FLinearColor FilmWhitePoint; // 0x20
    float FilmSaturation; // 0x30
    float FilmContrast; // 0x34
    FRenderSettingsPPFilmAdvanced Advanced; // 0x38
}; // Size: 0x90
#pragma pack(pop)
