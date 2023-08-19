#include "EAREye.hpp"
#include "EARFaceBlendShape.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UARFaceGeometry.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
UARFaceGeometry* UARFaceGeometry::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARFaceGeometry");
    return (UARFaceGeometry*)res;
}
FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform"));
    struct Params_GetWorldSpaceEyeTransform {
        EAREye Eye; // 0x0
        char pad_1[0xf];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetWorldSpaceEyeTransform params{};
    params.Eye = (EAREye)Eye;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform"));
    struct Params_GetLocalSpaceEyeTransform {
        EAREye Eye; // 0x0
        char pad_1[0xf];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetLocalSpaceEyeTransform params{};
    params.Eye = (EAREye)Eye;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UARFaceGeometry::GetBlendShapes() {}
float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue"));
    struct Params_GetBlendShapeValue {
        EARFaceBlendShape BlendShape; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetBlendShapeValue params{};
    params.BlendShape = (EARFaceBlendShape)BlendShape;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
