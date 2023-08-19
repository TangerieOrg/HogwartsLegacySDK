#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class USplineComponent;
#pragma pack(push, 1)
class UBroomSplineRecorderComponent : public USceneComponent {
public:
    char pad_220[0x28];
    FString SplineToPlay; // 0x248
    FString SplineToStop; // 0x258
    char pad_268[0x8];
    static UBroomSplineRecorderComponent* StaticClass();
    void SaveSplineToEditor(USplineComponent* SplineToSave);
    bool IsRecording();
}; // Size: 0x270
#pragma pack(pop)
