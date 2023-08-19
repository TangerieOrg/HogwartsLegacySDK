#include "ABP_TransfigurationMovementStyle_Base_C.hpp"
#include "ABP_TransfigurationMovementStyle_SpawnIn_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UTimelineComponent.hpp"
void ABP_TransfigurationMovementStyle_SpawnIn_C::Place() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.Place"));
    struct Params_Place {
    }; // Size: 0x0
    Params_Place params{};
    ProcessEvent(func, &params);
}
ABP_TransfigurationMovementStyle_SpawnIn_C* ABP_TransfigurationMovementStyle_SpawnIn_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C");
    return (ABP_TransfigurationMovementStyle_SpawnIn_C*)res;
}
void ABP_TransfigurationMovementStyle_SpawnIn_C::PlaceTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.PlaceTimeline__FinishedFunc"));
    struct Params_PlaceTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_PlaceTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_SpawnIn_C::PlaceTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.PlaceTimeline__UpdateFunc"));
    struct Params_PlaceTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_PlaceTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_SpawnIn_C::ExecuteUbergraph_BP_TransfigurationMovementStyle_SpawnIn(int32_t EntryPoint, FVector CallFunc_Conv_FloatToVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue_1, FVector CallFunc_GetPreviewBounds_OutCenter, FVector CallFunc_GetPreviewBounds_OutExtent, float CallFunc_VSize_ReturnValue, FVector CallFunc_InverseTransformDirection_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_SpawnIn.BP_TransfigurationMovementStyle_SpawnIn_C.ExecuteUbergraph_BP_TransfigurationMovementStyle_SpawnIn"));
    struct Params_ExecuteUbergraph_BP_TransfigurationMovementStyle_SpawnIn {
        int32_t EntryPoint; // 0x0
        FVector CallFunc_Conv_FloatToVector_ReturnValue; // 0x4
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x10
        FVector CallFunc_BreakTransform_Location; // 0x40
        FRotator CallFunc_BreakTransform_Rotation; // 0x4c
        FVector CallFunc_BreakTransform_Scale; // 0x58
        char pad_64[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue_1; // 0x70
        FVector CallFunc_GetPreviewBounds_OutCenter; // 0xa0
        FVector CallFunc_GetPreviewBounds_OutExtent; // 0xac
        float CallFunc_VSize_ReturnValue; // 0xb8
        FVector CallFunc_InverseTransformDirection_ReturnValue; // 0xbc
        float CallFunc_MapRangeClamped_ReturnValue; // 0xc8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xcc
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0xd0
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0xd4
        FTransform CallFunc_MakeTransform_ReturnValue_2; // 0xe0
    }; // Size: 0x110
    Params_ExecuteUbergraph_BP_TransfigurationMovementStyle_SpawnIn params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Conv_FloatToVector_ReturnValue = (FVector)CallFunc_Conv_FloatToVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_MakeTransform_ReturnValue_1 = (FTransform)CallFunc_MakeTransform_ReturnValue_1;
    params.CallFunc_GetPreviewBounds_OutCenter = (FVector)CallFunc_GetPreviewBounds_OutCenter;
    params.CallFunc_GetPreviewBounds_OutExtent = (FVector)CallFunc_GetPreviewBounds_OutExtent;
    params.CallFunc_VSize_ReturnValue = (float)CallFunc_VSize_ReturnValue;
    params.CallFunc_InverseTransformDirection_ReturnValue = (FVector)CallFunc_InverseTransformDirection_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue_2 = (FTransform)CallFunc_MakeTransform_ReturnValue_2;
    ProcessEvent(func, &params);
}
