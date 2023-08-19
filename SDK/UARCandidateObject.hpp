#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UARCandidateObject : public UDataAsset {
public:
    TArray<uint8_t> CandidateObjectData; // 0x30
    FString FriendlyName; // 0x40
    FBox BoundingBox; // 0x50
    char pad_6c[0x4];
    static UARCandidateObject* StaticClass();
    void SetFriendlyName(FString NewName);
    void SetCandidateObjectData(TArray<uint8_t>& InCandidateObject);
    void SetBoundingBox(FBox& InBoundingBox);
    FString GetFriendlyName();
    TArray<uint8_t> GetCandidateObjectData();
    FBox GetBoundingBox();
}; // Size: 0x70
#pragma pack(pop)
