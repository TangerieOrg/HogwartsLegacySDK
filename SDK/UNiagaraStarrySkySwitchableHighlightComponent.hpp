#pragma once
#include <cstdint>
#include "ESwitchableStarrySkyMode.hpp"
#include "FStarrySkyHighlightParameters.hpp"
#include "FStarrySkyHighlights.hpp"
#include "UNiagaraStarrySkyComponent.hpp"
class UStarCatalog;
class UNiagaraSystem;
class UObject;
#pragma pack(push, 1)
class UNiagaraStarrySkySwitchableHighlightComponent : public UNiagaraStarrySkyComponent {
public:
    UStarCatalog* StarCatalog; // 0xe8
    FStarrySkyHighlights CurrentHighlights; // 0xf0
    float HighlightModulate; // 0x110
    FStarrySkyHighlightParameters CurrentHighlightParameters; // 0x114
    char pad_12c[0x4];
    UNiagaraSystem* HighlightStarrySkySystem; // 0x130
    bool bUseCameraAsOriginForHighlighting; // 0x138
    ESwitchableStarrySkyMode CurrentMode; // 0x139
    bool bHighlightForDefocus; // 0x13a
    char pad_13b[0x5];
    static UNiagaraStarrySkySwitchableHighlightComponent* StaticClass();
    static void SupportedHighlightConstellations(int32_t& Constellations);
    static bool StarrySkyStartHighlightings(UObject* WorldContextObject, TArray<FName> HighlightConstellationNames, FName HighlightStarName, float InitialModulate);
    static bool StarrySkyStartHighlighting(UObject* WorldContextObject, FName HighlightConstellationName, FName HighlightStarName, float InitialModulate);
    static bool StarrySkySetHighlightParameters(UObject* WorldContextObject, FStarrySkyHighlightParameters Parameters);
    static bool StarrySkySetHighlightModulate(UObject* WorldContextObject, float Modulate);
    static bool StarrySkyEndHighlighting(UObject* WorldContextObject);
    void SetMode(ESwitchableStarrySkyMode Mode);
    void SetHighlightSystem(UNiagaraSystem* NiagaraSystem);
    void SetHighlightStar(FName StarName);
    void SetHighlights(TArray<FName> ConstellationNames, FName StarName);
    void SetHighlightConstellations(TArray<FName> ConstellationNames);
    void SetHighlightConstellation(FName ConstellationName);
    void SetHighlight(FName ConstellationName, FName StarName);
    void LoadHighlightSystem();
    void IsHighlightLoadedSystem();
    void GetMode(ESwitchableStarrySkyMode& Mode);
    void ClearHighlights();
    void ClearHighlightConstellations();
}; // Size: 0x140
#pragma pack(pop)
