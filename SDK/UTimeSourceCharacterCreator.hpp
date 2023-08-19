#pragma once
#include <cstdint>
#include "FDateInput.hpp"
#include "UTimeSourceVolume.hpp"
#pragma pack(push, 1)
class UTimeSourceCharacterCreator : public UTimeSourceVolume {
public:
    FDateInput BaseDate; // 0x28
    float Time; // 0x34
    static UTimeSourceCharacterCreator* StaticClass();
    static void SetPreviewTime(float globalTime);
    static void PreviewDisabled(bool& Disabled);
    static void GetPreviewTime(float& globalTime);
    void EditorForceUpdate();
    static void DisablePreview();
}; // Size: 0x38
#pragma pack(pop)
