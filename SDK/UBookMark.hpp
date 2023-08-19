#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBookmarkBase.hpp"
#pragma pack(push, 1)
class UBookMark : public UBookmarkBase {
public:
    FVector Location; // 0x28
    FRotator Rotation; // 0x34
    TArray<FString> HiddenLevels; // 0x40
    static UBookMark* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
