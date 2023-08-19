#pragma once
#include <cstdint>
#include "EARCandidateImageOrientation.hpp"
#include "UDataAsset.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UARCandidateImage : public UDataAsset {
public:
    UTexture2D* CandidateTexture; // 0x30
    FString FriendlyName; // 0x38
    float Width; // 0x48
    float Height; // 0x4c
    EARCandidateImageOrientation Orientation; // 0x50
    char pad_51[0x7];
    static UARCandidateImage* StaticClass();
    float GetPhysicalWidth();
    float GetPhysicalHeight();
    EARCandidateImageOrientation GetOrientation();
    FString GetFriendlyName();
    UTexture2D* GetCandidateTexture();
}; // Size: 0x58
#pragma pack(pop)
