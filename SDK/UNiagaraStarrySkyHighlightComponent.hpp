#pragma once
#include <cstdint>
#include "FStarrySkyHighlightParameters.hpp"
#include "FStarrySkyHighlights.hpp"
#include "UNiagaraStarrySkyComponent.hpp"
class UStarCatalog;
#pragma pack(push, 1)
class UNiagaraStarrySkyHighlightComponent : public UNiagaraStarrySkyComponent {
public:
    UStarCatalog* StarCatalog; // 0xe8
    FStarrySkyHighlights Highlights; // 0xf0
    float HighlightModulate; // 0x110
    FStarrySkyHighlightParameters HighlightParameters; // 0x114
    char pad_12c[0x4];
    static UNiagaraStarrySkyHighlightComponent* StaticClass();
    static void SupportedHighlightConstellations(int32_t& Constellations);
    void SetHighlightStar(FName StarName);
    void SetHighlights(TArray<FName> ConstellationNames, FName StarName);
    void SetHighlightConstellations(TArray<FName> ConstellationNames);
    void SetHighlightConstellation(FName ConstellationName);
    void SetHighlight(FName ConstellationName, FName StarName);
    void ClearHighlights();
    void ClearHighlightConstellations();
}; // Size: 0x130
#pragma pack(pop)
