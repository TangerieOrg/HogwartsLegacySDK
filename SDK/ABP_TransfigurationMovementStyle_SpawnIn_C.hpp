#pragma once
#include <cstdint>
#include "ABP_TransfigurationMovementStyle_Base_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UTimelineComponent;
#pragma pack(push, 1)
class ABP_TransfigurationMovementStyle_SpawnIn_C : public ABP_TransfigurationMovementStyle_Base_C {
public:
    float PlaceTimeline_Scale_16644A4A4AD78EA0DD9B12BF839430F7; // 0x5f0
    float PlaceTimeline_DistanceFromSurface_16644A4A4AD78EA0DD9B12BF839430F7; // 0x5f4
    ETimelineDirection::Type PlaceTimeline__Direction_16644A4A4AD78EA0DD9B12BF839430F7; // 0x5f8
    char pad_5f9[0x7];
    UTimelineComponent* PlaceTimeline; // 0x600
    float LevitationDistance; // 0x608
    char pad_60c[0x4];
    static ABP_TransfigurationMovementStyle_SpawnIn_C* StaticClass();
    void PlaceTimeline__FinishedFunc();
    void PlaceTimeline__UpdateFunc();
    void Place();
    void ExecuteUbergraph_BP_TransfigurationMovementStyle_SpawnIn(int32_t EntryPoint, FVector CallFunc_Conv_FloatToVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue_1, FVector CallFunc_GetPreviewBounds_OutCenter, FVector CallFunc_GetPreviewBounds_OutExtent, float CallFunc_VSize_ReturnValue, FVector CallFunc_InverseTransformDirection_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_2);
}; // Size: 0x610
#pragma pack(pop)
