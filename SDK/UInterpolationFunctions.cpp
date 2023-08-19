#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UInterpolationFunctions.hpp"
UInterpolationFunctions* UInterpolationFunctions::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.InterpolationFunctions");
    return (UInterpolationFunctions*)res;
}
FTransform UInterpolationFunctions::SmoothBlendTransforms(FTransform A, FTransform B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.SmoothBlendTransforms"));
    struct Params_SmoothBlendTransforms {
        FTransform A; // 0x0
        FTransform B; // 0x30
        float Blend; // 0x60
        char pad_64[0xc];
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_SmoothBlendTransforms params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FRotator UInterpolationFunctions::SmoothBlendRotators(FRotator A, FRotator B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.SmoothBlendRotators"));
    struct Params_SmoothBlendRotators {
        FRotator A; // 0x0
        FRotator B; // 0xc
        float Blend; // 0x18
        FRotator ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_SmoothBlendRotators params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
float UInterpolationFunctions::SmoothStep(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.SmoothStep"));
    struct Params_SmoothStep {
        float Value; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_SmoothStep params{};
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UInterpolationFunctions::SmoothBlendVectors(FVector A, FVector B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.SmoothBlendVectors"));
    struct Params_SmoothBlendVectors {
        FVector A; // 0x0
        FVector B; // 0xc
        float Blend; // 0x18
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_SmoothBlendVectors params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UInterpolationFunctions::LinearStep(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.LinearStep"));
    struct Params_LinearStep {
        float Value; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_LinearStep params{};
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UInterpolationFunctions::SmoothBlendScalars(float A, float B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.SmoothBlendScalars"));
    struct Params_SmoothBlendScalars {
        float A; // 0x0
        float B; // 0x4
        float Blend; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_SmoothBlendScalars params{};
    params.A = (float)A;
    params.B = (float)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FQuat UInterpolationFunctions::SmoothBlendQuaternions(FQuat A, FQuat B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.SmoothBlendQuaternions"));
    struct Params_SmoothBlendQuaternions {
        FQuat A; // 0x0
        FQuat B; // 0x10
        float Blend; // 0x20
        char pad_24[0xc];
        FQuat ReturnValue; // 0x30
    }; // Size: 0x40
    Params_SmoothBlendQuaternions params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
FVector UInterpolationFunctions::LinearBlendVectors(FVector A, FVector B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.LinearBlendVectors"));
    struct Params_LinearBlendVectors {
        FVector A; // 0x0
        FVector B; // 0xc
        float Blend; // 0x18
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_LinearBlendVectors params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTransform UInterpolationFunctions::LinearBlendTransforms(FTransform A, FTransform B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.LinearBlendTransforms"));
    struct Params_LinearBlendTransforms {
        FTransform A; // 0x0
        FTransform B; // 0x30
        float Blend; // 0x60
        char pad_64[0xc];
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_LinearBlendTransforms params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
float UInterpolationFunctions::BoundedEaseOutStep(float step_min, float step_max, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.BoundedEaseOutStep"));
    struct Params_BoundedEaseOutStep {
        float step_min; // 0x0
        float step_max; // 0x4
        float Value; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_BoundedEaseOutStep params{};
    params.step_min = (float)step_min;
    params.step_max = (float)step_max;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UInterpolationFunctions::LinearBlendScalars(float A, float B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.LinearBlendScalars"));
    struct Params_LinearBlendScalars {
        float A; // 0x0
        float B; // 0x4
        float Blend; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_LinearBlendScalars params{};
    params.A = (float)A;
    params.B = (float)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UInterpolationFunctions::LinearBlendRotators(FRotator A, FRotator B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.LinearBlendRotators"));
    struct Params_LinearBlendRotators {
        FRotator A; // 0x0
        FRotator B; // 0xc
        float Blend; // 0x18
        FRotator ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_LinearBlendRotators params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FQuat UInterpolationFunctions::LinearBlendQuaternions(FQuat A, FQuat B, float Blend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.LinearBlendQuaternions"));
    struct Params_LinearBlendQuaternions {
        FQuat A; // 0x0
        FQuat B; // 0x10
        float Blend; // 0x20
        char pad_24[0xc];
        FQuat ReturnValue; // 0x30
    }; // Size: 0x40
    Params_LinearBlendQuaternions params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    params.Blend = (float)Blend;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
float UInterpolationFunctions::EaseOutStep(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.EaseOutStep"));
    struct Params_EaseOutStep {
        float Value; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_EaseOutStep params{};
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UInterpolationFunctions::EaseInStep(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.EaseInStep"));
    struct Params_EaseInStep {
        float Value; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_EaseInStep params{};
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UInterpolationFunctions::BoundedSmoothStep(float step_min, float step_max, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.BoundedSmoothStep"));
    struct Params_BoundedSmoothStep {
        float step_min; // 0x0
        float step_max; // 0x4
        float Value; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_BoundedSmoothStep params{};
    params.step_min = (float)step_min;
    params.step_max = (float)step_max;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UInterpolationFunctions::ApproachVector(FVector current_value, FVector desired_value, float approach_rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachVector"));
    struct Params_ApproachVector {
        FVector current_value; // 0x0
        FVector desired_value; // 0xc
        float approach_rate; // 0x18
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_ApproachVector params{};
    params.current_value = (FVector)current_value;
    params.desired_value = (FVector)desired_value;
    params.approach_rate = (float)approach_rate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UInterpolationFunctions::BoundedLinearStep(float step_min, float step_max, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.BoundedLinearStep"));
    struct Params_BoundedLinearStep {
        float step_min; // 0x0
        float step_max; // 0x4
        float Value; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_BoundedLinearStep params{};
    params.step_min = (float)step_min;
    params.step_max = (float)step_max;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UInterpolationFunctions::BoundedEaseInStep(float step_min, float step_max, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.BoundedEaseInStep"));
    struct Params_BoundedEaseInStep {
        float step_min; // 0x0
        float step_max; // 0x4
        float Value; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_BoundedEaseInStep params{};
    params.step_min = (float)step_min;
    params.step_max = (float)step_max;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UInterpolationFunctions::AssymetricallyApproachVectorWithClampedVelocity(FVector current_value, FVector desired_value, float max_positive_delta, float max_negative_delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.AssymetricallyApproachVectorWithClampedVelocity"));
    struct Params_AssymetricallyApproachVectorWithClampedVelocity {
        FVector current_value; // 0x0
        FVector desired_value; // 0xc
        float max_positive_delta; // 0x18
        float max_negative_delta; // 0x1c
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_AssymetricallyApproachVectorWithClampedVelocity params{};
    params.current_value = (FVector)current_value;
    params.desired_value = (FVector)desired_value;
    params.max_positive_delta = (float)max_positive_delta;
    params.max_negative_delta = (float)max_negative_delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UInterpolationFunctions::AssymetricallyApproachVector(FVector current_value, FVector desired_value, float positive_approach_rate, float negative_approach_rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.AssymetricallyApproachVector"));
    struct Params_AssymetricallyApproachVector {
        FVector current_value; // 0x0
        FVector desired_value; // 0xc
        float positive_approach_rate; // 0x18
        float negative_approach_rate; // 0x1c
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_AssymetricallyApproachVector params{};
    params.current_value = (FVector)current_value;
    params.desired_value = (FVector)desired_value;
    params.positive_approach_rate = (float)positive_approach_rate;
    params.negative_approach_rate = (float)negative_approach_rate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UInterpolationFunctions::AssymetricallyApproachScalarWithClampedVelocity(float current_value, float desired_value, float max_positive_delta, float max_negative_delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.AssymetricallyApproachScalarWithClampedVelocity"));
    struct Params_AssymetricallyApproachScalarWithClampedVelocity {
        float current_value; // 0x0
        float desired_value; // 0x4
        float max_positive_delta; // 0x8
        float max_negative_delta; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_AssymetricallyApproachScalarWithClampedVelocity params{};
    params.current_value = (float)current_value;
    params.desired_value = (float)desired_value;
    params.max_positive_delta = (float)max_positive_delta;
    params.max_negative_delta = (float)max_negative_delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UInterpolationFunctions::AssymetricallyApproachScalar(float current_value, float desired_value, float negative_approach_rate, float positive_approach_rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.AssymetricallyApproachScalar"));
    struct Params_AssymetricallyApproachScalar {
        float current_value; // 0x0
        float desired_value; // 0x4
        float negative_approach_rate; // 0x8
        float positive_approach_rate; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_AssymetricallyApproachScalar params{};
    params.current_value = (float)current_value;
    params.desired_value = (float)desired_value;
    params.negative_approach_rate = (float)negative_approach_rate;
    params.positive_approach_rate = (float)positive_approach_rate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UInterpolationFunctions::ApproachScalar(float current_value, float desired_value, float approach_rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachScalar"));
    struct Params_ApproachScalar {
        float current_value; // 0x0
        float desired_value; // 0x4
        float approach_rate; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_ApproachScalar params{};
    params.current_value = (float)current_value;
    params.desired_value = (float)desired_value;
    params.approach_rate = (float)approach_rate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UInterpolationFunctions::ApproachVectorWithClampedVelocity(FVector current_value, FVector desired_value, float max_delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachVectorWithClampedVelocity"));
    struct Params_ApproachVectorWithClampedVelocity {
        FVector current_value; // 0x0
        FVector desired_value; // 0xc
        float max_delta; // 0x18
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_ApproachVectorWithClampedVelocity params{};
    params.current_value = (FVector)current_value;
    params.desired_value = (FVector)desired_value;
    params.max_delta = (float)max_delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTransform UInterpolationFunctions::ApproachTransformWithClampedVelocity(FTransform current_value, FTransform desired_value, float max_rotation_delta, float max_translation_delta, float max_scale_delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachTransformWithClampedVelocity"));
    struct Params_ApproachTransformWithClampedVelocity {
        FTransform current_value; // 0x0
        FTransform desired_value; // 0x30
        float max_rotation_delta; // 0x60
        float max_translation_delta; // 0x64
        float max_scale_delta; // 0x68
        char pad_6c[0x4];
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_ApproachTransformWithClampedVelocity params{};
    params.current_value = (FTransform)current_value;
    params.desired_value = (FTransform)desired_value;
    params.max_rotation_delta = (float)max_rotation_delta;
    params.max_translation_delta = (float)max_translation_delta;
    params.max_scale_delta = (float)max_scale_delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FTransform UInterpolationFunctions::ApproachTransform(FTransform current_value, FTransform desired_value, float rotation_approach_rate, float translation_approach_rate, float scale_approach_rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachTransform"));
    struct Params_ApproachTransform {
        FTransform current_value; // 0x0
        FTransform desired_value; // 0x30
        float rotation_approach_rate; // 0x60
        float translation_approach_rate; // 0x64
        float scale_approach_rate; // 0x68
        char pad_6c[0x4];
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_ApproachTransform params{};
    params.current_value = (FTransform)current_value;
    params.desired_value = (FTransform)desired_value;
    params.rotation_approach_rate = (float)rotation_approach_rate;
    params.translation_approach_rate = (float)translation_approach_rate;
    params.scale_approach_rate = (float)scale_approach_rate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
float UInterpolationFunctions::ApproachScalarWithClampedVelocity(float current_value, float desired_value, float max_delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachScalarWithClampedVelocity"));
    struct Params_ApproachScalarWithClampedVelocity {
        float current_value; // 0x0
        float desired_value; // 0x4
        float max_delta; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_ApproachScalarWithClampedVelocity params{};
    params.current_value = (float)current_value;
    params.desired_value = (float)desired_value;
    params.max_delta = (float)max_delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UInterpolationFunctions::ApproachRotatorWithClampedVelocity(FRotator current_value, FRotator desired_value, float max_delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachRotatorWithClampedVelocity"));
    struct Params_ApproachRotatorWithClampedVelocity {
        FRotator current_value; // 0x0
        FRotator desired_value; // 0xc
        float max_delta; // 0x18
        FRotator ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_ApproachRotatorWithClampedVelocity params{};
    params.current_value = (FRotator)current_value;
    params.desired_value = (FRotator)desired_value;
    params.max_delta = (float)max_delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FRotator UInterpolationFunctions::ApproachRotator(FRotator current_value, FRotator desired_value, float approach_rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachRotator"));
    struct Params_ApproachRotator {
        FRotator current_value; // 0x0
        FRotator desired_value; // 0xc
        float approach_rate; // 0x18
        FRotator ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_ApproachRotator params{};
    params.current_value = (FRotator)current_value;
    params.desired_value = (FRotator)desired_value;
    params.approach_rate = (float)approach_rate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FQuat UInterpolationFunctions::ApproachQuaternionWithClampedVelocity(FQuat current_value, FQuat desired_value, float max_delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachQuaternionWithClampedVelocity"));
    struct Params_ApproachQuaternionWithClampedVelocity {
        FQuat current_value; // 0x0
        FQuat desired_value; // 0x10
        float max_delta; // 0x20
        char pad_24[0xc];
        FQuat ReturnValue; // 0x30
    }; // Size: 0x40
    Params_ApproachQuaternionWithClampedVelocity params{};
    params.current_value = (FQuat)current_value;
    params.desired_value = (FQuat)desired_value;
    params.max_delta = (float)max_delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
FQuat UInterpolationFunctions::ApproachQuaternion(FQuat current_value, FQuat desired_value, float approach_rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.InterpolationFunctions.ApproachQuaternion"));
    struct Params_ApproachQuaternion {
        FQuat current_value; // 0x0
        FQuat desired_value; // 0x10
        float approach_rate; // 0x20
        char pad_24[0xc];
        FQuat ReturnValue; // 0x30
    }; // Size: 0x40
    Params_ApproachQuaternion params{};
    params.current_value = (FQuat)current_value;
    params.desired_value = (FQuat)desired_value;
    params.approach_rate = (float)approach_rate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
