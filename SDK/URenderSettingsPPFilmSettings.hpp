#pragma once
#include <cstdint>
#include "FRenderSettingsPPFilm.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPFilmSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPFilm> Settings; // 0x30
    static URenderSettingsPPFilmSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
