#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "FVector2D.hpp"
class UObject;
#pragma pack(push, 1)
struct FEditedDocumentInfo {
    FSoftObjectPath EditedObjectPath; // 0x0
    FVector2D SavedViewOffset; // 0x18
    float SavedZoomAmount; // 0x20
    char pad_24[0x4];
    UObject* EditedObject; // 0x28
}; // Size: 0x30
#pragma pack(pop)
