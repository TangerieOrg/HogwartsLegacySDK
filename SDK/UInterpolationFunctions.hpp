#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UInterpolationFunctions : public UBlueprintFunctionLibrary {
public:
    static UInterpolationFunctions* StaticClass();
    static float SmoothStep(float Value);
    static FVector SmoothBlendVectors(FVector A, FVector B, float Blend);
    static FTransform SmoothBlendTransforms(FTransform A, FTransform B, float Blend);
    static float SmoothBlendScalars(float A, float B, float Blend);
    static FRotator SmoothBlendRotators(FRotator A, FRotator B, float Blend);
    static FQuat SmoothBlendQuaternions(FQuat A, FQuat B, float Blend);
    static float LinearStep(float Value);
    static FVector LinearBlendVectors(FVector A, FVector B, float Blend);
    static FTransform LinearBlendTransforms(FTransform A, FTransform B, float Blend);
    static float LinearBlendScalars(float A, float B, float Blend);
    static FRotator LinearBlendRotators(FRotator A, FRotator B, float Blend);
    static FQuat LinearBlendQuaternions(FQuat A, FQuat B, float Blend);
    static float EaseOutStep(float Value);
    static float EaseInStep(float Value);
    static float BoundedSmoothStep(float step_min, float step_max, float Value);
    static float BoundedLinearStep(float step_min, float step_max, float Value);
    static float BoundedEaseOutStep(float step_min, float step_max, float Value);
    static float BoundedEaseInStep(float step_min, float step_max, float Value);
    static FVector AssymetricallyApproachVectorWithClampedVelocity(FVector current_value, FVector desired_value, float max_positive_delta, float max_negative_delta);
    static FVector AssymetricallyApproachVector(FVector current_value, FVector desired_value, float positive_approach_rate, float negative_approach_rate);
    static float AssymetricallyApproachScalarWithClampedVelocity(float current_value, float desired_value, float max_positive_delta, float max_negative_delta);
    static float AssymetricallyApproachScalar(float current_value, float desired_value, float negative_approach_rate, float positive_approach_rate);
    static FVector ApproachVectorWithClampedVelocity(FVector current_value, FVector desired_value, float max_delta);
    static FVector ApproachVector(FVector current_value, FVector desired_value, float approach_rate);
    static FTransform ApproachTransformWithClampedVelocity(FTransform current_value, FTransform desired_value, float max_rotation_delta, float max_translation_delta, float max_scale_delta);
    static FTransform ApproachTransform(FTransform current_value, FTransform desired_value, float rotation_approach_rate, float translation_approach_rate, float scale_approach_rate);
    static float ApproachScalarWithClampedVelocity(float current_value, float desired_value, float max_delta);
    static float ApproachScalar(float current_value, float desired_value, float approach_rate);
    static FRotator ApproachRotatorWithClampedVelocity(FRotator current_value, FRotator desired_value, float max_delta);
    static FRotator ApproachRotator(FRotator current_value, FRotator desired_value, float approach_rate);
    static FQuat ApproachQuaternionWithClampedVelocity(FQuat current_value, FQuat desired_value, float max_delta);
    static FQuat ApproachQuaternion(FQuat current_value, FQuat desired_value, float approach_rate);
}; // Size: 0x28
#pragma pack(pop)
