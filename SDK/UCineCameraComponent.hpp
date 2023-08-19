#pragma once
#include <cstdint>
#include "FCameraFilmbackSettings.hpp"
#include "FCameraFocusSettings.hpp"
#include "FCameraLensSettings.hpp"
#include "FNamedFilmbackPreset.hpp"
#include "FNamedLensPreset.hpp"
#include "UCameraComponent.hpp"
#pragma pack(push, 1)
class UCineCameraComponent : public UCameraComponent {
public:
    FCameraFilmbackSettings FilmbackSettings; // 0x880
    FCameraFilmbackSettings Filmback; // 0x88c
    FCameraLensSettings LensSettings; // 0x898
    FCameraFocusSettings FocusSettings; // 0x8b0
    float CurrentFocalLength; // 0x908
    float CurrentAperture; // 0x90c
    float CurrentFocusDistance; // 0x910
    char pad_914[0xc];
    TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x920
    TArray<FNamedLensPreset> LensPresets; // 0x930
    FString DefaultFilmbackPresetName; // 0x940
    FString DefaultFilmbackPreset; // 0x950
    FString DefaultLensPresetName; // 0x960
    float DefaultLensFocalLength; // 0x970
    float DefaultLensFStop; // 0x974
    char pad_978[0x8];
    static UCineCameraComponent* StaticClass();
    void SetLensPresetByName(FString InPresetName);
    void SetFilmbackPresetByName(FString InPresetName);
    void SetCurrentFocalLength(float InFocalLength);
    float GetVerticalFieldOfView();
    static TArray<FNamedLensPreset> GetLensPresetsCopy();
    FString GetLensPresetName();
    float GetHorizontalFieldOfView();
    static TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    FString GetFilmbackPresetName();
    FString GetDefaultFilmbackPresetName();
}; // Size: 0x980
#pragma pack(pop)
