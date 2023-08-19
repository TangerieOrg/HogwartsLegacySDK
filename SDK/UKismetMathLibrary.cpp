#include "EAxis\Type.hpp"
#include "EEasingFunc\Type.hpp"
#include "ELerpInterpolationMode\Type.hpp"
#include "EMatrixColumns\Type.hpp"
#include "FBox.hpp"
#include "FBox2D.hpp"
#include "FColor.hpp"
#include "FDateTime.hpp"
#include "FFloatSpringState.hpp"
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FIntPoint.hpp"
#include "FIntVector.hpp"
#include "FLinearColor.hpp"
#include "FMatrix.hpp"
#include "FPlane.hpp"
#include "FQualifiedFrameTime.hpp"
#include "FQuat.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FTimespan.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "FVectorSpringState.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UKismetMathLibrary.hpp"
#include "UObject.hpp"
UKismetMathLibrary* UKismetMathLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetMathLibrary");
    return (UKismetMathLibrary*)res;
}
FVector UKismetMathLibrary::Vector_ClampSizeMax(FVector A, float Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ClampSizeMax"));
    struct Params_Vector_ClampSizeMax {
        FVector A; // 0x0
        float Max; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Vector_ClampSizeMax params{};
    params.A = (FVector)A;
    params.Max = (float)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Matrix_GetColumn(FMatrix& M, EMatrixColumns::Type Column) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetColumn"));
    struct Params_Matrix_GetColumn {
        FMatrix M; // 0x0
        EMatrixColumns::Type Column; // 0x40
        char pad_41[0x3];
        FVector ReturnValue; // 0x44
    }; // Size: 0x50
    Params_Matrix_GetColumn params{};
    params.M = (FMatrix)M;
    params.Column = (EMatrixColumns::Type)Column;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector)params.ReturnValue;
}
int32_t UKismetMathLibrary::Xor_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Xor_IntInt"));
    struct Params_Xor_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Xor_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetMathLibrary::GreaterEqual_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GreaterEqual_TimespanTimespan"));
    struct Params_GreaterEqual_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GreaterEqual_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_ClampSizeMax2D(FVector A, float Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ClampSizeMax2D"));
    struct Params_Vector_ClampSizeMax2D {
        FVector A; // 0x0
        float Max; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Vector_ClampSizeMax2D params{};
    params.A = (FVector)A;
    params.Max = (float)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int64_t UKismetMathLibrary::Xor_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Xor_Int64Int64"));
    struct Params_Xor_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Xor_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomPointInBoundingBox(FVector Origin, FVector BoxExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomPointInBoundingBox"));
    struct Params_RandomPointInBoundingBox {
        FVector Origin; // 0x0
        FVector BoxExtent; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_RandomPointInBoundingBox params{};
    params.Origin = (FVector)Origin;
    params.BoxExtent = (FVector)BoxExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t UKismetMathLibrary::Wrap(int32_t Value, int32_t Min, int32_t Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Wrap"));
    struct Params_Wrap {
        int32_t Value; // 0x0
        int32_t Min; // 0x4
        int32_t Max; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Wrap params{};
    params.Value = (int32_t)Value;
    params.Min = (int32_t)Min;
    params.Max = (int32_t)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::VSizeXYSquared(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VSizeXYSquared"));
    struct Params_VSizeXYSquared {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_VSizeXYSquared params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_GetProjection(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_GetProjection"));
    struct Params_Vector_GetProjection {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Vector_GetProjection params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Conv_ByteToFloat(uint8_t InByte) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_ByteToFloat"));
    struct Params_Conv_ByteToFloat {
        uint8_t InByte; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Conv_ByteToFloat params{};
    params.InByte = (uint8_t)InByte;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::DaysInMonth(int32_t Year, int32_t Month) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DaysInMonth"));
    struct Params_DaysInMonth {
        int32_t Year; // 0x0
        int32_t Month; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_DaysInMonth params{};
    params.Year = (int32_t)Year;
    params.Month = (int32_t)Month;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FRotator UKismetMathLibrary::Matrix_GetRotator(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetRotator"));
    struct Params_Matrix_GetRotator {
        FMatrix M; // 0x0
        FRotator ReturnValue; // 0x40
    }; // Size: 0x4c
    Params_Matrix_GetRotator params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::Conv_IntVectorToVector(FIntVector& InIntVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_IntVectorToVector"));
    struct Params_Conv_IntVectorToVector {
        FIntVector InIntVector; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Conv_IntVectorToVector params{};
    params.InIntVector = (FIntVector)InIntVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InIntVector = params.InIntVector;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::WeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.WeightedMovingAverage_FVector"));
    struct Params_WeightedMovingAverage_FVector {
        FVector CurrentSample; // 0x0
        FVector PreviousSample; // 0xc
        float weight; // 0x18
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_WeightedMovingAverage_FVector params{};
    params.CurrentSample = (FVector)CurrentSample;
    params.PreviousSample = (FVector)PreviousSample;
    params.weight = (float)weight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t UKismetMathLibrary::Round(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Round"));
    struct Params_Round {
        float A; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Round params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FRotator UKismetMathLibrary::WeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.WeightedMovingAverage_FRotator"));
    struct Params_WeightedMovingAverage_FRotator {
        FRotator CurrentSample; // 0x0
        FRotator PreviousSample; // 0xc
        float weight; // 0x18
        FRotator ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_WeightedMovingAverage_FRotator params{};
    params.CurrentSample = (FRotator)CurrentSample;
    params.PreviousSample = (FRotator)PreviousSample;
    params.weight = (float)weight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::Multiply_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_VectorVector"));
    struct Params_Multiply_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Multiply_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::GreaterEqual_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GreaterEqual_FloatFloat"));
    struct Params_GreaterEqual_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GreaterEqual_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Less_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Less_ByteByte"));
    struct Params_Less_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Less_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::Vector_Distance2D(FVector v1, FVector v2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Distance2D"));
    struct Params_Vector_Distance2D {
        FVector v1; // 0x0
        FVector v2; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Vector_Distance2D params{};
    params.v1 = (FVector)v1;
    params.v2 = (FVector)v2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::IntPoint_Left() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IntPoint_Left"));
    struct Params_IntPoint_Left {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_IntPoint_Left params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
void UKismetMathLibrary::BreakTimespan(FTimespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& Milliseconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakTimespan"));
    struct Params_BreakTimespan {
        FTimespan InTimespan; // 0x0
        int32_t Days; // 0x8
        int32_t Hours; // 0xc
        int32_t Minutes; // 0x10
        int32_t Seconds; // 0x14
        int32_t Milliseconds; // 0x18
    }; // Size: 0x1c
    Params_BreakTimespan params{};
    params.InTimespan = (FTimespan)InTimespan;
    params.Days = (int32_t)Days;
    params.Hours = (int32_t)Hours;
    params.Minutes = (int32_t)Minutes;
    params.Seconds = (int32_t)Seconds;
    params.Milliseconds = (int32_t)Milliseconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Days = params.Days;
    Hours = params.Hours;
    Minutes = params.Minutes;
    Seconds = params.Seconds;
    Milliseconds = params.Milliseconds;
}
FVector UKismetMathLibrary::Vector_GetSignVector(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_GetSignVector"));
    struct Params_Vector_GetSignVector {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Vector_GetSignVector params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.WeightedMovingAverage_Float"));
    struct Params_WeightedMovingAverage_Float {
        float CurrentSample; // 0x0
        float PreviousSample; // 0x4
        float weight; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_WeightedMovingAverage_Float params{};
    params.CurrentSample = (float)CurrentSample;
    params.PreviousSample = (float)PreviousSample;
    params.weight = (float)weight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromY(FVector& Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromY"));
    struct Params_MakeRotFromY {
        FVector Y; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_MakeRotFromY params{};
    params.Y = (FVector)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Y = params.Y;
    return (FRotator)params.ReturnValue;
}
float UKismetMathLibrary::VSize(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VSize"));
    struct Params_VSize {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_VSize params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Fraction(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Fraction"));
    struct Params_Fraction {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Fraction params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::VSizeXY(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VSizeXY"));
    struct Params_VSizeXY {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_VSizeXY params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Up() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Up"));
    struct Params_Vector_Up {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_Up params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::Matrix_GetUnitAxes(FMatrix& M, FVector& X, FVector& Y, FVector& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetUnitAxes"));
    struct Params_Matrix_GetUnitAxes {
        FMatrix M; // 0x0
        FVector X; // 0x40
        FVector Y; // 0x4c
        FVector Z; // 0x58
    }; // Size: 0x64
    Params_Matrix_GetUnitAxes params{};
    params.M = (FMatrix)M;
    params.X = (FVector)X;
    params.Y = (FVector)Y;
    params.Z = (FVector)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    X = params.X;
    Z = params.Z;
    Y = params.Y;
}
float UKismetMathLibrary::VSizeSquared(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VSizeSquared"));
    struct Params_VSizeSquared {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_VSizeSquared params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Add_VectorFloat(FVector A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_VectorFloat"));
    struct Params_Add_VectorFloat {
        FVector A; // 0x0
        float B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Add_VectorFloat params{};
    params.A = (FVector)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::VSize2DSquared(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VSize2DSquared"));
    struct Params_VSize2DSquared {
        FVector2D A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_VSize2DSquared params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::VSize2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VSize2D"));
    struct Params_VSize2D {
        FVector2D A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_VSize2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::Vector_IsZero(FVector& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_IsZero"));
    struct Params_Vector_IsZero {
        FVector A; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_Vector_IsZero params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Reciprocal(FVector& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Reciprocal"));
    struct Params_Vector_Reciprocal {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Vector_Reciprocal params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::VLerp(FVector A, FVector B, float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VLerp"));
    struct Params_VLerp {
        FVector A; // 0x0
        FVector B; // 0xc
        float Alpha; // 0x18
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_VLerp params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    params.Alpha = (float)Alpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Quat_SizeSquared(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_SizeSquared"));
    struct Params_Quat_SizeSquared {
        FQuat Q; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Quat_SizeSquared params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::Quat_EnforceShortestArcWith(FQuat& A, FQuat& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_EnforceShortestArcWith"));
    struct Params_Quat_EnforceShortestArcWith {
        FQuat A; // 0x0
        FQuat B; // 0x10
    }; // Size: 0x20
    Params_Quat_EnforceShortestArcWith params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
}
float UKismetMathLibrary::Vector4_SizeSquared3(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_SizeSquared3"));
    struct Params_Vector4_SizeSquared3 {
        FVector4 A; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Vector4_SizeSquared3 params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_BoundedToBox(FVector InVect, FVector InBoxMin, FVector InBoxMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_BoundedToBox"));
    struct Params_Vector_BoundedToBox {
        FVector InVect; // 0x0
        FVector InBoxMin; // 0xc
        FVector InBoxMax; // 0x18
        FVector ReturnValue; // 0x24
    }; // Size: 0x30
    Params_Vector_BoundedToBox params{};
    params.InVect = (FVector)InVect;
    params.InBoxMin = (FVector)InBoxMin;
    params.InBoxMax = (FVector)InBoxMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::VInterpTo_Constant(FVector Current, FVector Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VInterpTo_Constant"));
    struct Params_VInterpTo_Constant {
        FVector Current; // 0x0
        FVector Target; // 0xc
        float DeltaTime; // 0x18
        float InterpSpeed; // 0x1c
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_VInterpTo_Constant params{};
    params.Current = (FVector)Current;
    params.Target = (FVector)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_GetAbs(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_GetAbs"));
    struct Params_Vector_GetAbs {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Vector_GetAbs params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::ProjectVectorOnToPlane(FVector V, FVector PlaneNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ProjectVectorOnToPlane"));
    struct Params_ProjectVectorOnToPlane {
        FVector V; // 0x0
        FVector PlaneNormal; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_ProjectVectorOnToPlane params{};
    params.V = (FVector)V;
    params.PlaneNormal = (FVector)PlaneNormal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::VInterpTo(FVector Current, FVector Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VInterpTo"));
    struct Params_VInterpTo {
        FVector Current; // 0x0
        FVector Target; // 0xc
        float DeltaTime; // 0x18
        float InterpSpeed; // 0x1c
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_VInterpTo params{};
    params.Current = (FVector)Current;
    params.Target = (FVector)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_BoundedToCube(FVector InVect, float InRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_BoundedToCube"));
    struct Params_Vector_BoundedToCube {
        FVector InVect; // 0x0
        float InRadius; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Vector_BoundedToCube params{};
    params.InVect = (FVector)InVect;
    params.InRadius = (float)InRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FDateTime UKismetMathLibrary::GetDate(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetDate"));
    struct Params_GetDate {
        FDateTime A; // 0x0
        FDateTime ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDate params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::HSVToRGBLinear(FLinearColor HSV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.HSVToRGBLinear"));
    struct Params_HSVToRGBLinear {
        FLinearColor HSV; // 0x0
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_HSVToRGBLinear params{};
    params.HSV = (FLinearColor)HSV;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
float UKismetMathLibrary::Vector_Distance2DSquared(FVector v1, FVector v2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Distance2DSquared"));
    struct Params_Vector_Distance2DSquared {
        FVector v1; // 0x0
        FVector v2; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Vector_Distance2DSquared params{};
    params.v1 = (FVector)v1;
    params.v2 = (FVector)v2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::Add_LinearColorLinearColor(FLinearColor A, FLinearColor B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_LinearColorLinearColor"));
    struct Params_Add_LinearColorLinearColor {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        FLinearColor ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Add_LinearColorLinearColor params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UKismetMathLibrary::BreakColor(FLinearColor InColor, float& R, float& G, float& B, float& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakColor"));
    struct Params_BreakColor {
        FLinearColor InColor; // 0x0
        float R; // 0x10
        float G; // 0x14
        float B; // 0x18
        float A; // 0x1c
    }; // Size: 0x20
    Params_BreakColor params{};
    params.InColor = (FLinearColor)InColor;
    params.R = (float)R;
    params.G = (float)G;
    params.B = (float)B;
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    R = params.R;
    B = params.B;
    G = params.G;
    A = params.A;
}
FVector UKismetMathLibrary::VectorSpringInterp(FVector Current, FVector Target, FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VectorSpringInterp"));
    struct Params_VectorSpringInterp {
        FVector Current; // 0x0
        FVector Target; // 0xc
        FVectorSpringState SpringState; // 0x18
        float Stiffness; // 0x30
        float CriticalDampingFactor; // 0x34
        float DeltaTime; // 0x38
        float Mass; // 0x3c
        FVector ReturnValue; // 0x40
    }; // Size: 0x4c
    Params_VectorSpringInterp params{};
    params.Current = (FVector)Current;
    params.Target = (FVector)Target;
    params.SpringState = (FVectorSpringState)SpringState;
    params.Stiffness = (float)Stiffness;
    params.CriticalDampingFactor = (float)CriticalDampingFactor;
    params.DeltaTime = (float)DeltaTime;
    params.Mass = (float)Mass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpringState = params.SpringState;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Hypotenuse(float Width, float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Hypotenuse"));
    struct Params_Hypotenuse {
        float Width; // 0x0
        float Height; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Hypotenuse params{};
    params.Width = (float)Width;
    params.Height = (float)Height;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::Vector_IsUniform(FVector& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_IsUniform"));
    struct Params_Vector_IsUniform {
        FVector A; // 0x0
        float Tolerance; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Vector_IsUniform params{};
    params.A = (FVector)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetHour(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetHour"));
    struct Params_GetHour {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetHour params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FIntVector UKismetMathLibrary::FTruncVector(FVector& InVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FTruncVector"));
    struct Params_FTruncVector {
        FVector InVector; // 0x0
        FIntVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_FTruncVector params{};
    params.InVector = (FVector)InVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InVector = params.InVector;
    return (FIntVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Zero() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Zero"));
    struct Params_Vector_Zero {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_Zero params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Vector_HeadingAngle(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_HeadingAngle"));
    struct Params_Vector_HeadingAngle {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Vector_HeadingAngle params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::GetVectorArrayAverage(TArray<FVector>& Vectors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetVectorArrayAverage"));
    struct Params_GetVectorArrayAverage {
        TArray<FVector> Vectors; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_GetVectorArrayAverage params{};
    params.Vectors = (TArray<FVector>)Vectors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Vectors = params.Vectors;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::FClamp(float Value, float Min, float Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FClamp"));
    struct Params_FClamp {
        float Value; // 0x0
        float Min; // 0x4
        float Max; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FClamp params{};
    params.Value = (float)Value;
    params.Min = (float)Min;
    params.Max = (float)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Vector_UnitCartesianToSpherical(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_UnitCartesianToSpherical"));
    struct Params_Vector_UnitCartesianToSpherical {
        FVector A; // 0x0
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Vector_UnitCartesianToSpherical params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UKismetMathLibrary::Vector_UnwindEuler(FVector& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_UnwindEuler"));
    struct Params_Vector_UnwindEuler {
        FVector A; // 0x0
    }; // Size: 0xc
    Params_Vector_UnwindEuler params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
void UKismetMathLibrary::SetRandomStreamSeed(FRandomStream& Stream, int32_t NewSeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SetRandomStreamSeed"));
    struct Params_SetRandomStreamSeed {
        FRandomStream Stream; // 0x0
        int32_t NewSeed; // 0x8
    }; // Size: 0xc
    Params_SetRandomStreamSeed params{};
    params.Stream = (FRandomStream)Stream;
    params.NewSeed = (int32_t)NewSeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
}
FVector UKismetMathLibrary::Vector_ToRadians(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ToRadians"));
    struct Params_Vector_ToRadians {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Vector_ToRadians params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::Vector_IsNearlyZero(FVector& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_IsNearlyZero"));
    struct Params_Vector_IsNearlyZero {
        FVector A; // 0x0
        float Tolerance; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Vector_IsNearlyZero params{};
    params.A = (FVector)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_ToDegrees(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ToDegrees"));
    struct Params_Vector_ToDegrees {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Vector_ToDegrees params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Vector4_Normal3(FVector4& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Normal3"));
    struct Params_Vector4_Normal3 {
        FVector4 A; // 0x0
        float Tolerance; // 0x10
        char pad_14[0xc];
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Vector4_Normal3 params{};
    params.A = (FVector4)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (FVector4)params.ReturnValue;
}
FVector UKismetMathLibrary::Add_VectorInt(FVector A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_VectorInt"));
    struct Params_Add_VectorInt {
        FVector A; // 0x0
        int32_t B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Add_VectorInt params{};
    params.A = (FVector)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::BreakVector(FVector InVec, float& X, float& Y, float& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakVector"));
    struct Params_BreakVector {
        FVector InVec; // 0x0
        float X; // 0xc
        float Y; // 0x10
        float Z; // 0x14
    }; // Size: 0x18
    Params_BreakVector params{};
    params.InVec = (FVector)InVec;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    X = params.X;
    Y = params.Y;
    Z = params.Z;
}
bool UKismetMathLibrary::EqualEqual_VectorVector(FVector A, FVector B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_VectorVector"));
    struct Params_EqualEqual_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        float ErrorTolerance; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_EqualEqual_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_SnappedToGrid(FVector InVect, float InGridSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_SnappedToGrid"));
    struct Params_Vector_SnappedToGrid {
        FVector InVect; // 0x0
        float InGridSize; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Vector_SnappedToGrid params{};
    params.InVect = (FVector)InVect;
    params.InGridSize = (float)InGridSize;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Vector_DistanceSquared(FVector v1, FVector v2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_DistanceSquared"));
    struct Params_Vector_DistanceSquared {
        FVector v1; // 0x0
        FVector v2; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Vector_DistanceSquared params{};
    params.v1 = (FVector)v1;
    params.v2 = (FVector)v2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::Vector_Set(FVector& A, float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Set"));
    struct Params_Vector_Set {
        FVector A; // 0x0
        float X; // 0xc
        float Y; // 0x10
        float Z; // 0x14
    }; // Size: 0x18
    Params_Vector_Set params{};
    params.A = (FVector)A;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
FVector UKismetMathLibrary::Vector_ComponentMin(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ComponentMin"));
    struct Params_Vector_ComponentMin {
        FVector A; // 0x0
        FVector B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Vector_ComponentMin params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Vector4_NormalUnsafe3(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_NormalUnsafe3"));
    struct Params_Vector4_NormalUnsafe3 {
        FVector4 A; // 0x0
        FVector4 ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Vector4_NormalUnsafe3 params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (FVector4)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Right() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Right"));
    struct Params_Vector_Right {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_Right params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Vector4_Negated(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Negated"));
    struct Params_Vector4_Negated {
        FVector4 A; // 0x0
        FVector4 ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Vector4_Negated params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (FVector4)params.ReturnValue;
}
bool UKismetMathLibrary::LessEqual_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LessEqual_IntInt"));
    struct Params_LessEqual_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LessEqual_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_ProjectOnToNormal(FVector V, FVector InNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ProjectOnToNormal"));
    struct Params_Vector_ProjectOnToNormal {
        FVector V; // 0x0
        FVector InNormal; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Vector_ProjectOnToNormal params{};
    params.V = (FVector)V;
    params.InNormal = (FVector)InNormal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::DegAtan2(float Y, float X) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegAtan2"));
    struct Params_DegAtan2 {
        float Y; // 0x0
        float X; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_DegAtan2 params{};
    params.Y = (float)Y;
    params.X = (float)X;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_One() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_One"));
    struct Params_Vector_One {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_One params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_TimespanTimespan"));
    struct Params_NotEqual_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_NormalUnsafe(FVector& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_NormalUnsafe"));
    struct Params_Vector_NormalUnsafe {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Vector_NormalUnsafe params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::Vector_Normalize(FVector& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Normalize"));
    struct Params_Vector_Normalize {
        FVector A; // 0x0
        float Tolerance; // 0xc
    }; // Size: 0x10
    Params_Vector_Normalize params{};
    params.A = (FVector)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
FRotator UKismetMathLibrary::MakeRotFromXZ(FVector& X, FVector& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromXZ"));
    struct Params_MakeRotFromXZ {
        FVector X; // 0x0
        FVector Z; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_MakeRotFromXZ params{};
    params.X = (FVector)X;
    params.Z = (FVector)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    X = params.X;
    Z = params.Z;
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Normal2D(FVector A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Normal2D"));
    struct Params_Vector_Normal2D {
        FVector A; // 0x0
        float Tolerance; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Vector_Normal2D params{};
    params.A = (FVector)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::Vector_Assign(FVector& A, FVector& InVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Assign"));
    struct Params_Vector_Assign {
        FVector A; // 0x0
        FVector InVector; // 0xc
    }; // Size: 0x18
    Params_Vector_Assign params{};
    params.A = (FVector)A;
    params.InVector = (FVector)InVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InVector = params.InVector;
    A = params.A;
}
FVector UKismetMathLibrary::Vector_MirrorByPlane(FVector A, FPlane& InPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_MirrorByPlane"));
    struct Params_Vector_MirrorByPlane {
        FVector A; // 0x0
        char pad_c[0x4];
        FPlane InPlane; // 0x10
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_Vector_MirrorByPlane params{};
    params.A = (FVector)A;
    params.InPlane = (FPlane)InPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InPlane = params.InPlane;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Left() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Left"));
    struct Params_Vector_Left {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_Left params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Vector4_CrossProduct3(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_CrossProduct3"));
    struct Params_Vector4_CrossProduct3 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Vector4_CrossProduct3 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FVector4)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Add_Vector2DFloat(FVector2D A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_Vector2DFloat"));
    struct Params_Add_Vector2DFloat {
        FVector2D A; // 0x0
        float B; // 0x8
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Add_Vector2DFloat params{};
    params.A = (FVector2D)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
uint8_t UKismetMathLibrary::BMax(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BMax"));
    struct Params_BMax {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        uint8_t ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BMax params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
bool UKismetMathLibrary::Vector_IsUnit(FVector& A, float SquaredLenthTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_IsUnit"));
    struct Params_Vector_IsUnit {
        FVector A; // 0x0
        float SquaredLenthTolerance; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Vector_IsUnit params{};
    params.A = (FVector)A;
    params.SquaredLenthTolerance = (float)SquaredLenthTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Vector_IsNormal(FVector& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_IsNormal"));
    struct Params_Vector_IsNormal {
        FVector A; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_Vector_IsNormal params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
void UKismetMathLibrary::BreakFrameRate(FFrameRate& InFrameRate, int32_t& Numerator, int32_t& Denominator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakFrameRate"));
    struct Params_BreakFrameRate {
        FFrameRate InFrameRate; // 0x0
        int32_t Numerator; // 0x8
        int32_t Denominator; // 0xc
    }; // Size: 0x10
    Params_BreakFrameRate params{};
    params.InFrameRate = (FFrameRate)InFrameRate;
    params.Numerator = (int32_t)Numerator;
    params.Denominator = (int32_t)Denominator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFrameRate = params.InFrameRate;
    Numerator = params.Numerator;
    Denominator = params.Denominator;
}
FVector UKismetMathLibrary::Vector_ClampSize2D(FVector A, float Min, float Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ClampSize2D"));
    struct Params_Vector_ClampSize2D {
        FVector A; // 0x0
        float Min; // 0xc
        float Max; // 0x10
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_Vector_ClampSize2D params{};
    params.A = (FVector)A;
    params.Min = (float)Min;
    params.Max = (float)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::Vector_IsNAN(FVector& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_IsNAN"));
    struct Params_Vector_IsNAN {
        FVector A; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_Vector_IsNAN params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
FColor UKismetMathLibrary::LinearColor_ToRGBE(FLinearColor InLinearColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_ToRGBE"));
    struct Params_LinearColor_ToRGBE {
        FLinearColor InLinearColor; // 0x0
        FColor ReturnValue; // 0x10
    }; // Size: 0x14
    Params_LinearColor_ToRGBE params{};
    params.InLinearColor = (FLinearColor)InLinearColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
float UKismetMathLibrary::FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FInterpTo_Constant"));
    struct Params_FInterpTo_Constant {
        float Current; // 0x0
        float Target; // 0x4
        float DeltaTime; // 0x8
        float InterpSpeed; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_FInterpTo_Constant params{};
    params.Current = (float)Current;
    params.Target = (float)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Vector_GetAbsMin(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_GetAbsMin"));
    struct Params_Vector_GetAbsMin {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Vector_GetAbsMin params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Forward() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Forward"));
    struct Params_Vector_Forward {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_Forward params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Vector_GetAbsMax(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_GetAbsMax"));
    struct Params_Vector_GetAbsMax {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Vector_GetAbsMax params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FQuat UKismetMathLibrary::Quat_Log(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Log"));
    struct Params_Quat_Log {
        FQuat Q; // 0x0
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Quat_Log params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FQuat)params.ReturnValue;
}
FVector UKismetMathLibrary::Matrix_GetOrigin(FMatrix& InMatrix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetOrigin"));
    struct Params_Matrix_GetOrigin {
        FMatrix InMatrix; // 0x0
        FVector ReturnValue; // 0x40
    }; // Size: 0x4c
    Params_Matrix_GetOrigin params{};
    params.InMatrix = (FMatrix)InMatrix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMatrix = params.InMatrix;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::GetReflectionVector(FVector Direction, FVector SurfaceNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetReflectionVector"));
    struct Params_GetReflectionVector {
        FVector Direction; // 0x0
        FVector SurfaceNormal; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetReflectionVector params{};
    params.Direction = (FVector)Direction;
    params.SurfaceNormal = (FVector)SurfaceNormal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D UKismetMathLibrary::GetAbs2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetAbs2D"));
    struct Params_GetAbs2D {
        FVector2D A; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAbs2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector UKismetMathLibrary::CreateVectorFromYawPitch(float Yaw, float Pitch, float Length) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.CreateVectorFromYawPitch"));
    struct Params_CreateVectorFromYawPitch {
        float Yaw; // 0x0
        float Pitch; // 0x4
        float Length; // 0x8
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_CreateVectorFromYawPitch params{};
    params.Yaw = (float)Yaw;
    params.Pitch = (float)Pitch;
    params.Length = (float)Length;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Down() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Down"));
    struct Params_Vector_Down {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_Down params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::GetYawPitchFromVector(FVector InVec, float& Yaw, float& Pitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetYawPitchFromVector"));
    struct Params_GetYawPitchFromVector {
        FVector InVec; // 0x0
        float Yaw; // 0xc
        float Pitch; // 0x10
    }; // Size: 0x14
    Params_GetYawPitchFromVector params{};
    params.InVec = (FVector)InVec;
    params.Yaw = (float)Yaw;
    params.Pitch = (float)Pitch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Pitch = params.Pitch;
    Yaw = params.Yaw;
}
float UKismetMathLibrary::Vector_Distance(FVector v1, FVector v2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Distance"));
    struct Params_Vector_Distance {
        FVector v1; // 0x0
        FVector v2; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Vector_Distance params{};
    params.v1 = (FVector)v1;
    params.v2 = (FVector)v2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::IntPoint_Zero() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IntPoint_Zero"));
    struct Params_IntPoint_Zero {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_IntPoint_Zero params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetDayOfYear(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetDayOfYear"));
    struct Params_GetDayOfYear {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetDayOfYear params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::Vector_CosineAngle2D(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_CosineAngle2D"));
    struct Params_Vector_CosineAngle2D {
        FVector A; // 0x0
        FVector B; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Vector_CosineAngle2D params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::FWrap(float Value, float Min, float Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FWrap"));
    struct Params_FWrap {
        float Value; // 0x0
        float Min; // 0x4
        float Max; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FWrap params{};
    params.Value = (float)Value;
    params.Min = (float)Min;
    params.Max = (float)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_ComponentMax(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_ComponentMax"));
    struct Params_Vector_ComponentMax {
        FVector A; // 0x0
        FVector B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Vector_ComponentMax params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetHour12(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetHour12"));
    struct Params_GetHour12 {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetHour12 params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Vector4_Zero() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Zero"));
    struct Params_Vector4_Zero {
        FVector4 ReturnValue; // 0x0
    }; // Size: 0x10
    Params_Vector4_Zero params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector4)params.ReturnValue;
}
float UKismetMathLibrary::Vector4_Size3(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Size3"));
    struct Params_Vector4_Size3 {
        FVector4 A; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Vector4_Size3 params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (float)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::Divide_LinearColorLinearColor(FLinearColor A, FLinearColor B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_LinearColorLinearColor"));
    struct Params_Divide_LinearColorLinearColor {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        FLinearColor ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Divide_LinearColorLinearColor params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FVector UKismetMathLibrary::Vector_Backward() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_Backward"));
    struct Params_Vector_Backward {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_Vector_Backward params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UKismetMathLibrary::RandomRotatorFromStream(bool bRoll, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomRotatorFromStream"));
    struct Params_RandomRotatorFromStream {
        bool bRoll; // 0x0
        char pad_1[0x3];
        FRandomStream Stream; // 0x4
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_RandomRotatorFromStream params{};
    params.bRoll = (bool)bRoll;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (FRotator)params.ReturnValue;
}
void UKismetMathLibrary::Vector_AddBounded(FVector& A, FVector InAddVect, float InRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector_AddBounded"));
    struct Params_Vector_AddBounded {
        FVector A; // 0x0
        FVector InAddVect; // 0xc
        float InRadius; // 0x18
    }; // Size: 0x1c
    Params_Vector_AddBounded params{};
    params.A = (FVector)A;
    params.InAddVect = (FVector)InAddVect;
    params.InRadius = (float)InRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
bool UKismetMathLibrary::Greater_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Greater_ByteByte"));
    struct Params_Greater_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Greater_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Subtract_Vector2DFloat(FVector2D A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_Vector2DFloat"));
    struct Params_Subtract_Vector2DFloat {
        FVector2D A; // 0x0
        float B; // 0x8
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Subtract_Vector2DFloat params{};
    params.A = (FVector2D)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UKismetMathLibrary::Vector4_SizeSquared(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_SizeSquared"));
    struct Params_Vector4_SizeSquared {
        FVector4 A; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Vector4_SizeSquared params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (float)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_Desaturated(FLinearColor InColor, float InDesaturation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Desaturated"));
    struct Params_LinearColor_Desaturated {
        FLinearColor InColor; // 0x0
        float InDesaturation; // 0x10
        FLinearColor ReturnValue; // 0x14
    }; // Size: 0x24
    Params_LinearColor_Desaturated params{};
    params.InColor = (FLinearColor)InColor;
    params.InDesaturation = (float)InDesaturation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
float UKismetMathLibrary::Vector4_Size(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Size"));
    struct Params_Vector4_Size {
        FVector4 A; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Vector4_Size params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_NameName(FName A, FName B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_NameName"));
    struct Params_NotEqual_NameName {
        FName A; // 0x0
        FName B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_NameName params{};
    params.A = (FName)A;
    params.B = (FName)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetMathLibrary::Vector4_Set(FVector4& A, float X, float Y, float Z, float W) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Set"));
    struct Params_Vector4_Set {
        FVector4 A; // 0x0
        float X; // 0x10
        float Y; // 0x14
        float Z; // 0x18
        float W; // 0x1c
    }; // Size: 0x20
    Params_Vector4_Set params{};
    params.A = (FVector4)A;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.W = (float)W;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
void UKismetMathLibrary::Vector4_Normalize3(FVector4& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Normalize3"));
    struct Params_Vector4_Normalize3 {
        FVector4 A; // 0x0
        float Tolerance; // 0x10
    }; // Size: 0x14
    Params_Vector4_Normalize3 params{};
    params.A = (FVector4)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
bool UKismetMathLibrary::TimespanFromString(FString TimespanString, FTimespan& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TimespanFromString"));
    struct Params_TimespanFromString {
        FString TimespanString; // 0x0
        FTimespan Result; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_TimespanFromString params{};
    params.TimespanString = (FString)TimespanString;
    params.Result = (FTimespan)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (bool)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Vector4_MirrorByVector3(FVector4& Direction, FVector4& SurfaceNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_MirrorByVector3"));
    struct Params_Vector4_MirrorByVector3 {
        FVector4 Direction; // 0x0
        FVector4 SurfaceNormal; // 0x10
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Vector4_MirrorByVector3 params{};
    params.Direction = (FVector4)Direction;
    params.SurfaceNormal = (FVector4)SurfaceNormal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Direction = params.Direction;
    SurfaceNormal = params.SurfaceNormal;
    return (FVector4)params.ReturnValue;
}
bool UKismetMathLibrary::Matrix_GetFrustumLeftPlane(FMatrix& M, FPlane& OutPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumLeftPlane"));
    struct Params_Matrix_GetFrustumLeftPlane {
        FMatrix M; // 0x0
        FPlane OutPlane; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_Matrix_GetFrustumLeftPlane params{};
    params.M = (FMatrix)M;
    params.OutPlane = (FPlane)OutPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    OutPlane = params.OutPlane;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Vector4_IsZero(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_IsZero"));
    struct Params_Vector4_IsZero {
        FVector4 A; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Vector4_IsZero params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Vector4_IsUnit3(FVector4& A, float SquaredLenthTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_IsUnit3"));
    struct Params_Vector4_IsUnit3 {
        FVector4 A; // 0x0
        float SquaredLenthTolerance; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Vector4_IsUnit3 params{};
    params.A = (FVector4)A;
    params.SquaredLenthTolerance = (float)SquaredLenthTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Vector4_IsNormal3(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_IsNormal3"));
    struct Params_Vector4_IsNormal3 {
        FVector4 A; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Vector4_IsNormal3 params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
FVector2D UKismetMathLibrary::ToSign2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ToSign2D"));
    struct Params_ToSign2D {
        FVector2D A; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ToSign2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector UKismetMathLibrary::InverseTransformDirection(FTransform& T, FVector Direction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.InverseTransformDirection"));
    struct Params_InverseTransformDirection {
        FTransform T; // 0x0
        FVector Direction; // 0x30
        FVector ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_InverseTransformDirection params{};
    params.T = (FTransform)T;
    params.Direction = (FVector)Direction;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    T = params.T;
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::Vector4_IsNearlyZero3(FVector4& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_IsNearlyZero3"));
    struct Params_Vector4_IsNearlyZero3 {
        FVector4 A; // 0x0
        float Tolerance; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Vector4_IsNearlyZero3 params{};
    params.A = (FVector4)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
FTimespan UKismetMathLibrary::Subtract_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_DateTimeDateTime"));
    struct Params_Subtract_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        FTimespan ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Subtract_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
int64_t UKismetMathLibrary::RandomInteger64InRange(int64_t Min, int64_t Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomInteger64InRange"));
    struct Params_RandomInteger64InRange {
        int64_t Min; // 0x0
        int64_t Max; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_RandomInteger64InRange params{};
    params.Min = (int64_t)Min;
    params.Max = (int64_t)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
bool UKismetMathLibrary::Vector4_IsNAN(FVector4& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_IsNAN"));
    struct Params_Vector4_IsNAN {
        FVector4 A; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Vector4_IsNAN params{};
    params.A = (FVector4)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::Vector4_DotProduct3(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_DotProduct3"));
    struct Params_Vector4_DotProduct3 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_Vector4_DotProduct3 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (float)params.ReturnValue;
}
FQuat UKismetMathLibrary::Conv_Vector4ToQuaternion(FVector4& InVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_Vector4ToQuaternion"));
    struct Params_Conv_Vector4ToQuaternion {
        FVector4 InVec; // 0x0
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_Vector4ToQuaternion params{};
    params.InVec = (FVector4)InVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InVec = params.InVec;
    return (FQuat)params.ReturnValue;
}
float UKismetMathLibrary::Subtract_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_FloatFloat"));
    struct Params_Subtract_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Subtract_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Vector4_DotProduct(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_DotProduct"));
    struct Params_Vector4_DotProduct {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_Vector4_DotProduct params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Exp(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Exp"));
    struct Params_Exp {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Exp params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::FInterpEaseInOut(float A, float B, float Alpha, float Exponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FInterpEaseInOut"));
    struct Params_FInterpEaseInOut {
        float A; // 0x0
        float B; // 0x4
        float Alpha; // 0x8
        float Exponent; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_FInterpEaseInOut params{};
    params.A = (float)A;
    params.B = (float)B;
    params.Alpha = (float)Alpha;
    params.Exponent = (float)Exponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::DegAcos(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegAcos"));
    struct Params_DegAcos {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DegAcos params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::Vector4_Assign(FVector4& A, FVector4& InVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector4_Assign"));
    struct Params_Vector4_Assign {
        FVector4 A; // 0x0
        FVector4 InVector; // 0x10
    }; // Size: 0x20
    Params_Vector4_Assign params{};
    params.A = (FVector4)A;
    params.InVector = (FVector4)InVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    InVector = params.InVector;
}
FVector2D UKismetMathLibrary::Vector2D_Unit45Deg() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector2D_Unit45Deg"));
    struct Params_Vector2D_Unit45Deg {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Vector2D_Unit45Deg params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector2DInterpTo_Constant"));
    struct Params_Vector2DInterpTo_Constant {
        FVector2D Current; // 0x0
        FVector2D Target; // 0x8
        float DeltaTime; // 0x10
        float InterpSpeed; // 0x14
        FVector2D ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Vector2DInterpTo_Constant params{};
    params.Current = (FVector2D)Current;
    params.Target = (FVector2D)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
bool UKismetMathLibrary::LinePlaneIntersection(FVector& LineStart, FVector& LineEnd, FPlane& APlane, float& T, FVector& Intersection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinePlaneIntersection"));
    struct Params_LinePlaneIntersection {
        FVector LineStart; // 0x0
        FVector LineEnd; // 0xc
        char pad_18[0x8];
        FPlane APlane; // 0x20
        float T; // 0x30
        FVector Intersection; // 0x34
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_LinePlaneIntersection params{};
    params.LineStart = (FVector)LineStart;
    params.LineEnd = (FVector)LineEnd;
    params.APlane = (FPlane)APlane;
    params.T = (float)T;
    params.Intersection = (FVector)Intersection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LineEnd = params.LineEnd;
    LineStart = params.LineStart;
    APlane = params.APlane;
    T = params.T;
    Intersection = params.Intersection;
    return (bool)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector2DInterpTo"));
    struct Params_Vector2DInterpTo {
        FVector2D Current; // 0x0
        FVector2D Target; // 0x8
        float DeltaTime; // 0x10
        float InterpSpeed; // 0x14
        FVector2D ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Vector2DInterpTo params{};
    params.Current = (FVector2D)Current;
    params.Target = (FVector2D)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Vector2D_Zero() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector2D_Zero"));
    struct Params_Vector2D_Zero {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Vector2D_Zero params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
bool UKismetMathLibrary::Matrix_GetFrustumFarPlane(FMatrix& M, FPlane& OutPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumFarPlane"));
    struct Params_Matrix_GetFrustumFarPlane {
        FMatrix M; // 0x0
        FPlane OutPlane; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_Matrix_GetFrustumFarPlane params{};
    params.M = (FMatrix)M;
    params.OutPlane = (FPlane)OutPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    OutPlane = params.OutPlane;
    return (bool)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_Blue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Blue"));
    struct Params_LinearColor_Blue {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_Blue params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Vector2D_One() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Vector2D_One"));
    struct Params_Vector2D_One {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Vector2D_One params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
bool UKismetMathLibrary::LessEqual_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LessEqual_TimespanTimespan"));
    struct Params_LessEqual_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_LessEqual_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::VEase(FVector A, FVector B, float Alpha, EEasingFunc::Type EasingFunc, float BlendExp, int32_t Steps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.VEase"));
    struct Params_VEase {
        FVector A; // 0x0
        FVector B; // 0xc
        float Alpha; // 0x18
        EEasingFunc::Type EasingFunc; // 0x1c
        char pad_1d[0x3];
        float BlendExp; // 0x20
        int32_t Steps; // 0x24
        FVector ReturnValue; // 0x28
    }; // Size: 0x34
    Params_VEase params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    params.Alpha = (float)Alpha;
    params.EasingFunc = (EEasingFunc::Type)EasingFunc;
    params.BlendExp = (float)BlendExp;
    params.Steps = (int32_t)Steps;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FDateTime UKismetMathLibrary::Subtract_DateTimeTimespan(FDateTime A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_DateTimeTimespan"));
    struct Params_Subtract_DateTimeTimespan {
        FDateTime A; // 0x0
        FTimespan B; // 0x8
        FDateTime ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Subtract_DateTimeTimespan params{};
    params.A = (FDateTime)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
FDateTime UKismetMathLibrary::UtcNow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.UtcNow"));
    struct Params_UtcNow {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UtcNow params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
FVector4 UKismetMathLibrary::TransformVector4(FMatrix& Matrix, FVector4& Vec4) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TransformVector4"));
    struct Params_TransformVector4 {
        FMatrix Matrix; // 0x0
        FVector4 Vec4; // 0x40
        FVector4 ReturnValue; // 0x50
    }; // Size: 0x60
    Params_TransformVector4 params{};
    params.Matrix = (FMatrix)Matrix;
    params.Vec4 = (FVector4)Vec4;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Matrix = params.Matrix;
    Vec4 = params.Vec4;
    return (FVector4)params.ReturnValue;
}
FVector UKismetMathLibrary::ProjectVectorOnToVector(FVector V, FVector Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ProjectVectorOnToVector"));
    struct Params_ProjectVectorOnToVector {
        FVector V; // 0x0
        FVector Target; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_ProjectVectorOnToVector params{};
    params.V = (FVector)V;
    params.Target = (FVector)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UKismetMathLibrary::TransformRotation(FTransform& T, FRotator Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TransformRotation"));
    struct Params_TransformRotation {
        FTransform T; // 0x0
        FRotator Rotation; // 0x30
        FRotator ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_TransformRotation params{};
    params.T = (FTransform)T;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    T = params.T;
    return (FRotator)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromXY(FVector& X, FVector& Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromXY"));
    struct Params_MakeRotFromXY {
        FVector X; // 0x0
        FVector Y; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_MakeRotFromXY params{};
    params.X = (FVector)X;
    params.Y = (FVector)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Y = params.Y;
    X = params.X;
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::TransformLocation(FTransform& T, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TransformLocation"));
    struct Params_TransformLocation {
        FTransform T; // 0x0
        FVector Location; // 0x30
        FVector ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_TransformLocation params{};
    params.T = (FTransform)T;
    params.Location = (FVector)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    T = params.T;
    return (FVector)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetMonth(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMonth"));
    struct Params_GetMonth {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMonth params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector UKismetMathLibrary::TransformDirection(FTransform& T, FVector Direction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TransformDirection"));
    struct Params_TransformDirection {
        FTransform T; // 0x0
        FVector Direction; // 0x30
        FVector ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_TransformDirection params{};
    params.T = (FTransform)T;
    params.Direction = (FVector)Direction;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    T = params.T;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Transform_Determinant(FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Transform_Determinant"));
    struct Params_Transform_Determinant {
        FTransform Transform; // 0x0
        float ReturnValue; // 0x30
    }; // Size: 0x34
    Params_Transform_Determinant params{};
    params.Transform = (FTransform)Transform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (float)params.ReturnValue;
}
FVector2D UKismetMathLibrary::ToRounded2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ToRounded2D"));
    struct Params_ToRounded2D {
        FVector2D A; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ToRounded2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetMilliseconds(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMilliseconds"));
    struct Params_GetMilliseconds {
        FTimespan A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMilliseconds params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FTransform UKismetMathLibrary::MakeTransform(FVector Location, FRotator Rotation, FVector Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeTransform"));
    struct Params_MakeTransform {
        FVector Location; // 0x0
        FRotator Rotation; // 0xc
        FVector Scale; // 0x18
        char pad_24[0xc];
        FTransform ReturnValue; // 0x30
    }; // Size: 0x60
    Params_MakeTransform params{};
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Scale = (FVector)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UKismetMathLibrary::ToDirectionAndLength2D(FVector2D A, FVector2D& OutDir, float& OutLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ToDirectionAndLength2D"));
    struct Params_ToDirectionAndLength2D {
        FVector2D A; // 0x0
        FVector2D OutDir; // 0x8
        float OutLength; // 0x10
    }; // Size: 0x14
    Params_ToDirectionAndLength2D params{};
    params.A = (FVector2D)A;
    params.OutDir = (FVector2D)OutDir;
    params.OutLength = (float)OutLength;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDir = params.OutDir;
    OutLength = params.OutLength;
}
FDateTime UKismetMathLibrary::Today() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Today"));
    struct Params_Today {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Today params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_ClassClass(UClass* A, UClass* B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_ClassClass"));
    struct Params_NotEqual_ClassClass {
        UClass* A; // 0x0
        UClass* B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_ClassClass params{};
    params.A = (UClass*)A;
    params.B = (UClass*)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransform UKismetMathLibrary::TLerp(FTransform& A, FTransform& B, float Alpha, ELerpInterpolationMode::Type InterpMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TLerp"));
    struct Params_TLerp {
        FTransform A; // 0x0
        FTransform B; // 0x30
        float Alpha; // 0x60
        ELerpInterpolationMode::Type InterpMode; // 0x64
        char pad_65[0xb];
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_TLerp params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    params.Alpha = (float)Alpha;
    params.InterpMode = (ELerpInterpolationMode::Type)InterpMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FTransform)params.ReturnValue;
}
FTransform UKismetMathLibrary::TInterpTo(FTransform& Current, FTransform& Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TInterpTo"));
    struct Params_TInterpTo {
        FTransform Current; // 0x0
        FTransform Target; // 0x30
        float DeltaTime; // 0x60
        float InterpSpeed; // 0x64
        char pad_68[0x8];
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_TInterpTo params{};
    params.Current = (FTransform)Current;
    params.Target = (FTransform)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Current = params.Current;
    Target = params.Target;
    return (FTransform)params.ReturnValue;
}
FTimespan UKismetMathLibrary::TimespanZeroValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TimespanZeroValue"));
    struct Params_TimespanZeroValue {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_TimespanZeroValue params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
float UKismetMathLibrary::TimespanRatio(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TimespanRatio"));
    struct Params_TimespanRatio {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_TimespanRatio params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FTimespan UKismetMathLibrary::TimespanMinValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TimespanMinValue"));
    struct Params_TimespanMinValue {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_TimespanMinValue params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
bool UKismetMathLibrary::RandomBool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomBool"));
    struct Params_RandomBool {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RandomBool params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UKismetMathLibrary::TimespanMaxValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TimespanMaxValue"));
    struct Params_TimespanMaxValue {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_TimespanMaxValue params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FTransform UKismetMathLibrary::TEase(FTransform& A, FTransform& B, float Alpha, EEasingFunc::Type EasingFunc, float BlendExp, int32_t Steps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.TEase"));
    struct Params_TEase {
        FTransform A; // 0x0
        FTransform B; // 0x30
        float Alpha; // 0x60
        EEasingFunc::Type EasingFunc; // 0x64
        char pad_65[0x3];
        float BlendExp; // 0x68
        int32_t Steps; // 0x6c
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_TEase params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    params.Alpha = (float)Alpha;
    params.EasingFunc = (EEasingFunc::Type)EasingFunc;
    params.BlendExp = (float)BlendExp;
    params.Steps = (int32_t)Steps;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FTransform)params.ReturnValue;
}
float UKismetMathLibrary::GetTAU() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetTAU"));
    struct Params_GetTAU {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTAU params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Tan(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Tan"));
    struct Params_Tan {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Tan params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Subtract_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_VectorVector"));
    struct Params_Subtract_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Subtract_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int64_t UKismetMathLibrary::RandomInteger64(int64_t Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomInteger64"));
    struct Params_RandomInteger64 {
        int64_t Max; // 0x0
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_RandomInteger64 params{};
    params.Max = (int64_t)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
float UKismetMathLibrary::DegreesToRadians(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegreesToRadians"));
    struct Params_DegreesToRadians {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DegreesToRadians params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Subtract_VectorInt(FVector A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_VectorInt"));
    struct Params_Subtract_VectorInt {
        FVector A; // 0x0
        int32_t B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Subtract_VectorInt params{};
    params.A = (FVector)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Subtract_VectorFloat(FVector A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_VectorFloat"));
    struct Params_Subtract_VectorFloat {
        FVector A; // 0x0
        float B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Subtract_VectorFloat params{};
    params.A = (FVector)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Square(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Square"));
    struct Params_Square {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Square params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetSeconds(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetSeconds"));
    struct Params_GetSeconds {
        FTimespan A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSeconds params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FQuat UKismetMathLibrary::Matrix_ToQuat(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_ToQuat"));
    struct Params_Matrix_ToQuat {
        FMatrix M; // 0x0
        FQuat ReturnValue; // 0x40
    }; // Size: 0x50
    Params_Matrix_ToQuat params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FQuat)params.ReturnValue;
}
void UKismetMathLibrary::GetAzimuthAndElevation(FVector InDirection, FTransform& ReferenceFrame, float& Azimuth, float& Elevation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetAzimuthAndElevation"));
    struct Params_GetAzimuthAndElevation {
        FVector InDirection; // 0x0
        char pad_c[0x4];
        FTransform ReferenceFrame; // 0x10
        float Azimuth; // 0x40
        float Elevation; // 0x44
    }; // Size: 0x48
    Params_GetAzimuthAndElevation params{};
    params.InDirection = (FVector)InDirection;
    params.ReferenceFrame = (FTransform)ReferenceFrame;
    params.Azimuth = (float)Azimuth;
    params.Elevation = (float)Elevation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ReferenceFrame = params.ReferenceFrame;
    Azimuth = params.Azimuth;
    Elevation = params.Elevation;
}
FVector4 UKismetMathLibrary::Subtract_Vector4Vector4(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_Vector4Vector4"));
    struct Params_Subtract_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Subtract_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FVector4)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Subtract_Vector2DVector2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_Vector2DVector2D"));
    struct Params_Subtract_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Subtract_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FTimespan UKismetMathLibrary::Subtract_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_TimespanTimespan"));
    struct Params_Subtract_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        FTimespan ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Subtract_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
float UKismetMathLibrary::DegAsin(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegAsin"));
    struct Params_DegAsin {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DegAsin params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadians(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInRadians"));
    struct Params_RandomUnitVectorInEllipticalConeInRadians {
        FVector ConeDir; // 0x0
        float MaxYawInRadians; // 0xc
        float MaxPitchInRadians; // 0x10
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_RandomUnitVectorInEllipticalConeInRadians params{};
    params.ConeDir = (FVector)ConeDir;
    params.MaxYawInRadians = (float)MaxYawInRadians;
    params.MaxPitchInRadians = (float)MaxPitchInRadians;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FPlane UKismetMathLibrary::MakePlaneFromPointAndNormal(FVector Point, FVector Normal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakePlaneFromPointAndNormal"));
    struct Params_MakePlaneFromPointAndNormal {
        FVector Point; // 0x0
        FVector Normal; // 0xc
        char pad_18[0x8];
        FPlane ReturnValue; // 0x20
    }; // Size: 0x30
    Params_MakePlaneFromPointAndNormal params{};
    params.Point = (FVector)Point;
    params.Normal = (FVector)Normal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPlane)params.ReturnValue;
}
FQuat UKismetMathLibrary::Subtract_QuatQuat(FQuat& A, FQuat& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_QuatQuat"));
    struct Params_Subtract_QuatQuat {
        FQuat A; // 0x0
        FQuat B; // 0x10
        FQuat ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Subtract_QuatQuat params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FQuat)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::Subtract_LinearColorLinearColor(FLinearColor A, FLinearColor B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_LinearColorLinearColor"));
    struct Params_Subtract_LinearColorLinearColor {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        FLinearColor ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Subtract_LinearColorLinearColor params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromX(FVector& X) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromX"));
    struct Params_MakeRotFromX {
        FVector X; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_MakeRotFromX params{};
    params.X = (FVector)X;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    X = params.X;
    return (FRotator)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Subtract_IntPointIntPoint(FIntPoint A, FIntPoint B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_IntPointIntPoint"));
    struct Params_Subtract_IntPointIntPoint {
        FIntPoint A; // 0x0
        FIntPoint B; // 0x8
        FIntPoint ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Subtract_IntPointIntPoint params{};
    params.A = (FIntPoint)A;
    params.B = (FIntPoint)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
float UKismetMathLibrary::GetPointDistanceToLine(FVector Point, FVector LineOrigin, FVector LineDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetPointDistanceToLine"));
    struct Params_GetPointDistanceToLine {
        FVector Point; // 0x0
        FVector LineOrigin; // 0xc
        FVector LineDirection; // 0x18
        float ReturnValue; // 0x24
    }; // Size: 0x28
    Params_GetPointDistanceToLine params{};
    params.Point = (FVector)Point;
    params.LineOrigin = (FVector)LineOrigin;
    params.LineDirection = (FVector)LineDirection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Subtract_IntPointInt(FIntPoint A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_IntPointInt"));
    struct Params_Subtract_IntPointInt {
        FIntPoint A; // 0x0
        int32_t B; // 0x8
        FIntPoint ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Subtract_IntPointInt params{};
    params.A = (FIntPoint)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
int32_t UKismetMathLibrary::Subtract_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_IntInt"));
    struct Params_Subtract_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Subtract_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int64_t UKismetMathLibrary::Subtract_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_Int64Int64"));
    struct Params_Subtract_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Subtract_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVector"));
    struct Params_RandomUnitVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_RandomUnitVector params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::FMax(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FMax"));
    struct Params_FMax {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_FMax params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Subtract_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Subtract_ByteByte"));
    struct Params_Subtract_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        uint8_t ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Subtract_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
float UKismetMathLibrary::Sqrt(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Sqrt"));
    struct Params_Sqrt {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Sqrt params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UKismetMathLibrary::SelectString(FString A, FString B, bool bPickA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectString"));
    struct Params_SelectString {
        FString A; // 0x0
        FString B; // 0x10
        bool bPickA; // 0x20
        char pad_21[0x7];
        FString ReturnValue; // 0x28
    }; // Size: 0x38
    Params_SelectString params{};
    params.A = (FString)A;
    params.B = (FString)B;
    params.bPickA = (bool)bPickA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FVector UKismetMathLibrary::Spherical2DToUnitCartesian(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Spherical2DToUnitCartesian"));
    struct Params_Spherical2DToUnitCartesian {
        FVector2D A; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_Spherical2DToUnitCartesian params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Sin(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Sin"));
    struct Params_Sin {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Sin params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int64_t UKismetMathLibrary::SignOfInteger64(int64_t A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SignOfInteger64"));
    struct Params_SignOfInteger64 {
        int64_t A; // 0x0
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SignOfInteger64 params{};
    params.A = (int64_t)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Multiply_Vector2DFloat(FVector2D A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_Vector2DFloat"));
    struct Params_Multiply_Vector2DFloat {
        FVector2D A; // 0x0
        float B; // 0x8
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Multiply_Vector2DFloat params{};
    params.A = (FVector2D)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
int32_t UKismetMathLibrary::SignOfInteger(int32_t A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SignOfInteger"));
    struct Params_SignOfInteger {
        int32_t A; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_SignOfInteger params{};
    params.A = (int32_t)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::SignOfFloat(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SignOfFloat"));
    struct Params_SignOfFloat {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_SignOfFloat params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Quat_GetAngle(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_GetAngle"));
    struct Params_Quat_GetAngle {
        FQuat Q; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Quat_GetAngle params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (float)params.ReturnValue;
}
FColor UKismetMathLibrary::LinearColor_Quantize(FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Quantize"));
    struct Params_LinearColor_Quantize {
        FLinearColor InColor; // 0x0
        FColor ReturnValue; // 0x10
    }; // Size: 0x14
    Params_LinearColor_Quantize params{};
    params.InColor = (FLinearColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
void UKismetMathLibrary::Set2D(FVector2D& A, float X, float Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Set2D"));
    struct Params_Set2D {
        FVector2D A; // 0x0
        float X; // 0x8
        float Y; // 0xc
    }; // Size: 0x10
    Params_Set2D params{};
    params.A = (FVector2D)A;
    params.X = (float)X;
    params.Y = (float)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
FVector UKismetMathLibrary::SelectVector(FVector A, FVector B, bool bPickA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectVector"));
    struct Params_SelectVector {
        FVector A; // 0x0
        FVector B; // 0xc
        bool bPickA; // 0x18
        char pad_19[0x3];
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_SelectVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    params.bPickA = (bool)bPickA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTransform UKismetMathLibrary::SelectTransform(FTransform& A, FTransform& B, bool bPickA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectTransform"));
    struct Params_SelectTransform {
        FTransform A; // 0x0
        FTransform B; // 0x30
        bool bPickA; // 0x60
        char pad_61[0xf];
        FTransform ReturnValue; // 0x70
    }; // Size: 0xa0
    Params_SelectTransform params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    params.bPickA = (bool)bPickA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FTransform)params.ReturnValue;
}
float UKismetMathLibrary::Cos(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Cos"));
    struct Params_Cos {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Cos params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UKismetMathLibrary::SelectRotator(FRotator A, FRotator B, bool bPickA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectRotator"));
    struct Params_SelectRotator {
        FRotator A; // 0x0
        FRotator B; // 0xc
        bool bPickA; // 0x18
        char pad_19[0x3];
        FRotator ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_SelectRotator params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.bPickA = (bool)bPickA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
float UKismetMathLibrary::GridSnap_Float(float Location, float GridSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GridSnap_Float"));
    struct Params_GridSnap_Float {
        float Location; // 0x0
        float GridSize; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GridSnap_Float params{};
    params.Location = (float)Location;
    params.GridSize = (float)GridSize;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::Matrix_GetFrustumNearPlane(FMatrix& M, FPlane& OutPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumNearPlane"));
    struct Params_Matrix_GetFrustumNearPlane {
        FMatrix M; // 0x0
        FPlane OutPlane; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_Matrix_GetFrustumNearPlane params{};
    params.M = (FMatrix)M;
    params.OutPlane = (FPlane)OutPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    OutPlane = params.OutPlane;
    return (bool)params.ReturnValue;
}
UObject* UKismetMathLibrary::SelectObject(UObject* A, UObject* B, bool bSelectA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectObject"));
    struct Params_SelectObject {
        UObject* A; // 0x0
        UObject* B; // 0x8
        bool bSelectA; // 0x10
        char pad_11[0x7];
        UObject* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SelectObject params{};
    params.A = (UObject*)A;
    params.B = (UObject*)B;
    params.bSelectA = (bool)bSelectA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_FloatFloat"));
    struct Params_EqualEqual_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EqualEqual_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::SelectInt(int32_t A, int32_t B, bool bPickA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectInt"));
    struct Params_SelectInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        bool bPickA; // 0x8
        char pad_9[0x3];
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_SelectInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    params.bPickA = (bool)bPickA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::SelectFloat(float A, float B, bool bPickA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectFloat"));
    struct Params_SelectFloat {
        float A; // 0x0
        float B; // 0x4
        bool bPickA; // 0x8
        char pad_9[0x3];
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_SelectFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    params.bPickA = (bool)bPickA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Quat_AngularDistance(FQuat& A, FQuat& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_AngularDistance"));
    struct Params_Quat_AngularDistance {
        FQuat A; // 0x0
        FQuat B; // 0x10
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_Quat_AngularDistance params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (float)params.ReturnValue;
}
FRotator UKismetMathLibrary::RLerp(FRotator A, FRotator B, float Alpha, bool bShortestPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RLerp"));
    struct Params_RLerp {
        FRotator A; // 0x0
        FRotator B; // 0xc
        float Alpha; // 0x18
        bool bShortestPath; // 0x1c
        char pad_1d[0x3];
        FRotator ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_RLerp params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.Alpha = (float)Alpha;
    params.bShortestPath = (bool)bShortestPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::SelectColor(FLinearColor A, FLinearColor B, bool bPickA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectColor"));
    struct Params_SelectColor {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        bool bPickA; // 0x20
        char pad_21[0x3];
        FLinearColor ReturnValue; // 0x24
    }; // Size: 0x34
    Params_SelectColor params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    params.bPickA = (bool)bPickA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorFromStream(FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorFromStream"));
    struct Params_RandomUnitVectorFromStream {
        FRandomStream Stream; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_RandomUnitVectorFromStream params{};
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::LinearColor_GetMin(FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_GetMin"));
    struct Params_LinearColor_GetMin {
        FLinearColor InColor; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_LinearColor_GetMin params{};
    params.InColor = (FLinearColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UClass* UKismetMathLibrary::SelectClass(UClass* A, UClass* B, bool bSelectA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SelectClass"));
    struct Params_SelectClass {
        UClass* A; // 0x0
        UClass* B; // 0x8
        bool bSelectA; // 0x10
        char pad_11[0x7];
        UClass* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SelectClass params{};
    params.A = (UClass*)A;
    params.B = (UClass*)B;
    params.bSelectA = (bool)bSelectA;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
FRotator UKismetMathLibrary::RInterpTo(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RInterpTo"));
    struct Params_RInterpTo {
        FRotator Current; // 0x0
        FRotator Target; // 0xc
        float DeltaTime; // 0x18
        float InterpSpeed; // 0x1c
        FRotator ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_RInterpTo params{};
    params.Current = (FRotator)Current;
    params.Target = (FRotator)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void UKismetMathLibrary::SeedRandomStream(FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SeedRandomStream"));
    struct Params_SeedRandomStream {
        FRandomStream Stream; // 0x0
    }; // Size: 0x8
    Params_SeedRandomStream params{};
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
}
bool UKismetMathLibrary::Quat_IsNormalized(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_IsNormalized"));
    struct Params_Quat_IsNormalized {
        FQuat Q; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Quat_IsNormalized params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::SafeDivide(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.SafeDivide"));
    struct Params_SafeDivide {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_SafeDivide params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int64_t UKismetMathLibrary::Round64(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Round64"));
    struct Params_Round64 {
        float A; // 0x0
        char pad_4[0x4];
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Round64 params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FRotator UKismetMathLibrary::RotatorFromAxisAndAngle(FVector Axis, float Angle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RotatorFromAxisAndAngle"));
    struct Params_RotatorFromAxisAndAngle {
        FVector Axis; // 0x0
        float Angle; // 0xc
        FRotator ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_RotatorFromAxisAndAngle params{};
    params.Axis = (FVector)Axis;
    params.Angle = (float)Angle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::RotateAngleAxis(FVector InVect, float AngleDeg, FVector Axis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RotateAngleAxis"));
    struct Params_RotateAngleAxis {
        FVector InVect; // 0x0
        float AngleDeg; // 0xc
        FVector Axis; // 0x10
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_RotateAngleAxis params{};
    params.InVect = (FVector)InVect;
    params.AngleDeg = (float)AngleDeg;
    params.Axis = (FVector)Axis;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::MinOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MinOfIntArray"));
    struct Params_MinOfIntArray {
        TArray<int32_t> IntArray; // 0x0
        int32_t IndexOfMinValue; // 0x10
        int32_t MinValue; // 0x14
    }; // Size: 0x18
    Params_MinOfIntArray params{};
    params.IntArray = (TArray<int32_t>)IntArray;
    params.IndexOfMinValue = (int32_t)IndexOfMinValue;
    params.MinValue = (int32_t)MinValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MinValue = params.MinValue;
    IntArray = params.IntArray;
    IndexOfMinValue = params.IndexOfMinValue;
}
FLinearColor UKismetMathLibrary::LinearColor_Transparent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Transparent"));
    struct Params_LinearColor_Transparent {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_Transparent params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UKismetMathLibrary::Matrix_SetAxis(FMatrix& M, EAxis::Type Axis, FVector AxisVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_SetAxis"));
    struct Params_Matrix_SetAxis {
        FMatrix M; // 0x0
        EAxis::Type Axis; // 0x40
        char pad_41[0x3];
        FVector AxisVector; // 0x44
    }; // Size: 0x50
    Params_Matrix_SetAxis params{};
    params.M = (FMatrix)M;
    params.Axis = (EAxis::Type)Axis;
    params.AxisVector = (FVector)AxisVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
}
FRotator UKismetMathLibrary::RInterpTo_Constant(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RInterpTo_Constant"));
    struct Params_RInterpTo_Constant {
        FRotator Current; // 0x0
        FRotator Target; // 0xc
        float DeltaTime; // 0x18
        float InterpSpeed; // 0x1c
        FRotator ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_RInterpTo_Constant params{};
    params.Current = (FRotator)Current;
    params.Target = (FRotator)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
float UKismetMathLibrary::GetMaxElement(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMaxElement"));
    struct Params_GetMaxElement {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetMaxElement params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::RGBToHSV_Vector(FLinearColor RGB, FLinearColor& HSV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RGBToHSV_Vector"));
    struct Params_RGBToHSV_Vector {
        FLinearColor RGB; // 0x0
        FLinearColor HSV; // 0x10
    }; // Size: 0x20
    Params_RGBToHSV_Vector params{};
    params.RGB = (FLinearColor)RGB;
    params.HSV = (FLinearColor)HSV;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HSV = params.HSV;
}
void UKismetMathLibrary::RGBToHSV(FLinearColor InColor, float& H, float& S, float& V, float& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RGBToHSV"));
    struct Params_RGBToHSV {
        FLinearColor InColor; // 0x0
        float H; // 0x10
        float S; // 0x14
        float V; // 0x18
        float A; // 0x1c
    }; // Size: 0x20
    Params_RGBToHSV params{};
    params.InColor = (FLinearColor)InColor;
    params.H = (float)H;
    params.S = (float)S;
    params.V = (float)V;
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    H = params.H;
    S = params.S;
    V = params.V;
    A = params.A;
}
FMatrix UKismetMathLibrary::Matrix_RemoveTranslation(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_RemoveTranslation"));
    struct Params_Matrix_RemoveTranslation {
        FMatrix M; // 0x0
        FMatrix ReturnValue; // 0x40
    }; // Size: 0x80
    Params_Matrix_RemoveTranslation params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
bool UKismetMathLibrary::GreaterEqual_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GreaterEqual_IntInt"));
    struct Params_GreaterEqual_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GreaterEqual_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::RGBLinearToHSV(FLinearColor RGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RGBLinearToHSV"));
    struct Params_RGBLinearToHSV {
        FLinearColor RGB; // 0x0
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_RGBLinearToHSV params{};
    params.RGB = (FLinearColor)RGB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
float UKismetMathLibrary::RadiansToDegrees(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RadiansToDegrees"));
    struct Params_RadiansToDegrees {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_RadiansToDegrees params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Multiply_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_FloatFloat"));
    struct Params_Multiply_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Multiply_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::ResetVectorSpringState(FVectorSpringState& SpringState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ResetVectorSpringState"));
    struct Params_ResetVectorSpringState {
        FVectorSpringState SpringState; // 0x0
    }; // Size: 0x18
    Params_ResetVectorSpringState params{};
    params.SpringState = (FVectorSpringState)SpringState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpringState = params.SpringState;
}
FMatrix UKismetMathLibrary::Matrix_ScaleTranslation(FMatrix& M, FVector Scale3D) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_ScaleTranslation"));
    struct Params_Matrix_ScaleTranslation {
        FMatrix M; // 0x0
        FVector Scale3D; // 0x40
        char pad_4c[0x4];
        FMatrix ReturnValue; // 0x50
    }; // Size: 0x90
    Params_Matrix_ScaleTranslation params{};
    params.M = (FMatrix)M;
    params.Scale3D = (FVector)Scale3D;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
void UKismetMathLibrary::ResetRandomStream(FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ResetRandomStream"));
    struct Params_ResetRandomStream {
        FRandomStream Stream; // 0x0
    }; // Size: 0x8
    Params_ResetRandomStream params{};
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
}
bool UKismetMathLibrary::Quat_IsIdentity(FQuat& Q, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_IsIdentity"));
    struct Params_Quat_IsIdentity {
        FQuat Q; // 0x0
        float Tolerance; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Quat_IsIdentity params{};
    params.Q = (FQuat)Q;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (bool)params.ReturnValue;
}
void UKismetMathLibrary::ResetFloatSpringState(FFloatSpringState& SpringState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ResetFloatSpringState"));
    struct Params_ResetFloatSpringState {
        FFloatSpringState SpringState; // 0x0
    }; // Size: 0x8
    Params_ResetFloatSpringState params{};
    params.SpringState = (FFloatSpringState)SpringState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpringState = params.SpringState;
}
FVector UKismetMathLibrary::LessLess_VectorRotator(FVector A, FRotator B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LessLess_VectorRotator"));
    struct Params_LessLess_VectorRotator {
        FVector A; // 0x0
        FRotator B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_LessLess_VectorRotator params{};
    params.A = (FVector)A;
    params.B = (FRotator)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UKismetMathLibrary::REase(FRotator A, FRotator B, float Alpha, bool bShortestPath, EEasingFunc::Type EasingFunc, float BlendExp, int32_t Steps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.REase"));
    struct Params_REase {
        FRotator A; // 0x0
        FRotator B; // 0xc
        float Alpha; // 0x18
        bool bShortestPath; // 0x1c
        EEasingFunc::Type EasingFunc; // 0x1d
        char pad_1e[0x2];
        float BlendExp; // 0x20
        int32_t Steps; // 0x24
        FRotator ReturnValue; // 0x28
    }; // Size: 0x34
    Params_REase params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.Alpha = (float)Alpha;
    params.bShortestPath = (bool)bShortestPath;
    params.EasingFunc = (EEasingFunc::Type)EasingFunc;
    params.BlendExp = (float)BlendExp;
    params.Steps = (int32_t)Steps;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Matrix_GetMatrixWithoutScale(FMatrix& M, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetMatrixWithoutScale"));
    struct Params_Matrix_GetMatrixWithoutScale {
        FMatrix M; // 0x0
        float Tolerance; // 0x40
        char pad_44[0xc];
        FMatrix ReturnValue; // 0x50
    }; // Size: 0x90
    Params_Matrix_GetMatrixWithoutScale params{};
    params.M = (FMatrix)M;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadiansFromStream(FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInRadiansFromStream"));
    struct Params_RandomUnitVectorInEllipticalConeInRadiansFromStream {
        FVector ConeDir; // 0x0
        float MaxYawInRadians; // 0xc
        float MaxPitchInRadians; // 0x10
        FRandomStream Stream; // 0x14
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_RandomUnitVectorInEllipticalConeInRadiansFromStream params{};
    params.ConeDir = (FVector)ConeDir;
    params.MaxYawInRadians = (float)MaxYawInRadians;
    params.MaxPitchInRadians = (float)MaxPitchInRadians;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConeDir = params.ConeDir;
    Stream = params.Stream;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Lerp(float A, float B, float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Lerp"));
    struct Params_Lerp {
        float A; // 0x0
        float B; // 0x4
        float Alpha; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Lerp params{};
    params.A = (float)A;
    params.B = (float)B;
    params.Alpha = (float)Alpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::IsZero2D(FVector2D& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IsZero2D"));
    struct Params_IsZero2D {
        FVector2D A; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsZero2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegreesFromStream(FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInDegreesFromStream"));
    struct Params_RandomUnitVectorInEllipticalConeInDegreesFromStream {
        FVector ConeDir; // 0x0
        float MaxYawInDegrees; // 0xc
        float MaxPitchInDegrees; // 0x10
        FRandomStream Stream; // 0x14
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_RandomUnitVectorInEllipticalConeInDegreesFromStream params{};
    params.ConeDir = (FVector)ConeDir;
    params.MaxYawInDegrees = (float)MaxYawInDegrees;
    params.MaxPitchInDegrees = (float)MaxPitchInDegrees;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConeDir = params.ConeDir;
    Stream = params.Stream;
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::Not_PreBool(bool A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Not_PreBool"));
    struct Params_Not_PreBool {
        bool A; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_Not_PreBool params{};
    params.A = (bool)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int64_t UKismetMathLibrary::Divide_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_Int64Int64"));
    struct Params_Divide_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Divide_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegrees(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInDegrees"));
    struct Params_RandomUnitVectorInEllipticalConeInDegrees {
        FVector ConeDir; // 0x0
        float MaxYawInDegrees; // 0xc
        float MaxPitchInDegrees; // 0x10
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_RandomUnitVectorInEllipticalConeInDegrees params{};
    params.ConeDir = (FVector)ConeDir;
    params.MaxYawInDegrees = (float)MaxYawInDegrees;
    params.MaxPitchInDegrees = (float)MaxPitchInDegrees;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInConeInRadiansFromStream(FVector& ConeDir, float ConeHalfAngleInRadians, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInRadiansFromStream"));
    struct Params_RandomUnitVectorInConeInRadiansFromStream {
        FVector ConeDir; // 0x0
        float ConeHalfAngleInRadians; // 0xc
        FRandomStream Stream; // 0x10
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_RandomUnitVectorInConeInRadiansFromStream params{};
    params.ConeDir = (FVector)ConeDir;
    params.ConeHalfAngleInRadians = (float)ConeHalfAngleInRadians;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConeDir = params.ConeDir;
    Stream = params.Stream;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Matrix_GetMaximumAxisScale(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetMaximumAxisScale"));
    struct Params_Matrix_GetMaximumAxisScale {
        FMatrix M; // 0x0
        float ReturnValue; // 0x40
    }; // Size: 0x44
    Params_Matrix_GetMaximumAxisScale params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (float)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Normal2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Normal2D"));
    struct Params_Normal2D {
        FVector2D A; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Normal2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInConeInRadians(FVector ConeDir, float ConeHalfAngleInRadians) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInRadians"));
    struct Params_RandomUnitVectorInConeInRadians {
        FVector ConeDir; // 0x0
        float ConeHalfAngleInRadians; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_RandomUnitVectorInConeInRadians params{};
    params.ConeDir = (FVector)ConeDir;
    params.ConeHalfAngleInRadians = (float)ConeHalfAngleInRadians;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInConeInDegreesFromStream(FVector& ConeDir, float ConeHalfAngleInDegrees, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInDegreesFromStream"));
    struct Params_RandomUnitVectorInConeInDegreesFromStream {
        FVector ConeDir; // 0x0
        float ConeHalfAngleInDegrees; // 0xc
        FRandomStream Stream; // 0x10
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_RandomUnitVectorInConeInDegreesFromStream params{};
    params.ConeDir = (FVector)ConeDir;
    params.ConeHalfAngleInDegrees = (float)ConeHalfAngleInDegrees;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConeDir = params.ConeDir;
    Stream = params.Stream;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomUnitVectorInConeInDegrees(FVector ConeDir, float ConeHalfAngleInDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInDegrees"));
    struct Params_RandomUnitVectorInConeInDegrees {
        FVector ConeDir; // 0x0
        float ConeHalfAngleInDegrees; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_RandomUnitVectorInConeInDegrees params{};
    params.ConeDir = (FVector)ConeDir;
    params.ConeHalfAngleInDegrees = (float)ConeHalfAngleInDegrees;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UKismetMathLibrary::RandomRotator(bool bRoll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomRotator"));
    struct Params_RandomRotator {
        bool bRoll; // 0x0
        char pad_1[0x3];
        FRotator ReturnValue; // 0x4
    }; // Size: 0x10
    Params_RandomRotator params{};
    params.bRoll = (bool)bRoll;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::RandomPointInBoundingBoxFromStream(FVector Origin, FVector BoxExtent, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomPointInBoundingBoxFromStream"));
    struct Params_RandomPointInBoundingBoxFromStream {
        FVector Origin; // 0x0
        FVector BoxExtent; // 0xc
        FRandomStream Stream; // 0x18
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_RandomPointInBoundingBoxFromStream params{};
    params.Origin = (FVector)Origin;
    params.BoxExtent = (FVector)BoxExtent;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (FVector)params.ReturnValue;
}
int32_t UKismetMathLibrary::RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomIntegerInRangeFromStream"));
    struct Params_RandomIntegerInRangeFromStream {
        int32_t Min; // 0x0
        int32_t Max; // 0x4
        FRandomStream Stream; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_RandomIntegerInRangeFromStream params{};
    params.Min = (int32_t)Min;
    params.Max = (int32_t)Max;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (int32_t)params.ReturnValue;
}
FVector UKismetMathLibrary::NegateVector(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NegateVector"));
    struct Params_NegateVector {
        FVector A; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_NegateVector params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::RandomBoolFromStream(FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomBoolFromStream"));
    struct Params_RandomBoolFromStream {
        FRandomStream Stream; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RandomBoolFromStream params{};
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::RandomIntegerInRange(int32_t Min, int32_t Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomIntegerInRange"));
    struct Params_RandomIntegerInRange {
        int32_t Min; // 0x0
        int32_t Max; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RandomIntegerInRange params{};
    params.Min = (int32_t)Min;
    params.Max = (int32_t)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_RotatorRotator"));
    struct Params_NotEqual_RotatorRotator {
        FRotator A; // 0x0
        FRotator B; // 0xc
        float ErrorTolerance; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_NotEqual_RotatorRotator params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::RandomIntegerFromStream(int32_t Max, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomIntegerFromStream"));
    struct Params_RandomIntegerFromStream {
        int32_t Max; // 0x0
        FRandomStream Stream; // 0x4
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_RandomIntegerFromStream params{};
    params.Max = (int32_t)Max;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (int32_t)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_GetRotationAxis(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_GetRotationAxis"));
    struct Params_Quat_GetRotationAxis {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_GetRotationAxis params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_LinearColorLinearColor"));
    struct Params_NotEqual_LinearColorLinearColor {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_NotEqual_LinearColorLinearColor params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Matrix_GetFrustumTopPlane(FMatrix& M, FPlane& OutPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumTopPlane"));
    struct Params_Matrix_GetFrustumTopPlane {
        FMatrix M; // 0x0
        FPlane OutPlane; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_Matrix_GetFrustumTopPlane params{};
    params.M = (FMatrix)M;
    params.OutPlane = (FPlane)OutPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    OutPlane = params.OutPlane;
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::Asin(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Asin"));
    struct Params_Asin {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Asin params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FDateTime UKismetMathLibrary::Now() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Now"));
    struct Params_Now {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Now params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
FColor UKismetMathLibrary::Conv_LinearColorToColor(FLinearColor InLinearColor, bool InUseSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_LinearColorToColor"));
    struct Params_Conv_LinearColorToColor {
        FLinearColor InLinearColor; // 0x0
        bool InUseSRGB; // 0x10
        char pad_11[0x3];
        FColor ReturnValue; // 0x14
    }; // Size: 0x18
    Params_Conv_LinearColorToColor params{};
    params.InLinearColor = (FLinearColor)InLinearColor;
    params.InUseSRGB = (bool)InUseSRGB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
int32_t UKismetMathLibrary::RandomInteger(int32_t Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomInteger"));
    struct Params_RandomInteger {
        int32_t Max; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_RandomInteger params{};
    params.Max = (int32_t)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Matrix_GetInverse(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetInverse"));
    struct Params_Matrix_GetInverse {
        FMatrix M; // 0x0
        FMatrix ReturnValue; // 0x40
    }; // Size: 0x80
    Params_Matrix_GetInverse params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
float UKismetMathLibrary::RandomFloatInRangeFromStream(float Min, float Max, FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomFloatInRangeFromStream"));
    struct Params_RandomFloatInRangeFromStream {
        float Min; // 0x0
        float Max; // 0x4
        FRandomStream Stream; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_RandomFloatInRangeFromStream params{};
    params.Min = (float)Min;
    params.Max = (float)Max;
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (float)params.ReturnValue;
}
FTransform UKismetMathLibrary::InvertTransform(FTransform& T) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.InvertTransform"));
    struct Params_InvertTransform {
        FTransform T; // 0x0
        FTransform ReturnValue; // 0x30
    }; // Size: 0x60
    Params_InvertTransform params{};
    params.T = (FTransform)T;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    T = params.T;
    return (FTransform)params.ReturnValue;
}
float UKismetMathLibrary::RandomFloatInRange(float Min, float Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomFloatInRange"));
    struct Params_RandomFloatInRange {
        float Min; // 0x0
        float Max; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RandomFloatInRange params{};
    params.Min = (float)Min;
    params.Max = (float)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::RandomFloatFromStream(FRandomStream& Stream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomFloatFromStream"));
    struct Params_RandomFloatFromStream {
        FRandomStream Stream; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RandomFloatFromStream params{};
    params.Stream = (FRandomStream)Stream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Stream = params.Stream;
    return (float)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Percent_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Percent_ByteByte"));
    struct Params_Percent_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        uint8_t ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Percent_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
float UKismetMathLibrary::RandomFloat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomFloat"));
    struct Params_RandomFloat {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_RandomFloat params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::RandomBoolWithWeightFromStream(float weight, FRandomStream& RandomStream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomBoolWithWeightFromStream"));
    struct Params_RandomBoolWithWeightFromStream {
        float weight; // 0x0
        FRandomStream RandomStream; // 0x4
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_RandomBoolWithWeightFromStream params{};
    params.weight = (float)weight;
    params.RandomStream = (FRandomStream)RandomStream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RandomStream = params.RandomStream;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::RandomBoolWithWeight(float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.RandomBoolWithWeight"));
    struct Params_RandomBoolWithWeight {
        float weight; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_RandomBoolWithWeight params{};
    params.weight = (float)weight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FQuat UKismetMathLibrary::Quat_MakeFromEuler(FVector& Euler) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_MakeFromEuler"));
    struct Params_Quat_MakeFromEuler {
        FVector Euler; // 0x0
        char pad_c[0x4];
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Quat_MakeFromEuler params{};
    params.Euler = (FVector)Euler;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Euler = params.Euler;
    return (FQuat)params.ReturnValue;
}
float UKismetMathLibrary::Percent_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Percent_FloatFloat"));
    struct Params_Percent_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Percent_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_VectorUp(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_VectorUp"));
    struct Params_Quat_VectorUp {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_VectorUp params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::Quat_IsNonFinite(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_IsNonFinite"));
    struct Params_Quat_IsNonFinite {
        FQuat Q; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Quat_IsNonFinite params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_VectorRight(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_VectorRight"));
    struct Params_Quat_VectorRight {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_VectorRight params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_VectorForward(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_VectorForward"));
    struct Params_Quat_VectorForward {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_VectorForward params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
int64_t UKismetMathLibrary::MinInt64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MinInt64"));
    struct Params_MinInt64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_MinInt64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_UnrotateVector(FQuat& Q, FVector& V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_UnrotateVector"));
    struct Params_Quat_UnrotateVector {
        FQuat Q; // 0x0
        FVector V; // 0x10
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_Quat_UnrotateVector params{};
    params.Q = (FQuat)Q;
    params.V = (FVector)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    V = params.V;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Quat_Size(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Size"));
    struct Params_Quat_Size {
        FQuat Q; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Quat_Size params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::LinearColor_SetFromSRGB(FLinearColor& InOutColor, FColor& InSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_SetFromSRGB"));
    struct Params_LinearColor_SetFromSRGB {
        FLinearColor InOutColor; // 0x0
        FColor InSRGB; // 0x10
    }; // Size: 0x14
    Params_LinearColor_SetFromSRGB params{};
    params.InOutColor = (FLinearColor)InOutColor;
    params.InSRGB = (FColor)InSRGB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutColor = params.InOutColor;
    InSRGB = params.InSRGB;
}
void UKismetMathLibrary::Quat_SetFromEuler(FQuat& Q, FVector& Euler) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_SetFromEuler"));
    struct Params_Quat_SetFromEuler {
        FQuat Q; // 0x0
        FVector Euler; // 0x10
    }; // Size: 0x1c
    Params_Quat_SetFromEuler params{};
    params.Q = (FQuat)Q;
    params.Euler = (FVector)Euler;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    Euler = params.Euler;
}
void UKismetMathLibrary::Quat_SetComponents(FQuat& Q, float X, float Y, float Z, float W) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_SetComponents"));
    struct Params_Quat_SetComponents {
        FQuat Q; // 0x0
        float X; // 0x10
        float Y; // 0x14
        float Z; // 0x18
        float W; // 0x1c
    }; // Size: 0x20
    Params_Quat_SetComponents params{};
    params.Q = (FQuat)Q;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.W = (float)W;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
}
FRotator UKismetMathLibrary::Quat_Rotator(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Rotator"));
    struct Params_Quat_Rotator {
        FQuat Q; // 0x0
        FRotator ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_Rotator params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FRotator)params.ReturnValue;
}
FTimespan UKismetMathLibrary::FromSeconds(float Seconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FromSeconds"));
    struct Params_FromSeconds {
        float Seconds; // 0x0
        char pad_4[0x4];
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FromSeconds params{};
    params.Seconds = (float)Seconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_RotateVector(FQuat& Q, FVector& V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_RotateVector"));
    struct Params_Quat_RotateVector {
        FQuat Q; // 0x0
        FVector V; // 0x10
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_Quat_RotateVector params{};
    params.Q = (FQuat)Q;
    params.V = (FVector)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    V = params.V;
    return (FVector)params.ReturnValue;
}
FQualifiedFrameTime UKismetMathLibrary::MakeQualifiedFrameTime(FFrameNumber Frame, FFrameRate FrameRate, float SubFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeQualifiedFrameTime"));
    struct Params_MakeQualifiedFrameTime {
        FFrameNumber Frame; // 0x0
        FFrameRate FrameRate; // 0x4
        float SubFrame; // 0xc
        FQualifiedFrameTime ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeQualifiedFrameTime params{};
    params.Frame = (FFrameNumber)Frame;
    params.FrameRate = (FFrameRate)FrameRate;
    params.SubFrame = (float)SubFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQualifiedFrameTime)params.ReturnValue;
}
void UKismetMathLibrary::LinearColor_SetFromHSV(FLinearColor& InOutColor, float H, float S, float V, float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_SetFromHSV"));
    struct Params_LinearColor_SetFromHSV {
        FLinearColor InOutColor; // 0x0
        float H; // 0x10
        float S; // 0x14
        float V; // 0x18
        float A; // 0x1c
    }; // Size: 0x20
    Params_LinearColor_SetFromHSV params{};
    params.InOutColor = (FLinearColor)InOutColor;
    params.H = (float)H;
    params.S = (float)S;
    params.V = (float)V;
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutColor = params.InOutColor;
}
FIntPoint UKismetMathLibrary::IntPoint_Up() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IntPoint_Up"));
    struct Params_IntPoint_Up {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_IntPoint_Up params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FVector UKismetMathLibrary::GetDirectionUnitVector(FVector From, FVector To) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetDirectionUnitVector"));
    struct Params_GetDirectionUnitVector {
        FVector From; // 0x0
        FVector To; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetDirectionUnitVector params{};
    params.From = (FVector)From;
    params.To = (FVector)To;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Add_Vector2DVector2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_Vector2DVector2D"));
    struct Params_Add_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Add_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FQuat UKismetMathLibrary::Quat_Normalized(FQuat& Q, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Normalized"));
    struct Params_Quat_Normalized {
        FQuat Q; // 0x0
        float Tolerance; // 0x10
        char pad_14[0xc];
        FQuat ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Quat_Normalized params{};
    params.Q = (FQuat)Q;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FQuat)params.ReturnValue;
}
void UKismetMathLibrary::Quat_Normalize(FQuat& Q, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Normalize"));
    struct Params_Quat_Normalize {
        FQuat Q; // 0x0
        float Tolerance; // 0x10
    }; // Size: 0x14
    Params_Quat_Normalize params{};
    params.Q = (FQuat)Q;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
}
bool UKismetMathLibrary::Quat_IsFinite(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_IsFinite"));
    struct Params_Quat_IsFinite {
        FQuat Q; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Quat_IsFinite params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_ByteByte"));
    struct Params_NotEqual_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_NotEqual_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FQuat UKismetMathLibrary::Quat_Inversed(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Inversed"));
    struct Params_Quat_Inversed {
        FQuat Q; // 0x0
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Quat_Inversed params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FQuat)params.ReturnValue;
}
FQuat UKismetMathLibrary::Quat_Identity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Identity"));
    struct Params_Quat_Identity {
        FQuat ReturnValue; // 0x0
    }; // Size: 0x10
    Params_Quat_Identity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqualExactly_Vector2DVector2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqualExactly_Vector2DVector2D"));
    struct Params_NotEqualExactly_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqualExactly_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_GetAxisZ(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_GetAxisZ"));
    struct Params_Quat_GetAxisZ {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_GetAxisZ params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_GetAxisY(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_GetAxisY"));
    struct Params_Quat_GetAxisY {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_GetAxisY params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_GetAxisX(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_GetAxisX"));
    struct Params_Quat_GetAxisX {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_GetAxisX params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
FQuat UKismetMathLibrary::Quat_Exp(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Exp"));
    struct Params_Quat_Exp {
        FQuat Q; // 0x0
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Quat_Exp params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FQuat)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_Yellow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Yellow"));
    struct Params_LinearColor_Yellow {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_Yellow params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FVector UKismetMathLibrary::Quat_Euler(FQuat& Q) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Quat_Euler"));
    struct Params_Quat_Euler {
        FQuat Q; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Quat_Euler params{};
    params.Q = (FQuat)Q;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Q = params.Q;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Matrix_GetUnitAxis(FMatrix& M, EAxis::Type Axis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetUnitAxis"));
    struct Params_Matrix_GetUnitAxis {
        FMatrix M; // 0x0
        EAxis::Type Axis; // 0x40
        char pad_41[0x3];
        FVector ReturnValue; // 0x44
    }; // Size: 0x50
    Params_Matrix_GetUnitAxis params{};
    params.M = (FMatrix)M;
    params.Axis = (EAxis::Type)Axis;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_MatrixMatrix(FMatrix& A, FMatrix& B, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_MatrixMatrix"));
    struct Params_EqualEqual_MatrixMatrix {
        FMatrix A; // 0x0
        FMatrix B; // 0x40
        float Tolerance; // 0x80
        bool ReturnValue; // 0x84
    }; // Size: 0x85
    Params_EqualEqual_MatrixMatrix params{};
    params.A = (FMatrix)A;
    params.B = (FMatrix)B;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_MatrixMatrix(FMatrix& A, FMatrix& B, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_MatrixMatrix"));
    struct Params_NotEqual_MatrixMatrix {
        FMatrix A; // 0x0
        FMatrix B; // 0x40
        float Tolerance; // 0x80
        bool ReturnValue; // 0x84
    }; // Size: 0x85
    Params_NotEqual_MatrixMatrix params{};
    params.A = (FMatrix)A;
    params.B = (FMatrix)B;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::ProjectPointOnToPlane(FVector Point, FVector PlaneBase, FVector PlaneNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ProjectPointOnToPlane"));
    struct Params_ProjectPointOnToPlane {
        FVector Point; // 0x0
        FVector PlaneBase; // 0xc
        FVector PlaneNormal; // 0x18
        FVector ReturnValue; // 0x24
    }; // Size: 0x30
    Params_ProjectPointOnToPlane params{};
    params.Point = (FVector)Point;
    params.PlaneBase = (FVector)PlaneBase;
    params.PlaneNormal = (FVector)PlaneNormal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::PointsAreCoplanar(TArray<FVector>& Points, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.PointsAreCoplanar"));
    struct Params_PointsAreCoplanar {
        TArray<FVector> Points; // 0x0
        float Tolerance; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_PointsAreCoplanar params{};
    params.Points = (TArray<FVector>)Points;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Points = params.Points;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_RotatorRotator"));
    struct Params_EqualEqual_RotatorRotator {
        FRotator A; // 0x0
        FRotator B; // 0xc
        float ErrorTolerance; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_EqualEqual_RotatorRotator params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::PerlinNoise1D(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.PerlinNoise1D"));
    struct Params_PerlinNoise1D {
        float Value; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_PerlinNoise1D params{};
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::Percent_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Percent_IntInt"));
    struct Params_Percent_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Percent_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotator(float Roll, float Pitch, float Yaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotator"));
    struct Params_MakeRotator {
        float Roll; // 0x0
        float Pitch; // 0x4
        float Yaw; // 0x8
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_MakeRotator params{};
    params.Roll = (float)Roll;
    params.Pitch = (float)Pitch;
    params.Yaw = (float)Yaw;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
bool UKismetMathLibrary::LinearColor_IsNearEqual(FLinearColor A, FLinearColor B, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_IsNearEqual"));
    struct Params_LinearColor_IsNearEqual {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        float Tolerance; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_LinearColor_IsNearEqual params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetMathLibrary::Matrix_SetColumn(FMatrix& M, EMatrixColumns::Type Column, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_SetColumn"));
    struct Params_Matrix_SetColumn {
        FMatrix M; // 0x0
        EMatrixColumns::Type Column; // 0x40
        char pad_41[0x3];
        FVector Value; // 0x44
    }; // Size: 0x50
    Params_Matrix_SetColumn params{};
    params.M = (FMatrix)M;
    params.Column = (EMatrixColumns::Type)Column;
    params.Value = (FVector)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
}
int32_t UKismetMathLibrary::Or_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Or_IntInt"));
    struct Params_Or_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Or_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int64_t UKismetMathLibrary::Or_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Or_Int64Int64"));
    struct Params_Or_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Or_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_ToNewOpacity(FLinearColor InColor, float InOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_ToNewOpacity"));
    struct Params_LinearColor_ToNewOpacity {
        FLinearColor InColor; // 0x0
        float InOpacity; // 0x10
        FLinearColor ReturnValue; // 0x14
    }; // Size: 0x24
    Params_LinearColor_ToNewOpacity params{};
    params.InColor = (FLinearColor)InColor;
    params.InOpacity = (float)InOpacity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqualExactly_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqualExactly_VectorVector"));
    struct Params_NotEqualExactly_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_NotEqualExactly_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_VectorVector(FVector A, FVector B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_VectorVector"));
    struct Params_NotEqual_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        float ErrorTolerance; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_NotEqual_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqualExactly_Vector4Vector4(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqualExactly_Vector4Vector4"));
    struct Params_NotEqualExactly_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_NotEqualExactly_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_Vector4Vector4(FVector4& A, FVector4& B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_Vector4Vector4"));
    struct Params_NotEqual_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        float ErrorTolerance; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_NotEqual_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_Vector2DVector2D"));
    struct Params_NotEqual_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        float ErrorTolerance; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_NotEqual_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Add_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_VectorVector"));
    struct Params_Add_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Add_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_QuatQuat(FQuat& A, FQuat& B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_QuatQuat"));
    struct Params_NotEqual_QuatQuat {
        FQuat A; // 0x0
        FQuat B; // 0x10
        float ErrorTolerance; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_NotEqual_QuatQuat params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    B = params.B;
    A = params.A;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_IntPointIntPoint(FIntPoint A, FIntPoint B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_IntPointIntPoint"));
    struct Params_NotEqual_IntPointIntPoint {
        FIntPoint A; // 0x0
        FIntPoint B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_IntPointIntPoint params{};
    params.A = (FIntPoint)A;
    params.B = (FIntPoint)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_ObjectObject(UObject* A, UObject* B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_ObjectObject"));
    struct Params_NotEqual_ObjectObject {
        UObject* A; // 0x0
        UObject* B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_ObjectObject params{};
    params.A = (UObject*)A;
    params.B = (UObject*)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::GetMin2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMin2D"));
    struct Params_GetMin2D {
        FVector2D A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMin2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_IntInt"));
    struct Params_NotEqual_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_NotEqual_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_Int64Int64"));
    struct Params_NotEqual_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_FloatFloat"));
    struct Params_NotEqual_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_NotEqual_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_DateTimeDateTime"));
    struct Params_NotEqual_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::LessEqual_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LessEqual_ByteByte"));
    struct Params_LessEqual_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_LessEqual_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::NotEqual_BoolBool(bool A, bool B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NotEqual_BoolBool"));
    struct Params_NotEqual_BoolBool {
        bool A; // 0x0
        bool B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_NotEqual_BoolBool params{};
    params.A = (bool)A;
    params.B = (bool)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakePulsatingValue"));
    struct Params_MakePulsatingValue {
        float InCurrentTime; // 0x0
        float InPulsesPerSecond; // 0x4
        float InPhase; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_MakePulsatingValue params{};
    params.InCurrentTime = (float)InCurrentTime;
    params.InPulsesPerSecond = (float)InPulsesPerSecond;
    params.InPhase = (float)InPhase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int64_t UKismetMathLibrary::Not_Int64(int64_t A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Not_Int64"));
    struct Params_Not_Int64 {
        int64_t A; // 0x0
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Not_Int64 params{};
    params.A = (int64_t)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
int32_t UKismetMathLibrary::Not_Int(int32_t A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Not_Int"));
    struct Params_Not_Int {
        int32_t A; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Not_Int params{};
    params.A = (int32_t)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector2D UKismetMathLibrary::NormalSafe2D(FVector2D A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NormalSafe2D"));
    struct Params_NormalSafe2D {
        FVector2D A; // 0x0
        float Tolerance; // 0x8
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_NormalSafe2D params{};
    params.A = (FVector2D)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UKismetMathLibrary::MultiplyByPi(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MultiplyByPi"));
    struct Params_MultiplyByPi {
        float Value; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MultiplyByPi params{};
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::NormalizeToRange(float Value, float RangeMin, float RangeMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NormalizeToRange"));
    struct Params_NormalizeToRange {
        float Value; // 0x0
        float RangeMin; // 0x4
        float RangeMax; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_NormalizeToRange params{};
    params.Value = (float)Value;
    params.RangeMin = (float)RangeMin;
    params.RangeMax = (float)RangeMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UKismetMathLibrary::NormalizedDeltaRotator(FRotator A, FRotator B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NormalizedDeltaRotator"));
    struct Params_NormalizedDeltaRotator {
        FRotator A; // 0x0
        FRotator B; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_NormalizedDeltaRotator params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
bool UKismetMathLibrary::NearlyEqual_TransformTransform(FTransform& A, FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NearlyEqual_TransformTransform"));
    struct Params_NearlyEqual_TransformTransform {
        FTransform A; // 0x0
        FTransform B; // 0x30
        float LocationTolerance; // 0x60
        float RotationTolerance; // 0x64
        float Scale3DTolerance; // 0x68
        bool ReturnValue; // 0x6c
    }; // Size: 0x6d
    Params_NearlyEqual_TransformTransform params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    params.LocationTolerance = (float)LocationTolerance;
    params.RotationTolerance = (float)RotationTolerance;
    params.Scale3DTolerance = (float)Scale3DTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    B = params.B;
    A = params.A;
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::And_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.And_IntInt"));
    struct Params_And_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_And_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::NormalizeAxis(float Angle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NormalizeAxis"));
    struct Params_NormalizeAxis {
        float Angle; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_NormalizeAxis params{};
    params.Angle = (float)Angle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Matrix_Mirror(FMatrix& M, EAxis::Type MirrorAxis, EAxis::Type FlipAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_Mirror"));
    struct Params_Matrix_Mirror {
        FMatrix M; // 0x0
        EAxis::Type MirrorAxis; // 0x40
        EAxis::Type FlipAxis; // 0x41
        char pad_42[0xe];
        FMatrix ReturnValue; // 0x50
    }; // Size: 0x90
    Params_Matrix_Mirror params{};
    params.M = (FMatrix)M;
    params.MirrorAxis = (EAxis::Type)MirrorAxis;
    params.FlipAxis = (EAxis::Type)FlipAxis;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
void UKismetMathLibrary::Normalize2D(FVector2D& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Normalize2D"));
    struct Params_Normalize2D {
        FVector2D A; // 0x0
        float Tolerance; // 0x8
    }; // Size: 0xc
    Params_Normalize2D params{};
    params.A = (FVector2D)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
}
FVector UKismetMathLibrary::Normal(FVector A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Normal"));
    struct Params_Normal {
        FVector A; // 0x0
        float Tolerance; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Normal params{};
    params.A = (FVector)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UKismetMathLibrary::NegateRotator(FRotator A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NegateRotator"));
    struct Params_NegateRotator {
        FRotator A; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_NegateRotator params{};
    params.A = (FRotator)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Negated2D(FVector2D& A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Negated2D"));
    struct Params_Negated2D {
        FVector2D A; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Negated2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (FVector2D)params.ReturnValue;
}
bool UKismetMathLibrary::NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.NearlyEqual_FloatFloat"));
    struct Params_NearlyEqual_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        float ErrorTolerance; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_NearlyEqual_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::ClassIsChildOf(UClass* TestClass, UClass* ParentClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ClassIsChildOf"));
    struct Params_ClassIsChildOf {
        UClass* TestClass; // 0x0
        UClass* ParentClass; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ClassIsChildOf params{};
    params.TestClass = (UClass*)TestClass;
    params.ParentClass = (UClass*)ParentClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::MultiplyMultiply_FloatFloat(float Base, float Exp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat"));
    struct Params_MultiplyMultiply_FloatFloat {
        float Base; // 0x0
        float Exp; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_MultiplyMultiply_FloatFloat params{};
    params.Base = (float)Base;
    params.Exp = (float)Exp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Divide_VectorFloat(FVector A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_VectorFloat"));
    struct Params_Divide_VectorFloat {
        FVector A; // 0x0
        float B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Divide_VectorFloat params{};
    params.A = (FVector)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Multiply_VectorInt(FVector A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_VectorInt"));
    struct Params_Multiply_VectorInt {
        FVector A; // 0x0
        int32_t B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Multiply_VectorInt params{};
    params.A = (FVector)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Matrix_InverseTransformPosition(FMatrix& M, FVector V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_InverseTransformPosition"));
    struct Params_Matrix_InverseTransformPosition {
        FMatrix M; // 0x0
        FVector V; // 0x40
        FVector ReturnValue; // 0x4c
    }; // Size: 0x58
    Params_Matrix_InverseTransformPosition params{};
    params.M = (FMatrix)M;
    params.V = (FVector)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector)params.ReturnValue;
}
FRotator UKismetMathLibrary::InverseTransformRotation(FTransform& T, FRotator Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.InverseTransformRotation"));
    struct Params_InverseTransformRotation {
        FTransform T; // 0x0
        FRotator Rotation; // 0x30
        FRotator ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_InverseTransformRotation params{};
    params.T = (FTransform)T;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    T = params.T;
    return (FRotator)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::HSVToRGB(float H, float S, float V, float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.HSVToRGB"));
    struct Params_HSVToRGB {
        float H; // 0x0
        float S; // 0x4
        float V; // 0x8
        float A; // 0xc
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_HSVToRGB params{};
    params.H = (float)H;
    params.S = (float)S;
    params.V = (float)V;
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FVector UKismetMathLibrary::Multiply_VectorFloat(FVector A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_VectorFloat"));
    struct Params_Multiply_VectorFloat {
        FVector A; // 0x0
        float B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Multiply_VectorFloat params{};
    params.A = (FVector)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Multiply_Vector4Vector4(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_Vector4Vector4"));
    struct Params_Multiply_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Multiply_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    B = params.B;
    A = params.A;
    return (FVector4)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Multiply_Vector2DVector2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_Vector2DVector2D"));
    struct Params_Multiply_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Multiply_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FTimespan UKismetMathLibrary::Multiply_TimespanFloat(FTimespan A, float Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_TimespanFloat"));
    struct Params_Multiply_TimespanFloat {
        FTimespan A; // 0x0
        float Scalar; // 0x8
        char pad_c[0x4];
        FTimespan ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Multiply_TimespanFloat params{};
    params.A = (FTimespan)A;
    params.Scalar = (float)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetHours(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetHours"));
    struct Params_GetHours {
        FTimespan A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetHours params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FRotator UKismetMathLibrary::Multiply_RotatorInt(FRotator A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_RotatorInt"));
    struct Params_Multiply_RotatorInt {
        FRotator A; // 0x0
        int32_t B; // 0xc
        FRotator ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Multiply_RotatorInt params{};
    params.A = (FRotator)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FRotator UKismetMathLibrary::Multiply_RotatorFloat(FRotator A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_RotatorFloat"));
    struct Params_Multiply_RotatorFloat {
        FRotator A; // 0x0
        float B; // 0xc
        FRotator ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Multiply_RotatorFloat params{};
    params.A = (FRotator)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
bool UKismetMathLibrary::IsPointInBoxWithTransform(FVector Point, FTransform& BoxWorldTransform, FVector BoxExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IsPointInBoxWithTransform"));
    struct Params_IsPointInBoxWithTransform {
        FVector Point; // 0x0
        char pad_c[0x4];
        FTransform BoxWorldTransform; // 0x10
        FVector BoxExtent; // 0x40
        bool ReturnValue; // 0x4c
    }; // Size: 0x4d
    Params_IsPointInBoxWithTransform params{};
    params.Point = (FVector)Point;
    params.BoxWorldTransform = (FTransform)BoxWorldTransform;
    params.BoxExtent = (FVector)BoxExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BoxWorldTransform = params.BoxWorldTransform;
    return (bool)params.ReturnValue;
}
void UKismetMathLibrary::MaxOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MaxOfIntArray"));
    struct Params_MaxOfIntArray {
        TArray<int32_t> IntArray; // 0x0
        int32_t IndexOfMaxValue; // 0x10
        int32_t MaxValue; // 0x14
    }; // Size: 0x18
    Params_MaxOfIntArray params{};
    params.IntArray = (TArray<int32_t>)IntArray;
    params.IndexOfMaxValue = (int32_t)IndexOfMaxValue;
    params.MaxValue = (int32_t)MaxValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaxValue = params.MaxValue;
    IndexOfMaxValue = params.IndexOfMaxValue;
    IntArray = params.IntArray;
}
bool UKismetMathLibrary::EqualEqual_ObjectObject(UObject* A, UObject* B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_ObjectObject"));
    struct Params_EqualEqual_ObjectObject {
        UObject* A; // 0x0
        UObject* B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_ObjectObject params{};
    params.A = (UObject*)A;
    params.B = (UObject*)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FQuat UKismetMathLibrary::Multiply_QuatQuat(FQuat& A, FQuat& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_QuatQuat"));
    struct Params_Multiply_QuatQuat {
        FQuat A; // 0x0
        FQuat B; // 0x10
        FQuat ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Multiply_QuatQuat params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FQuat)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Multiply_MatrixMatrix(FMatrix& A, FMatrix& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_MatrixMatrix"));
    struct Params_Multiply_MatrixMatrix {
        FMatrix A; // 0x0
        FMatrix B; // 0x40
        FMatrix ReturnValue; // 0x80
    }; // Size: 0xc0
    Params_Multiply_MatrixMatrix params{};
    params.A = (FMatrix)A;
    params.B = (FMatrix)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FMatrix)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Multiply_MatrixFloat(FMatrix& A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_MatrixFloat"));
    struct Params_Multiply_MatrixFloat {
        FMatrix A; // 0x0
        float B; // 0x40
        char pad_44[0xc];
        FMatrix ReturnValue; // 0x50
    }; // Size: 0x90
    Params_Multiply_MatrixFloat params{};
    params.A = (FMatrix)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (FMatrix)params.ReturnValue;
}
void UKismetMathLibrary::MaxOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MaxOfFloatArray"));
    struct Params_MaxOfFloatArray {
        TArray<float> FloatArray; // 0x0
        int32_t IndexOfMaxValue; // 0x10
        float MaxValue; // 0x14
    }; // Size: 0x18
    Params_MaxOfFloatArray params{};
    params.FloatArray = (TArray<float>)FloatArray;
    params.IndexOfMaxValue = (int32_t)IndexOfMaxValue;
    params.MaxValue = (float)MaxValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IndexOfMaxValue = params.IndexOfMaxValue;
    FloatArray = params.FloatArray;
    MaxValue = params.MaxValue;
}
FLinearColor UKismetMathLibrary::Multiply_LinearColorLinearColor(FLinearColor A, FLinearColor B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_LinearColorLinearColor"));
    struct Params_Multiply_LinearColorLinearColor {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        FLinearColor ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Multiply_LinearColorLinearColor params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::Multiply_LinearColorFloat(FLinearColor A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_LinearColorFloat"));
    struct Params_Multiply_LinearColorFloat {
        FLinearColor A; // 0x0
        float B; // 0x10
        FLinearColor ReturnValue; // 0x14
    }; // Size: 0x24
    Params_Multiply_LinearColorFloat params{};
    params.A = (FLinearColor)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Matrix_TransformVector4(FMatrix& M, FVector4 V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_TransformVector4"));
    struct Params_Matrix_TransformVector4 {
        FMatrix M; // 0x0
        FVector4 V; // 0x40
        FVector4 ReturnValue; // 0x50
    }; // Size: 0x60
    Params_Matrix_TransformVector4 params{};
    params.M = (FMatrix)M;
    params.V = (FVector4)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector4)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Multiply_IntPointIntPoint(FIntPoint A, FIntPoint B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_IntPointIntPoint"));
    struct Params_Multiply_IntPointIntPoint {
        FIntPoint A; // 0x0
        FIntPoint B; // 0x8
        FIntPoint ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Multiply_IntPointIntPoint params{};
    params.A = (FIntPoint)A;
    params.B = (FIntPoint)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
void UKismetMathLibrary::MinOfByteArray(TArray<uint8_t>& ByteArray, int32_t& IndexOfMinValue, uint8_t& MinValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MinOfByteArray"));
    struct Params_MinOfByteArray {
        TArray<uint8_t> ByteArray; // 0x0
        int32_t IndexOfMinValue; // 0x10
        uint8_t MinValue; // 0x14
    }; // Size: 0x15
    Params_MinOfByteArray params{};
    params.ByteArray = (TArray<uint8_t>)ByteArray;
    params.IndexOfMinValue = (int32_t)IndexOfMinValue;
    params.MinValue = (uint8_t)MinValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ByteArray = params.ByteArray;
    IndexOfMinValue = params.IndexOfMinValue;
    MinValue = params.MinValue;
}
FIntPoint UKismetMathLibrary::Multiply_IntPointInt(FIntPoint A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_IntPointInt"));
    struct Params_Multiply_IntPointInt {
        FIntPoint A; // 0x0
        int32_t B; // 0x8
        FIntPoint ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Multiply_IntPointInt params{};
    params.A = (FIntPoint)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
int32_t UKismetMathLibrary::Multiply_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_IntInt"));
    struct Params_Multiply_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Multiply_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::Multiply_IntFloat(int32_t A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_IntFloat"));
    struct Params_Multiply_IntFloat {
        int32_t A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Multiply_IntFloat params{};
    params.A = (int32_t)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int64_t UKismetMathLibrary::Multiply_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_Int64Int64"));
    struct Params_Multiply_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Multiply_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FTimespan UKismetMathLibrary::GetDuration(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetDuration"));
    struct Params_GetDuration {
        FTimespan A; // 0x0
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDuration params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Multiply_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Multiply_ByteByte"));
    struct Params_Multiply_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        uint8_t ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Multiply_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void UKismetMathLibrary::MaxOfByteArray(TArray<uint8_t>& ByteArray, int32_t& IndexOfMaxValue, uint8_t& MaxValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MaxOfByteArray"));
    struct Params_MaxOfByteArray {
        TArray<uint8_t> ByteArray; // 0x0
        int32_t IndexOfMaxValue; // 0x10
        uint8_t MaxValue; // 0x14
    }; // Size: 0x15
    Params_MaxOfByteArray params{};
    params.ByteArray = (TArray<uint8_t>)ByteArray;
    params.IndexOfMaxValue = (int32_t)IndexOfMaxValue;
    params.MaxValue = (uint8_t)MaxValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ByteArray = params.ByteArray;
    IndexOfMaxValue = params.IndexOfMaxValue;
    MaxValue = params.MaxValue;
}
FVector UKismetMathLibrary::MirrorVectorByNormal(FVector InVect, FVector InNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MirrorVectorByNormal"));
    struct Params_MirrorVectorByNormal {
        FVector InVect; // 0x0
        FVector InNormal; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_MirrorVectorByNormal params{};
    params.InVect = (FVector)InVect;
    params.InNormal = (FVector)InNormal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::MinOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMinValue, float& MinValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MinOfFloatArray"));
    struct Params_MinOfFloatArray {
        TArray<float> FloatArray; // 0x0
        int32_t IndexOfMinValue; // 0x10
        float MinValue; // 0x14
    }; // Size: 0x18
    Params_MinOfFloatArray params{};
    params.FloatArray = (TArray<float>)FloatArray;
    params.IndexOfMinValue = (int32_t)IndexOfMinValue;
    params.MinValue = (float)MinValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FloatArray = params.FloatArray;
    IndexOfMinValue = params.IndexOfMinValue;
    MinValue = params.MinValue;
}
bool UKismetMathLibrary::GreaterEqual_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GreaterEqual_Int64Int64"));
    struct Params_GreaterEqual_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GreaterEqual_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Matrix_Identity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_Identity"));
    struct Params_Matrix_Identity {
        FMatrix ReturnValue; // 0x0
    }; // Size: 0x40
    Params_Matrix_Identity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMatrix)params.ReturnValue;
}
void UKismetMathLibrary::MinimumAreaRectangle(UObject* WorldContextObject, TArray<FVector>& InVerts, FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MinimumAreaRectangle"));
    struct Params_MinimumAreaRectangle {
        UObject* WorldContextObject; // 0x0
        TArray<FVector> InVerts; // 0x8
        FVector SampleSurfaceNormal; // 0x18
        FVector OutRectCenter; // 0x24
        FRotator OutRectRotation; // 0x30
        float OutSideLengthX; // 0x3c
        float OutSideLengthY; // 0x40
        bool bDebugDraw; // 0x44
    }; // Size: 0x45
    Params_MinimumAreaRectangle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InVerts = (TArray<FVector>)InVerts;
    params.SampleSurfaceNormal = (FVector)SampleSurfaceNormal;
    params.OutRectCenter = (FVector)OutRectCenter;
    params.OutRectRotation = (FRotator)OutRectRotation;
    params.OutSideLengthX = (float)OutSideLengthX;
    params.OutSideLengthY = (float)OutSideLengthY;
    params.bDebugDraw = (bool)bDebugDraw;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InVerts = params.InVerts;
    OutSideLengthY = params.OutSideLengthY;
    SampleSurfaceNormal = params.SampleSurfaceNormal;
    OutSideLengthX = params.OutSideLengthX;
    OutRectCenter = params.OutRectCenter;
    OutRectRotation = params.OutRectRotation;
}
int32_t UKismetMathLibrary::Min(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Min"));
    struct Params_Min {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Min params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int64_t UKismetMathLibrary::MaxInt64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MaxInt64"));
    struct Params_MaxInt64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_MaxInt64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
float UKismetMathLibrary::GetTotalDays(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetTotalDays"));
    struct Params_GetTotalDays {
        FTimespan A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTotalDays params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::Max(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Max"));
    struct Params_Max {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Max params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Matrix_TransformVector(FMatrix& M, FVector V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_TransformVector"));
    struct Params_Matrix_TransformVector {
        FMatrix M; // 0x0
        FVector V; // 0x40
        char pad_4c[0x4];
        FVector4 ReturnValue; // 0x50
    }; // Size: 0x60
    Params_Matrix_TransformVector params{};
    params.M = (FMatrix)M;
    params.V = (FVector)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector4)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Matrix_TransformPosition(FMatrix& M, FVector V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_TransformPosition"));
    struct Params_Matrix_TransformPosition {
        FMatrix M; // 0x0
        FVector V; // 0x40
        char pad_4c[0x4];
        FVector4 ReturnValue; // 0x50
    }; // Size: 0x60
    Params_Matrix_TransformPosition params{};
    params.M = (FMatrix)M;
    params.V = (FVector)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector4)params.ReturnValue;
}
void UKismetMathLibrary::Matrix_SetOrigin(FMatrix& M, FVector NewOrigin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_SetOrigin"));
    struct Params_Matrix_SetOrigin {
        FMatrix M; // 0x0
        FVector NewOrigin; // 0x40
    }; // Size: 0x4c
    Params_Matrix_SetOrigin params{};
    params.M = (FMatrix)M;
    params.NewOrigin = (FVector)NewOrigin;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
}
FVector4 UKismetMathLibrary::MakeVector4(float X, float Y, float Z, float W) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeVector4"));
    struct Params_MakeVector4 {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        float W; // 0xc
        FVector4 ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeVector4 params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.W = (float)W;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector4)params.ReturnValue;
}
void UKismetMathLibrary::Matrix_RemoveScaling(FMatrix& M, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_RemoveScaling"));
    struct Params_Matrix_RemoveScaling {
        FMatrix M; // 0x0
        float Tolerance; // 0x40
    }; // Size: 0x44
    Params_Matrix_RemoveScaling params{};
    params.M = (FMatrix)M;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
}
FVector UKismetMathLibrary::Matrix_InverseTransformVector(FMatrix& M, FVector V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_InverseTransformVector"));
    struct Params_Matrix_InverseTransformVector {
        FMatrix M; // 0x0
        FVector V; // 0x40
        FVector ReturnValue; // 0x4c
    }; // Size: 0x58
    Params_Matrix_InverseTransformVector params{};
    params.M = (FMatrix)M;
    params.V = (FVector)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Matrix_GetTransposed(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetTransposed"));
    struct Params_Matrix_GetTransposed {
        FMatrix M; // 0x0
        FMatrix ReturnValue; // 0x40
    }; // Size: 0x80
    Params_Matrix_GetTransposed params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
int64_t UKismetMathLibrary::And_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.And_Int64Int64"));
    struct Params_And_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_And_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Matrix_GetTransposeAdjoint(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetTransposeAdjoint"));
    struct Params_Matrix_GetTransposeAdjoint {
        FMatrix M; // 0x0
        FMatrix ReturnValue; // 0x40
    }; // Size: 0x80
    Params_Matrix_GetTransposeAdjoint params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
float UKismetMathLibrary::Matrix_GetDeterminant(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetDeterminant"));
    struct Params_Matrix_GetDeterminant {
        FMatrix M; // 0x0
        float ReturnValue; // 0x40
    }; // Size: 0x44
    Params_Matrix_GetDeterminant params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Matrix_GetScaleVector(FMatrix& M, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetScaleVector"));
    struct Params_Matrix_GetScaleVector {
        FMatrix M; // 0x0
        float Tolerance; // 0x40
        FVector ReturnValue; // 0x44
    }; // Size: 0x50
    Params_Matrix_GetScaleVector params{};
    params.M = (FMatrix)M;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::Matrix_GetScaledAxis(FMatrix& M, EAxis::Type Axis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetScaledAxis"));
    struct Params_Matrix_GetScaledAxis {
        FMatrix M; // 0x0
        EAxis::Type Axis; // 0x40
        char pad_41[0x3];
        FVector ReturnValue; // 0x44
    }; // Size: 0x50
    Params_Matrix_GetScaledAxis params{};
    params.M = (FMatrix)M;
    params.Axis = (EAxis::Type)Axis;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::Matrix_GetScaledAxes(FMatrix& M, FVector& X, FVector& Y, FVector& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetScaledAxes"));
    struct Params_Matrix_GetScaledAxes {
        FMatrix M; // 0x0
        FVector X; // 0x40
        FVector Y; // 0x4c
        FVector Z; // 0x58
    }; // Size: 0x64
    Params_Matrix_GetScaledAxes params{};
    params.M = (FMatrix)M;
    params.X = (FVector)X;
    params.Y = (FVector)Y;
    params.Z = (FVector)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Y = params.Y;
    M = params.M;
    Z = params.Z;
    X = params.X;
}
FMatrix UKismetMathLibrary::Matrix_ApplyScale(FMatrix& M, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_ApplyScale"));
    struct Params_Matrix_ApplyScale {
        FMatrix M; // 0x0
        float Scale; // 0x40
        char pad_44[0xc];
        FMatrix ReturnValue; // 0x50
    }; // Size: 0x90
    Params_Matrix_ApplyScale params{};
    params.M = (FMatrix)M;
    params.Scale = (float)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
float UKismetMathLibrary::GetAbsMax2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetAbsMax2D"));
    struct Params_GetAbsMax2D {
        FVector2D A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAbsMax2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Matrix_GetRotDeterminant(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetRotDeterminant"));
    struct Params_Matrix_GetRotDeterminant {
        FMatrix M; // 0x0
        float ReturnValue; // 0x40
    }; // Size: 0x44
    Params_Matrix_GetRotDeterminant params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::Matrix_GetFrustumRightPlane(FMatrix& M, FPlane& OutPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumRightPlane"));
    struct Params_Matrix_GetFrustumRightPlane {
        FMatrix M; // 0x0
        FPlane OutPlane; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_Matrix_GetFrustumRightPlane params{};
    params.M = (FMatrix)M;
    params.OutPlane = (FPlane)OutPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    OutPlane = params.OutPlane;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Matrix_GetFrustumBottomPlane(FMatrix& M, FPlane& OutPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumBottomPlane"));
    struct Params_Matrix_GetFrustumBottomPlane {
        FMatrix M; // 0x0
        FPlane OutPlane; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_Matrix_GetFrustumBottomPlane params{};
    params.M = (FMatrix)M;
    params.OutPlane = (FPlane)OutPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    OutPlane = params.OutPlane;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Matrix_ContainsNaN(FMatrix& M) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_ContainsNaN"));
    struct Params_Matrix_ContainsNaN {
        FMatrix M; // 0x0
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_Matrix_ContainsNaN params{};
    params.M = (FMatrix)M;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (bool)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromYX(FVector& Y, FVector& X) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromYX"));
    struct Params_MakeRotFromYX {
        FVector Y; // 0x0
        FVector X; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_MakeRotFromYX params{};
    params.Y = (FVector)Y;
    params.X = (FVector)X;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Y = params.Y;
    X = params.X;
    return (FRotator)params.ReturnValue;
}
bool UKismetMathLibrary::EqualExactly_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualExactly_VectorVector"));
    struct Params_EqualExactly_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_EqualExactly_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Matrix_ConcatenateTranslation(FMatrix& M, FVector Translation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Matrix_ConcatenateTranslation"));
    struct Params_Matrix_ConcatenateTranslation {
        FMatrix M; // 0x0
        FVector Translation; // 0x40
        char pad_4c[0x4];
        FMatrix ReturnValue; // 0x50
    }; // Size: 0x90
    Params_Matrix_ConcatenateTranslation params{};
    params.M = (FMatrix)M;
    params.Translation = (FVector)Translation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    M = params.M;
    return (FMatrix)params.ReturnValue;
}
float UKismetMathLibrary::MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MapRangeUnclamped"));
    struct Params_MapRangeUnclamped {
        float Value; // 0x0
        float InRangeA; // 0x4
        float InRangeB; // 0x8
        float OutRangeA; // 0xc
        float OutRangeB; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_MapRangeUnclamped params{};
    params.Value = (float)Value;
    params.InRangeA = (float)InRangeA;
    params.InRangeB = (float)InRangeB;
    params.OutRangeA = (float)OutRangeA;
    params.OutRangeB = (float)OutRangeB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MapRangeClamped"));
    struct Params_MapRangeClamped {
        float Value; // 0x0
        float InRangeA; // 0x4
        float InRangeB; // 0x8
        float OutRangeA; // 0xc
        float OutRangeB; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_MapRangeClamped params{};
    params.Value = (float)Value;
    params.InRangeA = (float)InRangeA;
    params.InRangeB = (float)InRangeB;
    params.OutRangeA = (float)OutRangeA;
    params.OutRangeB = (float)OutRangeB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::MakeVector(float X, float Y, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeVector"));
    struct Params_MakeVector {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_MakeVector params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D UKismetMathLibrary::MakeVector2D(float X, float Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeVector2D"));
    struct Params_MakeVector2D {
        float X; // 0x0
        float Y; // 0x4
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MakeVector2D params{};
    params.X = (float)X;
    params.Y = (float)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FTimespan UKismetMathLibrary::MakeTimespan2(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeTimespan2"));
    struct Params_MakeTimespan2 {
        int32_t Days; // 0x0
        int32_t Hours; // 0x4
        int32_t Minutes; // 0x8
        int32_t Seconds; // 0xc
        int32_t FractionNano; // 0x10
        char pad_14[0x4];
        FTimespan ReturnValue; // 0x18
    }; // Size: 0x20
    Params_MakeTimespan2 params{};
    params.Days = (int32_t)Days;
    params.Hours = (int32_t)Hours;
    params.Minutes = (int32_t)Minutes;
    params.Seconds = (int32_t)Seconds;
    params.FractionNano = (int32_t)FractionNano;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FTimespan UKismetMathLibrary::MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeTimespan"));
    struct Params_MakeTimespan {
        int32_t Days; // 0x0
        int32_t Hours; // 0x4
        int32_t Minutes; // 0x8
        int32_t Seconds; // 0xc
        int32_t Milliseconds; // 0x10
        char pad_14[0x4];
        FTimespan ReturnValue; // 0x18
    }; // Size: 0x20
    Params_MakeTimespan params{};
    params.Days = (int32_t)Days;
    params.Hours = (int32_t)Hours;
    params.Minutes = (int32_t)Minutes;
    params.Seconds = (int32_t)Seconds;
    params.Milliseconds = (int32_t)Milliseconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromZY(FVector& Z, FVector& Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromZY"));
    struct Params_MakeRotFromZY {
        FVector Z; // 0x0
        FVector Y; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_MakeRotFromZY params{};
    params.Z = (FVector)Z;
    params.Y = (FVector)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Z = params.Z;
    Y = params.Y;
    return (FRotator)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromZX(FVector& Z, FVector& X) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromZX"));
    struct Params_MakeRotFromZX {
        FVector Z; // 0x0
        FVector X; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_MakeRotFromZX params{};
    params.Z = (FVector)Z;
    params.X = (FVector)X;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Z = params.Z;
    X = params.X;
    return (FRotator)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromZ(FVector& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromZ"));
    struct Params_MakeRotFromZ {
        FVector Z; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_MakeRotFromZ params{};
    params.Z = (FVector)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Z = params.Z;
    return (FRotator)params.ReturnValue;
}
void UKismetMathLibrary::BreakRotIntoAxes(FRotator& InRot, FVector& X, FVector& Y, FVector& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakRotIntoAxes"));
    struct Params_BreakRotIntoAxes {
        FRotator InRot; // 0x0
        FVector X; // 0xc
        FVector Y; // 0x18
        FVector Z; // 0x24
    }; // Size: 0x30
    Params_BreakRotIntoAxes params{};
    params.InRot = (FRotator)InRot;
    params.X = (FVector)X;
    params.Y = (FVector)Y;
    params.Z = (FVector)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Y = params.Y;
    InRot = params.InRot;
    X = params.X;
    Z = params.Z;
}
float UKismetMathLibrary::FloatSpringInterp(float Current, float Target, FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FloatSpringInterp"));
    struct Params_FloatSpringInterp {
        float Current; // 0x0
        float Target; // 0x4
        FFloatSpringState SpringState; // 0x8
        float Stiffness; // 0x10
        float CriticalDampingFactor; // 0x14
        float DeltaTime; // 0x18
        float Mass; // 0x1c
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_FloatSpringInterp params{};
    params.Current = (float)Current;
    params.Target = (float)Target;
    params.SpringState = (FFloatSpringState)SpringState;
    params.Stiffness = (float)Stiffness;
    params.CriticalDampingFactor = (float)CriticalDampingFactor;
    params.DeltaTime = (float)DeltaTime;
    params.Mass = (float)Mass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpringState = params.SpringState;
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Divide_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_VectorVector"));
    struct Params_Divide_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Divide_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotFromYZ(FVector& Y, FVector& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotFromYZ"));
    struct Params_MakeRotFromYZ {
        FVector Y; // 0x0
        FVector Z; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_MakeRotFromYZ params{};
    params.Y = (FVector)Y;
    params.Z = (FVector)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Y = params.Y;
    Z = params.Z;
    return (FRotator)params.ReturnValue;
}
FRotator UKismetMathLibrary::MakeRotationFromAxes(FVector Forward, FVector Right, FVector Up) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRotationFromAxes"));
    struct Params_MakeRotationFromAxes {
        FVector Forward; // 0x0
        FVector Right; // 0xc
        FVector Up; // 0x18
        FRotator ReturnValue; // 0x24
    }; // Size: 0x30
    Params_MakeRotationFromAxes params{};
    params.Forward = (FVector)Forward;
    params.Right = (FVector)Right;
    params.Up = (FVector)Up;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FTransform UKismetMathLibrary::MakeRelativeTransform(FTransform& A, FTransform& RelativeTo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRelativeTransform"));
    struct Params_MakeRelativeTransform {
        FTransform A; // 0x0
        FTransform RelativeTo; // 0x30
        FTransform ReturnValue; // 0x60
    }; // Size: 0x90
    Params_MakeRelativeTransform params{};
    params.A = (FTransform)A;
    params.RelativeTo = (FTransform)RelativeTo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    RelativeTo = params.RelativeTo;
    return (FTransform)params.ReturnValue;
}
int64_t UKismetMathLibrary::Abs_Int64(int64_t A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Abs_Int64"));
    struct Params_Abs_Int64 {
        int64_t A; // 0x0
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Abs_Int64 params{};
    params.A = (int64_t)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
FRandomStream UKismetMathLibrary::MakeRandomStream(int32_t InitialSeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeRandomStream"));
    struct Params_MakeRandomStream {
        int32_t InitialSeed; // 0x0
        FRandomStream ReturnValue; // 0x4
    }; // Size: 0xc
    Params_MakeRandomStream params{};
    params.InitialSeed = (int32_t)InitialSeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRandomStream)params.ReturnValue;
}
bool UKismetMathLibrary::Less_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Less_DateTimeDateTime"));
    struct Params_Less_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Less_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::FFloor(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FFloor"));
    struct Params_FFloor {
        float A; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_FFloor params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FFrameRate UKismetMathLibrary::MakeFrameRate(int32_t Numerator, int32_t Denominator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeFrameRate"));
    struct Params_MakeFrameRate {
        int32_t Numerator; // 0x0
        int32_t Denominator; // 0x4
        FFrameRate ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MakeFrameRate params{};
    params.Numerator = (int32_t)Numerator;
    params.Denominator = (int32_t)Denominator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameRate)params.ReturnValue;
}
FDateTime UKismetMathLibrary::MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeDateTime"));
    struct Params_MakeDateTime {
        int32_t Year; // 0x0
        int32_t Month; // 0x4
        int32_t Day; // 0x8
        int32_t Hour; // 0xc
        int32_t Minute; // 0x10
        int32_t Second; // 0x14
        int32_t Millisecond; // 0x18
        char pad_1c[0x4];
        FDateTime ReturnValue; // 0x20
    }; // Size: 0x28
    Params_MakeDateTime params{};
    params.Year = (int32_t)Year;
    params.Month = (int32_t)Month;
    params.Day = (int32_t)Day;
    params.Hour = (int32_t)Hour;
    params.Minute = (int32_t)Minute;
    params.Second = (int32_t)Second;
    params.Millisecond = (int32_t)Millisecond;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
float UKismetMathLibrary::Ease(float A, float B, float Alpha, EEasingFunc::Type EasingFunc, float BlendExp, int32_t Steps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Ease"));
    struct Params_Ease {
        float A; // 0x0
        float B; // 0x4
        float Alpha; // 0x8
        EEasingFunc::Type EasingFunc; // 0xc
        char pad_d[0x3];
        float BlendExp; // 0x10
        int32_t Steps; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Ease params{};
    params.A = (float)A;
    params.B = (float)B;
    params.Alpha = (float)Alpha;
    params.EasingFunc = (EEasingFunc::Type)EasingFunc;
    params.BlendExp = (float)BlendExp;
    params.Steps = (int32_t)Steps;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::MakeColor(float R, float G, float B, float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeColor"));
    struct Params_MakeColor {
        float R; // 0x0
        float G; // 0x4
        float B; // 0x8
        float A; // 0xc
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeColor params{};
    params.R = (float)R;
    params.G = (float)G;
    params.B = (float)B;
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FBox2D UKismetMathLibrary::MakeBox2D(FVector2D Min, FVector2D Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeBox2D"));
    struct Params_MakeBox2D {
        FVector2D Min; // 0x0
        FVector2D Max; // 0x8
        FBox2D ReturnValue; // 0x10
    }; // Size: 0x24
    Params_MakeBox2D params{};
    params.Min = (FVector2D)Min;
    params.Max = (FVector2D)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FBox2D)params.ReturnValue;
}
FBox UKismetMathLibrary::MakeBox(FVector Min, FVector Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.MakeBox"));
    struct Params_MakeBox {
        FVector Min; // 0x0
        FVector Max; // 0xc
        FBox ReturnValue; // 0x18
    }; // Size: 0x34
    Params_MakeBox params{};
    params.Min = (FVector)Min;
    params.Max = (FVector)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
float UKismetMathLibrary::Loge(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Loge"));
    struct Params_Loge {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Loge params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::LinePlaneIntersection_OriginNormal(FVector& LineStart, FVector& LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float& T, FVector& Intersection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinePlaneIntersection_OriginNormal"));
    struct Params_LinePlaneIntersection_OriginNormal {
        FVector LineStart; // 0x0
        FVector LineEnd; // 0xc
        FVector PlaneOrigin; // 0x18
        FVector PlaneNormal; // 0x24
        float T; // 0x30
        FVector Intersection; // 0x34
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_LinePlaneIntersection_OriginNormal params{};
    params.LineStart = (FVector)LineStart;
    params.LineEnd = (FVector)LineEnd;
    params.PlaneOrigin = (FVector)PlaneOrigin;
    params.PlaneNormal = (FVector)PlaneNormal;
    params.T = (float)T;
    params.Intersection = (FVector)Intersection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LineStart = params.LineStart;
    Intersection = params.Intersection;
    LineEnd = params.LineEnd;
    T = params.T;
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::Log(float A, float Base) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Log"));
    struct Params_Log {
        float A; // 0x0
        float Base; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Log params{};
    params.A = (float)A;
    params.Base = (float)Base;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColorLerpUsingHSV(FLinearColor A, FLinearColor B, float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColorLerpUsingHSV"));
    struct Params_LinearColorLerpUsingHSV {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        float Alpha; // 0x20
        FLinearColor ReturnValue; // 0x24
    }; // Size: 0x34
    Params_LinearColorLerpUsingHSV params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    params.Alpha = (float)Alpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColorLerp(FLinearColor A, FLinearColor B, float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColorLerp"));
    struct Params_LinearColorLerp {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        float Alpha; // 0x20
        FLinearColor ReturnValue; // 0x24
    }; // Size: 0x34
    Params_LinearColorLerp params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    params.Alpha = (float)Alpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UKismetMathLibrary::LessEqual_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LessEqual_Int64Int64"));
    struct Params_LessEqual_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_LessEqual_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_White() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_White"));
    struct Params_LinearColor_White {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_White params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UKismetMathLibrary::Less_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Less_Int64Int64"));
    struct Params_Less_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Less_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::Conv_VectorToLinearColor(FVector InVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_VectorToLinearColor"));
    struct Params_Conv_VectorToLinearColor {
        FVector InVec; // 0x0
        FLinearColor ReturnValue; // 0xc
    }; // Size: 0x1c
    Params_Conv_VectorToLinearColor params{};
    params.InVec = (FVector)InVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UKismetMathLibrary::LinearColor_SetTemperature(FLinearColor& InOutColor, float InTemperature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_SetTemperature"));
    struct Params_LinearColor_SetTemperature {
        FLinearColor InOutColor; // 0x0
        float InTemperature; // 0x10
    }; // Size: 0x14
    Params_LinearColor_SetTemperature params{};
    params.InOutColor = (FLinearColor)InOutColor;
    params.InTemperature = (float)InTemperature;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutColor = params.InOutColor;
}
void UKismetMathLibrary::BreakRotator(FRotator InRot, float& Roll, float& Pitch, float& Yaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakRotator"));
    struct Params_BreakRotator {
        FRotator InRot; // 0x0
        float Roll; // 0xc
        float Pitch; // 0x10
        float Yaw; // 0x14
    }; // Size: 0x18
    Params_BreakRotator params{};
    params.InRot = (FRotator)InRot;
    params.Roll = (float)Roll;
    params.Pitch = (float)Pitch;
    params.Yaw = (float)Yaw;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Roll = params.Roll;
    Pitch = params.Pitch;
    Yaw = params.Yaw;
}
float UKismetMathLibrary::LinearColor_GetMax(FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_GetMax"));
    struct Params_LinearColor_GetMax {
        FLinearColor InColor; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_LinearColor_GetMax params{};
    params.InColor = (FLinearColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::DegAtan(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegAtan"));
    struct Params_DegAtan {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DegAtan params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::LinearColor_SetRGBA(FLinearColor& InOutColor, float R, float G, float B, float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_SetRGBA"));
    struct Params_LinearColor_SetRGBA {
        FLinearColor InOutColor; // 0x0
        float R; // 0x10
        float G; // 0x14
        float B; // 0x18
        float A; // 0x1c
    }; // Size: 0x20
    Params_LinearColor_SetRGBA params{};
    params.InOutColor = (FLinearColor)InOutColor;
    params.R = (float)R;
    params.G = (float)G;
    params.B = (float)B;
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutColor = params.InOutColor;
}
void UKismetMathLibrary::LinearColor_SetRandomHue(FLinearColor& InOutColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_SetRandomHue"));
    struct Params_LinearColor_SetRandomHue {
        FLinearColor InOutColor; // 0x0
    }; // Size: 0x10
    Params_LinearColor_SetRandomHue params{};
    params.InOutColor = (FLinearColor)InOutColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutColor = params.InOutColor;
}
void UKismetMathLibrary::LinearColor_SetFromPow22(FLinearColor& InOutColor, FColor& InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_SetFromPow22"));
    struct Params_LinearColor_SetFromPow22 {
        FLinearColor InOutColor; // 0x0
        FColor InColor; // 0x10
    }; // Size: 0x14
    Params_LinearColor_SetFromPow22 params{};
    params.InOutColor = (FLinearColor)InOutColor;
    params.InColor = (FColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutColor = params.InOutColor;
    InColor = params.InColor;
}
FIntPoint UKismetMathLibrary::IntPoint_Right() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IntPoint_Right"));
    struct Params_IntPoint_Right {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_IntPoint_Right params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FVector UKismetMathLibrary::GreaterGreater_VectorRotator(FVector A, FRotator B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GreaterGreater_VectorRotator"));
    struct Params_GreaterGreater_VectorRotator {
        FVector A; // 0x0
        FRotator B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GreaterGreater_VectorRotator params{};
    params.A = (FVector)A;
    params.B = (FRotator)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::LinearColor_Set(FLinearColor& InOutColor, FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Set"));
    struct Params_LinearColor_Set {
        FLinearColor InOutColor; // 0x0
        FLinearColor InColor; // 0x10
    }; // Size: 0x20
    Params_LinearColor_Set params{};
    params.InOutColor = (FLinearColor)InOutColor;
    params.InColor = (FLinearColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutColor = params.InOutColor;
}
FLinearColor UKismetMathLibrary::LinearColor_Red() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Red"));
    struct Params_LinearColor_Red {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_Red params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FColor UKismetMathLibrary::LinearColor_QuantizeRound(FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_QuantizeRound"));
    struct Params_LinearColor_QuantizeRound {
        FLinearColor InColor; // 0x0
        FColor ReturnValue; // 0x10
    }; // Size: 0x14
    Params_LinearColor_QuantizeRound params{};
    params.InColor = (FLinearColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_Green() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Green"));
    struct Params_LinearColor_Green {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_Green params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_Gray() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Gray"));
    struct Params_LinearColor_Gray {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_Gray params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetMinutes(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMinutes"));
    struct Params_GetMinutes {
        FTimespan A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMinutes params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetDays(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetDays"));
    struct Params_GetDays {
        FTimespan A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetDays params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::LinearColor_GetLuminance(FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_GetLuminance"));
    struct Params_LinearColor_GetLuminance {
        FLinearColor InColor; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_LinearColor_GetLuminance params{};
    params.InColor = (FLinearColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::LinearColor_Distance(FLinearColor C1, FLinearColor C2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Distance"));
    struct Params_LinearColor_Distance {
        FLinearColor C1; // 0x0
        FLinearColor C2; // 0x10
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_LinearColor_Distance params{};
    params.C1 = (FLinearColor)C1;
    params.C2 = (FLinearColor)C2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::LinearColor_Black() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LinearColor_Black"));
    struct Params_LinearColor_Black {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_LinearColor_Black params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UKismetMathLibrary::LessEqual_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LessEqual_FloatFloat"));
    struct Params_LessEqual_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LessEqual_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::Conv_ByteToInt(uint8_t InByte) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_ByteToInt"));
    struct Params_Conv_ByteToInt {
        uint8_t InByte; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Conv_ByteToInt params{};
    params.InByte = (uint8_t)InByte;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetMathLibrary::LessEqual_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.LessEqual_DateTimeDateTime"));
    struct Params_LessEqual_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_LessEqual_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Less_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Less_TimespanTimespan"));
    struct Params_Less_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Less_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Less_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Less_IntInt"));
    struct Params_Less_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Less_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Less_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Less_FloatFloat"));
    struct Params_Less_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Less_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IsPointInBox"));
    struct Params_IsPointInBox {
        FVector Point; // 0x0
        FVector BoxOrigin; // 0xc
        FVector BoxExtent; // 0x18
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_IsPointInBox params{};
    params.Point = (FVector)Point;
    params.BoxOrigin = (FVector)BoxOrigin;
    params.BoxExtent = (FVector)BoxExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Greater_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Greater_Int64Int64"));
    struct Params_Greater_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Greater_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::IsNearlyZero2D(FVector2D& A, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IsNearlyZero2D"));
    struct Params_IsNearlyZero2D {
        FVector2D A; // 0x0
        float Tolerance; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsNearlyZero2D params{};
    params.A = (FVector2D)A;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    return (bool)params.ReturnValue;
}
FTimespan UKismetMathLibrary::Add_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_TimespanTimespan"));
    struct Params_Add_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        FTimespan ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Add_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
bool UKismetMathLibrary::IsMorning(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IsMorning"));
    struct Params_IsMorning {
        FDateTime A; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsMorning params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::IsLeapYear(int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IsLeapYear"));
    struct Params_IsLeapYear {
        int32_t Year; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsLeapYear params{};
    params.Year = (int32_t)Year;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::IsAfternoon(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IsAfternoon"));
    struct Params_IsAfternoon {
        FDateTime A; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAfternoon params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetMathLibrary::HSVToRGB_Vector(FLinearColor HSV, FLinearColor& RGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.HSVToRGB_Vector"));
    struct Params_HSVToRGB_Vector {
        FLinearColor HSV; // 0x0
        FLinearColor RGB; // 0x10
    }; // Size: 0x20
    Params_HSVToRGB_Vector params{};
    params.HSV = (FLinearColor)HSV;
    params.RGB = (FLinearColor)RGB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RGB = params.RGB;
}
int32_t UKismetMathLibrary::Conv_Int64ToInt(int64_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_Int64ToInt"));
    struct Params_Conv_Int64ToInt {
        int64_t inInt; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Conv_Int64ToInt params{};
    params.inInt = (int64_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FRotator UKismetMathLibrary::Conv_MatrixToRotator(FMatrix& InMatrix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_MatrixToRotator"));
    struct Params_Conv_MatrixToRotator {
        FMatrix InMatrix; // 0x0
        FRotator ReturnValue; // 0x40
    }; // Size: 0x4c
    Params_Conv_MatrixToRotator params{};
    params.InMatrix = (FMatrix)InMatrix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMatrix = params.InMatrix;
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::InverseTransformLocation(FTransform& T, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.InverseTransformLocation"));
    struct Params_InverseTransformLocation {
        FTransform T; // 0x0
        FVector Location; // 0x30
        FVector ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_InverseTransformLocation params{};
    params.T = (FTransform)T;
    params.Location = (FVector)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    T = params.T;
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::Conv_IntToFloat(int32_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_IntToFloat"));
    struct Params_Conv_IntToFloat {
        int32_t inInt; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Conv_IntToFloat params{};
    params.inInt = (int32_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::IntPoint_One() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IntPoint_One"));
    struct Params_IntPoint_One {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_IntPoint_One params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
bool UKismetMathLibrary::InRange_Int64Int64(int64_t Value, int64_t Min, int64_t Max, bool InclusiveMin, bool InclusiveMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.InRange_Int64Int64"));
    struct Params_InRange_Int64Int64 {
        int64_t Value; // 0x0
        int64_t Min; // 0x8
        int64_t Max; // 0x10
        bool InclusiveMin; // 0x18
        bool InclusiveMax; // 0x19
        bool ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_InRange_Int64Int64 params{};
    params.Value = (int64_t)Value;
    params.Min = (int64_t)Min;
    params.Max = (int64_t)Max;
    params.InclusiveMin = (bool)InclusiveMin;
    params.InclusiveMax = (bool)InclusiveMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FDateTime UKismetMathLibrary::DateTimeMinValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DateTimeMinValue"));
    struct Params_DateTimeMinValue {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_DateTimeMinValue params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::IntPoint_Down() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.IntPoint_Down"));
    struct Params_IntPoint_Down {
        FIntPoint ReturnValue; // 0x0
    }; // Size: 0x8
    Params_IntPoint_Down params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
bool UKismetMathLibrary::InRange_IntInt(int32_t Value, int32_t Min, int32_t Max, bool InclusiveMin, bool InclusiveMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.InRange_IntInt"));
    struct Params_InRange_IntInt {
        int32_t Value; // 0x0
        int32_t Min; // 0x4
        int32_t Max; // 0x8
        bool InclusiveMin; // 0xc
        bool InclusiveMax; // 0xd
        bool ReturnValue; // 0xe
    }; // Size: 0xf
    Params_InRange_IntInt params{};
    params.Value = (int32_t)Value;
    params.Min = (int32_t)Min;
    params.Max = (int32_t)Max;
    params.InclusiveMin = (bool)InclusiveMin;
    params.InclusiveMax = (bool)InclusiveMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.InRange_FloatFloat"));
    struct Params_InRange_FloatFloat {
        float Value; // 0x0
        float Min; // 0x4
        float Max; // 0x8
        bool InclusiveMin; // 0xc
        bool InclusiveMax; // 0xd
        bool ReturnValue; // 0xe
    }; // Size: 0xf
    Params_InRange_FloatFloat params{};
    params.Value = (float)Value;
    params.Min = (float)Min;
    params.Max = (float)Max;
    params.InclusiveMin = (bool)InclusiveMin;
    params.InclusiveMax = (bool)InclusiveMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::GreaterEqual_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GreaterEqual_DateTimeDateTime"));
    struct Params_GreaterEqual_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GreaterEqual_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualExactly_Vector4Vector4(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualExactly_Vector4Vector4"));
    struct Params_EqualExactly_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_EqualExactly_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    B = params.B;
    A = params.A;
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetDay(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetDay"));
    struct Params_GetDay {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetDay params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetMathLibrary::GreaterEqual_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GreaterEqual_ByteByte"));
    struct Params_GreaterEqual_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_GreaterEqual_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Greater_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Greater_TimespanTimespan"));
    struct Params_Greater_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Greater_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Greater_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Greater_IntInt"));
    struct Params_Greater_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Greater_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Greater_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Greater_FloatFloat"));
    struct Params_Greater_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Greater_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::Atan2(float Y, float X) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Atan2"));
    struct Params_Atan2 {
        float Y; // 0x0
        float X; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Atan2 params{};
    params.Y = (float)Y;
    params.X = (float)X;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UKismetMathLibrary::Greater_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Greater_DateTimeDateTime"));
    struct Params_Greater_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Greater_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetYear(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetYear"));
    struct Params_GetYear {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetYear params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector UKismetMathLibrary::GetUpVector(FRotator InRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetUpVector"));
    struct Params_GetUpVector {
        FRotator InRot; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetUpVector params{};
    params.InRot = (FRotator)InRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetMathLibrary::GetTotalSeconds(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetTotalSeconds"));
    struct Params_GetTotalSeconds {
        FTimespan A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTotalSeconds params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::GetTotalMinutes(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetTotalMinutes"));
    struct Params_GetTotalMinutes {
        FTimespan A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTotalMinutes params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DynamicWeightedMovingAverage_Float"));
    struct Params_DynamicWeightedMovingAverage_Float {
        float CurrentSample; // 0x0
        float PreviousSample; // 0x4
        float MaxDistance; // 0x8
        float MinWeight; // 0xc
        float MaxWeight; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_DynamicWeightedMovingAverage_Float params{};
    params.CurrentSample = (float)CurrentSample;
    params.PreviousSample = (float)PreviousSample;
    params.MaxDistance = (float)MaxDistance;
    params.MinWeight = (float)MinWeight;
    params.MaxWeight = (float)MaxWeight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::GetTotalMilliseconds(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetTotalMilliseconds"));
    struct Params_GetTotalMilliseconds {
        FTimespan A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTotalMilliseconds params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::GetTotalHours(FTimespan A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetTotalHours"));
    struct Params_GetTotalHours {
        FTimespan A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTotalHours params{};
    params.A = (FTimespan)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FTimespan UKismetMathLibrary::GetTimeOfDay(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetTimeOfDay"));
    struct Params_GetTimeOfDay {
        FDateTime A; // 0x0
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTimeOfDay params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
void UKismetMathLibrary::GetSlopeDegreeAngles(FVector& MyRightYAxis, FVector& FloorNormal, FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetSlopeDegreeAngles"));
    struct Params_GetSlopeDegreeAngles {
        FVector MyRightYAxis; // 0x0
        FVector FloorNormal; // 0xc
        FVector UpVector; // 0x18
        float OutSlopePitchDegreeAngle; // 0x24
        float OutSlopeRollDegreeAngle; // 0x28
    }; // Size: 0x2c
    Params_GetSlopeDegreeAngles params{};
    params.MyRightYAxis = (FVector)MyRightYAxis;
    params.FloorNormal = (FVector)FloorNormal;
    params.UpVector = (FVector)UpVector;
    params.OutSlopePitchDegreeAngle = (float)OutSlopePitchDegreeAngle;
    params.OutSlopeRollDegreeAngle = (float)OutSlopeRollDegreeAngle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MyRightYAxis = params.MyRightYAxis;
    FloorNormal = params.FloorNormal;
    UpVector = params.UpVector;
    OutSlopePitchDegreeAngle = params.OutSlopePitchDegreeAngle;
    OutSlopeRollDegreeAngle = params.OutSlopeRollDegreeAngle;
}
int32_t UKismetMathLibrary::GetSecond(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetSecond"));
    struct Params_GetSecond {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSecond params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::GetMinElement(FVector A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMinElement"));
    struct Params_GetMinElement {
        FVector A; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetMinElement params{};
    params.A = (FVector)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D UKismetMathLibrary::GetRotated2D(FVector2D A, float AngleDeg) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetRotated2D"));
    struct Params_GetRotated2D {
        FVector2D A; // 0x0
        float AngleDeg; // 0x8
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_GetRotated2D params{};
    params.A = (FVector2D)A;
    params.AngleDeg = (float)AngleDeg;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector UKismetMathLibrary::GetRightVector(FRotator InRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetRightVector"));
    struct Params_GetRightVector {
        FRotator InRot; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetRightVector params{};
    params.InRot = (FRotator)InRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::BooleanXOR(bool A, bool B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BooleanXOR"));
    struct Params_BooleanXOR {
        bool A; // 0x0
        bool B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BooleanXOR params{};
    params.A = (bool)A;
    params.B = (bool)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::GetPointDistanceToSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetPointDistanceToSegment"));
    struct Params_GetPointDistanceToSegment {
        FVector Point; // 0x0
        FVector SegmentStart; // 0xc
        FVector SegmentEnd; // 0x18
        float ReturnValue; // 0x24
    }; // Size: 0x28
    Params_GetPointDistanceToSegment params{};
    params.Point = (FVector)Point;
    params.SegmentStart = (FVector)SegmentStart;
    params.SegmentEnd = (FVector)SegmentEnd;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::GetPI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetPI"));
    struct Params_GetPI {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPI params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetMinute(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMinute"));
    struct Params_GetMinute {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMinute params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UKismetMathLibrary::GetMillisecond(FDateTime A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMillisecond"));
    struct Params_GetMillisecond {
        FDateTime A; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMillisecond params{};
    params.A = (FDateTime)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::GetMax2D(FVector2D A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetMax2D"));
    struct Params_GetMax2D {
        FVector2D A; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMax2D params{};
    params.A = (FVector2D)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::GetForwardVector(FRotator InRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetForwardVector"));
    struct Params_GetForwardVector {
        FRotator InRot; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetForwardVector params{};
    params.InRot = (FRotator)InRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UKismetMathLibrary::GetAxes(FRotator A, FVector& X, FVector& Y, FVector& Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.GetAxes"));
    struct Params_GetAxes {
        FRotator A; // 0x0
        FVector X; // 0xc
        FVector Y; // 0x18
        FVector Z; // 0x24
    }; // Size: 0x30
    Params_GetAxes params{};
    params.A = (FRotator)A;
    params.X = (FVector)X;
    params.Y = (FVector)Y;
    params.Z = (FVector)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    X = params.X;
    Y = params.Y;
    Z = params.Z;
}
int64_t UKismetMathLibrary::FTrunc64(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FTrunc64"));
    struct Params_FTrunc64 {
        float A; // 0x0
        char pad_4[0x4];
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FTrunc64 params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
int32_t UKismetMathLibrary::FTrunc(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FTrunc"));
    struct Params_FTrunc {
        float A; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_FTrunc params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FTimespan UKismetMathLibrary::FromMinutes(float Minutes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FromMinutes"));
    struct Params_FromMinutes {
        float Minutes; // 0x0
        char pad_4[0x4];
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FromMinutes params{};
    params.Minutes = (float)Minutes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FVector UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor InLinearColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_LinearColorToVector"));
    struct Params_Conv_LinearColorToVector {
        FLinearColor InLinearColor; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Conv_LinearColorToVector params{};
    params.InLinearColor = (FLinearColor)InLinearColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTimespan UKismetMathLibrary::FromMilliseconds(float Milliseconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FromMilliseconds"));
    struct Params_FromMilliseconds {
        float Milliseconds; // 0x0
        char pad_4[0x4];
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FromMilliseconds params{};
    params.Milliseconds = (float)Milliseconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FTimespan UKismetMathLibrary::FromHours(float Hours) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FromHours"));
    struct Params_FromHours {
        float Hours; // 0x0
        char pad_4[0x4];
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FromHours params{};
    params.Hours = (float)Hours;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Divide_IntPointIntPoint(FIntPoint A, FIntPoint B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_IntPointIntPoint"));
    struct Params_Divide_IntPointIntPoint {
        FIntPoint A; // 0x0
        FIntPoint B; // 0x8
        FIntPoint ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Divide_IntPointIntPoint params{};
    params.A = (FIntPoint)A;
    params.B = (FIntPoint)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FTimespan UKismetMathLibrary::FromDays(float Days) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FromDays"));
    struct Params_FromDays {
        float Days; // 0x0
        char pad_4[0x4];
        FTimespan ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FromDays params{};
    params.Days = (float)Days;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
int32_t UKismetMathLibrary::FMod(float Dividend, float Divisor, float& Remainder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FMod"));
    struct Params_FMod {
        float Dividend; // 0x0
        float Divisor; // 0x4
        float Remainder; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FMod params{};
    params.Dividend = (float)Dividend;
    params.Divisor = (float)Divisor;
    params.Remainder = (float)Remainder;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Remainder = params.Remainder;
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::FMin(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FMin"));
    struct Params_FMin {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_FMin params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::FixedTurn(float InCurrent, float InDesired, float InDeltaRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FixedTurn"));
    struct Params_FixedTurn {
        float InCurrent; // 0x0
        float InDesired; // 0x4
        float InDeltaRate; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FixedTurn params{};
    params.InCurrent = (float)InCurrent;
    params.InDesired = (float)InDesired;
    params.InDeltaRate = (float)InDeltaRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FInterpTo"));
    struct Params_FInterpTo {
        float Current; // 0x0
        float Target; // 0x4
        float DeltaTime; // 0x8
        float InterpSpeed; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_FInterpTo params{};
    params.Current = (float)Current;
    params.Target = (float)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetMathLibrary::FindNearestPointsOnLineSegments(FVector Segment1Start, FVector Segment1End, FVector Segment2Start, FVector Segment2End, FVector& Segment1Point, FVector& Segment2Point) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FindNearestPointsOnLineSegments"));
    struct Params_FindNearestPointsOnLineSegments {
        FVector Segment1Start; // 0x0
        FVector Segment1End; // 0xc
        FVector Segment2Start; // 0x18
        FVector Segment2End; // 0x24
        FVector Segment1Point; // 0x30
        FVector Segment2Point; // 0x3c
    }; // Size: 0x48
    Params_FindNearestPointsOnLineSegments params{};
    params.Segment1Start = (FVector)Segment1Start;
    params.Segment1End = (FVector)Segment1End;
    params.Segment2Start = (FVector)Segment2Start;
    params.Segment2End = (FVector)Segment2End;
    params.Segment1Point = (FVector)Segment1Point;
    params.Segment2Point = (FVector)Segment2Point;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Segment1Point = params.Segment1Point;
    Segment2Point = params.Segment2Point;
}
FRotator UKismetMathLibrary::FindLookAtRotation(FVector& Start, FVector& Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FindLookAtRotation"));
    struct Params_FindLookAtRotation {
        FVector Start; // 0x0
        FVector Target; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_FindLookAtRotation params{};
    params.Start = (FVector)Start;
    params.Target = (FVector)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Start = params.Start;
    Target = params.Target;
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::FindClosestPointOnSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FindClosestPointOnSegment"));
    struct Params_FindClosestPointOnSegment {
        FVector Point; // 0x0
        FVector SegmentStart; // 0xc
        FVector SegmentEnd; // 0x18
        FVector ReturnValue; // 0x24
    }; // Size: 0x30
    Params_FindClosestPointOnSegment params{};
    params.Point = (FVector)Point;
    params.SegmentStart = (FVector)SegmentStart;
    params.SegmentEnd = (FVector)SegmentEnd;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UKismetMathLibrary::FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FindClosestPointOnLine"));
    struct Params_FindClosestPointOnLine {
        FVector Point; // 0x0
        FVector LineOrigin; // 0xc
        FVector LineDirection; // 0x18
        FVector ReturnValue; // 0x24
    }; // Size: 0x30
    Params_FindClosestPointOnLine params{};
    params.Point = (FVector)Point;
    params.LineOrigin = (FVector)LineOrigin;
    params.LineDirection = (FVector)LineDirection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int64_t UKismetMathLibrary::FFloor64(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FFloor64"));
    struct Params_FFloor64 {
        float A; // 0x0
        char pad_4[0x4];
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FFloor64 params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
int64_t UKismetMathLibrary::FCeil64(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FCeil64"));
    struct Params_FCeil64 {
        float A; // 0x0
        char pad_4[0x4];
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FCeil64 params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
int32_t UKismetMathLibrary::FCeil(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.FCeil"));
    struct Params_FCeil {
        float A; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_FCeil params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetMathLibrary::EqualExactly_Vector2DVector2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualExactly_Vector2DVector2D"));
    struct Params_EqualExactly_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualExactly_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::DynamicWeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DynamicWeightedMovingAverage_FVector"));
    struct Params_DynamicWeightedMovingAverage_FVector {
        FVector CurrentSample; // 0x0
        FVector PreviousSample; // 0xc
        float MaxDistance; // 0x18
        float MinWeight; // 0x1c
        float MaxWeight; // 0x20
        FVector ReturnValue; // 0x24
    }; // Size: 0x30
    Params_DynamicWeightedMovingAverage_FVector params{};
    params.CurrentSample = (FVector)CurrentSample;
    params.PreviousSample = (FVector)PreviousSample;
    params.MaxDistance = (float)MaxDistance;
    params.MinWeight = (float)MinWeight;
    params.MaxWeight = (float)MaxWeight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_Vector4Vector4(FVector4& A, FVector4& B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_Vector4Vector4"));
    struct Params_EqualEqual_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        float ErrorTolerance; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_EqualEqual_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_Vector2DVector2D"));
    struct Params_EqualEqual_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        float ErrorTolerance; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_EqualEqual_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    params.ErrorTolerance = (float)ErrorTolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_TransformTransform(FTransform& A, FTransform& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_TransformTransform"));
    struct Params_EqualEqual_TransformTransform {
        FTransform A; // 0x0
        FTransform B; // 0x30
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_EqualEqual_TransformTransform params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_TimespanTimespan(FTimespan A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_TimespanTimespan"));
    struct Params_EqualEqual_TimespanTimespan {
        FTimespan A; // 0x0
        FTimespan B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_TimespanTimespan params{};
    params.A = (FTimespan)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_QuatQuat(FQuat& A, FQuat& B, float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_QuatQuat"));
    struct Params_EqualEqual_QuatQuat {
        FQuat A; // 0x0
        FQuat B; // 0x10
        float Tolerance; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_EqualEqual_QuatQuat params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    params.Tolerance = (float)Tolerance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_NameName(FName A, FName B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_NameName"));
    struct Params_EqualEqual_NameName {
        FName A; // 0x0
        FName B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_NameName params{};
    params.A = (FName)A;
    params.B = (FName)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_LinearColorLinearColor"));
    struct Params_EqualEqual_LinearColorLinearColor {
        FLinearColor A; // 0x0
        FLinearColor B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_EqualEqual_LinearColorLinearColor params{};
    params.A = (FLinearColor)A;
    params.B = (FLinearColor)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Conv_VectorToVector2D(FVector InVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_VectorToVector2D"));
    struct Params_Conv_VectorToVector2D {
        FVector InVector; // 0x0
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Conv_VectorToVector2D params{};
    params.InVector = (FVector)InVector;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_IntInt"));
    struct Params_EqualEqual_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EqualEqual_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UKismetMathLibrary::Cross_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Cross_VectorVector"));
    struct Params_Cross_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_Cross_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_Int64Int64"));
    struct Params_EqualEqual_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_DateTimeDateTime"));
    struct Params_EqualEqual_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_ClassClass(UClass* A, UClass* B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_ClassClass"));
    struct Params_EqualEqual_ClassClass {
        UClass* A; // 0x0
        UClass* B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_ClassClass params{};
    params.A = (UClass*)A;
    params.B = (UClass*)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_ByteByte"));
    struct Params_EqualEqual_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_EqualEqual_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::EqualEqual_BoolBool(bool A, bool B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.EqualEqual_BoolBool"));
    struct Params_EqualEqual_BoolBool {
        bool A; // 0x0
        bool B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_EqualEqual_BoolBool params{};
    params.A = (bool)A;
    params.B = (bool)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::Equal_IntPointIntPoint(FIntPoint A, FIntPoint B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Equal_IntPointIntPoint"));
    struct Params_Equal_IntPointIntPoint {
        FIntPoint A; // 0x0
        FIntPoint B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Equal_IntPointIntPoint params{};
    params.A = (FIntPoint)A;
    params.B = (FIntPoint)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FRotator UKismetMathLibrary::DynamicWeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DynamicWeightedMovingAverage_FRotator"));
    struct Params_DynamicWeightedMovingAverage_FRotator {
        FRotator CurrentSample; // 0x0
        FRotator PreviousSample; // 0xc
        float MaxDistance; // 0x18
        float MinWeight; // 0x1c
        float MaxWeight; // 0x20
        FRotator ReturnValue; // 0x24
    }; // Size: 0x30
    Params_DynamicWeightedMovingAverage_FRotator params{};
    params.CurrentSample = (FRotator)CurrentSample;
    params.PreviousSample = (FRotator)PreviousSample;
    params.MaxDistance = (float)MaxDistance;
    params.MinWeight = (float)MinWeight;
    params.MaxWeight = (float)MaxWeight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void UKismetMathLibrary::BreakQualifiedFrameTime(FQualifiedFrameTime& InFrameTime, FFrameNumber& Frame, FFrameRate& FrameRate, float& SubFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakQualifiedFrameTime"));
    struct Params_BreakQualifiedFrameTime {
        FQualifiedFrameTime InFrameTime; // 0x0
        FFrameNumber Frame; // 0x10
        FFrameRate FrameRate; // 0x14
        float SubFrame; // 0x1c
    }; // Size: 0x20
    Params_BreakQualifiedFrameTime params{};
    params.InFrameTime = (FQualifiedFrameTime)InFrameTime;
    params.Frame = (FFrameNumber)Frame;
    params.FrameRate = (FFrameRate)FrameRate;
    params.SubFrame = (float)SubFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFrameTime = params.InFrameTime;
    Frame = params.Frame;
    FrameRate = params.FrameRate;
    SubFrame = params.SubFrame;
}
float UKismetMathLibrary::DotProduct2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DotProduct2D"));
    struct Params_DotProduct2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_DotProduct2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Dot_VectorVector(FVector A, FVector B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Dot_VectorVector"));
    struct Params_Dot_VectorVector {
        FVector A; // 0x0
        FVector B; // 0xc
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Dot_VectorVector params{};
    params.A = (FVector)A;
    params.B = (FVector)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetMathLibrary::Divide_VectorInt(FVector A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_VectorInt"));
    struct Params_Divide_VectorInt {
        FVector A; // 0x0
        int32_t B; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Divide_VectorInt params{};
    params.A = (FVector)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Divide_Vector4Vector4(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_Vector4Vector4"));
    struct Params_Divide_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Divide_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FVector4)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Conv_TransformToMatrix(FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_TransformToMatrix"));
    struct Params_Conv_TransformToMatrix {
        FTransform Transform; // 0x0
        FMatrix ReturnValue; // 0x30
    }; // Size: 0x70
    Params_Conv_TransformToMatrix params{};
    params.Transform = (FTransform)Transform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (FMatrix)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Divide_Vector2DVector2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_Vector2DVector2D"));
    struct Params_Divide_Vector2DVector2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Divide_Vector2DVector2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Divide_Vector2DFloat(FVector2D A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_Vector2DFloat"));
    struct Params_Divide_Vector2DFloat {
        FVector2D A; // 0x0
        float B; // 0x8
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Divide_Vector2DFloat params{};
    params.A = (FVector2D)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FTimespan UKismetMathLibrary::Divide_TimespanFloat(FTimespan A, float Scalar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_TimespanFloat"));
    struct Params_Divide_TimespanFloat {
        FTimespan A; // 0x0
        float Scalar; // 0x8
        char pad_c[0x4];
        FTimespan ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Divide_TimespanFloat params{};
    params.A = (FTimespan)A;
    params.Scalar = (float)Scalar;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Divide_IntPointInt(FIntPoint A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_IntPointInt"));
    struct Params_Divide_IntPointInt {
        FIntPoint A; // 0x0
        int32_t B; // 0x8
        FIntPoint ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Divide_IntPointInt params{};
    params.A = (FIntPoint)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
int32_t UKismetMathLibrary::Divide_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_IntInt"));
    struct Params_Divide_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Divide_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UKismetMathLibrary::Divide_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_FloatFloat"));
    struct Params_Divide_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Divide_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Divide_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Divide_ByteByte"));
    struct Params_Divide_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        uint8_t ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Divide_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
float UKismetMathLibrary::DistanceSquared2D(FVector2D v1, FVector2D v2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DistanceSquared2D"));
    struct Params_DistanceSquared2D {
        FVector2D v1; // 0x0
        FVector2D v2; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_DistanceSquared2D params{};
    params.v1 = (FVector2D)v1;
    params.v2 = (FVector2D)v2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FTransform UKismetMathLibrary::Conv_VectorToTransform(FVector InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_VectorToTransform"));
    struct Params_Conv_VectorToTransform {
        FVector InLocation; // 0x0
        char pad_c[0x4];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_Conv_VectorToTransform params{};
    params.InLocation = (FVector)InLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
float UKismetMathLibrary::Distance2D(FVector2D v1, FVector2D v2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Distance2D"));
    struct Params_Distance2D {
        FVector2D v1; // 0x0
        FVector2D v2; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Distance2D params{};
    params.v1 = (FVector2D)v1;
    params.v2 = (FVector2D)v2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::DegTan(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegTan"));
    struct Params_DegTan {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DegTan params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UKismetMathLibrary::Conv_VectorToRotator(FVector InVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_VectorToRotator"));
    struct Params_Conv_VectorToRotator {
        FVector InVec; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Conv_VectorToRotator params{};
    params.InVec = (FVector)InVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
float UKismetMathLibrary::DegSin(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegSin"));
    struct Params_DegSin {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DegSin params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::Abs(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Abs"));
    struct Params_Abs {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Abs params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetMathLibrary::DegCos(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DegCos"));
    struct Params_DegCos {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DegCos params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::DaysInYear(int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DaysInYear"));
    struct Params_DaysInYear {
        int32_t Year; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DaysInYear params{};
    params.Year = (int32_t)Year;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetMathLibrary::DateTimeFromIsoString(FString IsoString, FDateTime& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DateTimeFromIsoString"));
    struct Params_DateTimeFromIsoString {
        FString IsoString; // 0x0
        FDateTime Result; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_DateTimeFromIsoString params{};
    params.IsoString = (FString)IsoString;
    params.Result = (FDateTime)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (bool)params.ReturnValue;
}
FDateTime UKismetMathLibrary::DateTimeMaxValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DateTimeMaxValue"));
    struct Params_DateTimeMaxValue {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_DateTimeMaxValue params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
FVector UKismetMathLibrary::Conv_Vector4ToVector(FVector4& InVector4) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_Vector4ToVector"));
    struct Params_Conv_Vector4ToVector {
        FVector4 InVector4; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Conv_Vector4ToVector params{};
    params.InVector4 = (FVector4)InVector4;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InVector4 = params.InVector4;
    return (FVector)params.ReturnValue;
}
bool UKismetMathLibrary::DateTimeFromString(FString DateTimeString, FDateTime& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.DateTimeFromString"));
    struct Params_DateTimeFromString {
        FString DateTimeString; // 0x0
        FDateTime Result; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_DateTimeFromString params{};
    params.DateTimeString = (FString)DateTimeString;
    params.Result = (FDateTime)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::CrossProduct2D(FVector2D A, FVector2D B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.CrossProduct2D"));
    struct Params_CrossProduct2D {
        FVector2D A; // 0x0
        FVector2D B; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_CrossProduct2D params{};
    params.A = (FVector2D)A;
    params.B = (FVector2D)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FTransform UKismetMathLibrary::ConvertTransformToRelative(FTransform& Transform, FTransform& ParentTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ConvertTransformToRelative"));
    struct Params_ConvertTransformToRelative {
        FTransform Transform; // 0x0
        FTransform ParentTransform; // 0x30
        FTransform ReturnValue; // 0x60
    }; // Size: 0x90
    Params_ConvertTransformToRelative params{};
    params.Transform = (FTransform)Transform;
    params.ParentTransform = (FTransform)ParentTransform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    ParentTransform = params.ParentTransform;
    return (FTransform)params.ReturnValue;
}
FQuat UKismetMathLibrary::Conv_VectorToQuaternion(FVector InVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_VectorToQuaternion"));
    struct Params_Conv_VectorToQuaternion {
        FVector InVec; // 0x0
        char pad_c[0x4];
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_VectorToQuaternion params{};
    params.InVec = (FVector)InVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
FRotator UKismetMathLibrary::Conv_Vector4ToRotator(FVector4& InVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_Vector4ToRotator"));
    struct Params_Conv_Vector4ToRotator {
        FVector4 InVec; // 0x0
        FRotator ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_Conv_Vector4ToRotator params{};
    params.InVec = (FVector4)InVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InVec = params.InVec;
    return (FRotator)params.ReturnValue;
}
void UKismetMathLibrary::BreakDateTime(FDateTime InDateTime, int32_t& Year, int32_t& Month, int32_t& Day, int32_t& Hour, int32_t& Minute, int32_t& Second, int32_t& Millisecond) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakDateTime"));
    struct Params_BreakDateTime {
        FDateTime InDateTime; // 0x0
        int32_t Year; // 0x8
        int32_t Month; // 0xc
        int32_t Day; // 0x10
        int32_t Hour; // 0x14
        int32_t Minute; // 0x18
        int32_t Second; // 0x1c
        int32_t Millisecond; // 0x20
    }; // Size: 0x24
    Params_BreakDateTime params{};
    params.InDateTime = (FDateTime)InDateTime;
    params.Year = (int32_t)Year;
    params.Month = (int32_t)Month;
    params.Day = (int32_t)Day;
    params.Hour = (int32_t)Hour;
    params.Minute = (int32_t)Minute;
    params.Second = (int32_t)Second;
    params.Millisecond = (int32_t)Millisecond;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Year = params.Year;
    Hour = params.Hour;
    Month = params.Month;
    Day = params.Day;
    Minute = params.Minute;
    Second = params.Second;
    Millisecond = params.Millisecond;
}
FVector UKismetMathLibrary::Conv_Vector2DToVector(FVector2D InVector2D, float Z) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_Vector2DToVector"));
    struct Params_Conv_Vector2DToVector {
        FVector2D InVector2D; // 0x0
        float Z; // 0x8
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Conv_Vector2DToVector params{};
    params.InVector2D = (FVector2D)InVector2D;
    params.Z = (float)Z;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Conv_Vector2DToIntPoint(FVector2D InVector2D) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_Vector2DToIntPoint"));
    struct Params_Conv_Vector2DToIntPoint {
        FVector2D InVector2D; // 0x0
        FIntPoint ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Conv_Vector2DToIntPoint params{};
    params.InVector2D = (FVector2D)InVector2D;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FVector UKismetMathLibrary::Conv_RotatorToVector(FRotator InRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_RotatorToVector"));
    struct Params_Conv_RotatorToVector {
        FRotator InRot; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Conv_RotatorToVector params{};
    params.InRot = (FRotator)InRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTransform UKismetMathLibrary::Conv_RotatorToTransform(FRotator& InRotator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_RotatorToTransform"));
    struct Params_Conv_RotatorToTransform {
        FRotator InRotator; // 0x0
        char pad_c[0x4];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_Conv_RotatorToTransform params{};
    params.InRotator = (FRotator)InRotator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InRotator = params.InRotator;
    return (FTransform)params.ReturnValue;
}
FTransform UKismetMathLibrary::Conv_MatrixToTransform(FMatrix& InMatrix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_MatrixToTransform"));
    struct Params_Conv_MatrixToTransform {
        FMatrix InMatrix; // 0x0
        FTransform ReturnValue; // 0x40
    }; // Size: 0x70
    Params_Conv_MatrixToTransform params{};
    params.InMatrix = (FMatrix)InMatrix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMatrix = params.InMatrix;
    return (FTransform)params.ReturnValue;
}
FIntVector UKismetMathLibrary::Conv_IntToIntVector(int32_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_IntToIntVector"));
    struct Params_Conv_IntToIntVector {
        int32_t inInt; // 0x0
        FIntVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_Conv_IntToIntVector params{};
    params.inInt = (int32_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntVector)params.ReturnValue;
}
int64_t UKismetMathLibrary::Conv_IntToInt64(int32_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_IntToInt64"));
    struct Params_Conv_IntToInt64 {
        int32_t inInt; // 0x0
        char pad_4[0x4];
        int64_t ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Conv_IntToInt64 params{};
    params.inInt = (int32_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Conv_IntToByte(int32_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_IntToByte"));
    struct Params_Conv_IntToByte {
        int32_t inInt; // 0x0
        uint8_t ReturnValue; // 0x4
    }; // Size: 0x5
    Params_Conv_IntToByte params{};
    params.inInt = (int32_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
bool UKismetMathLibrary::Conv_IntToBool(int32_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_IntToBool"));
    struct Params_Conv_IntToBool {
        int32_t inInt; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_Conv_IntToBool params{};
    params.inInt = (int32_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UKismetMathLibrary::Conv_IntPointToVector2D(FIntPoint InIntPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_IntPointToVector2D"));
    struct Params_Conv_IntPointToVector2D {
        FIntPoint InIntPoint; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Conv_IntPointToVector2D params{};
    params.InIntPoint = (FIntPoint)InIntPoint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
bool UKismetMathLibrary::BooleanNOR(bool A, bool B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BooleanNOR"));
    struct Params_BooleanNOR {
        bool A; // 0x0
        bool B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BooleanNOR params{};
    params.A = (bool)A;
    params.B = (bool)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Conv_Int64ToByte(int64_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_Int64ToByte"));
    struct Params_Conv_Int64ToByte {
        int64_t inInt; // 0x0
        uint8_t ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Conv_Int64ToByte params{};
    params.inInt = (int64_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
FVector UKismetMathLibrary::Conv_FloatToVector(float InFloat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_FloatToVector"));
    struct Params_Conv_FloatToVector {
        float InFloat; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_Conv_FloatToVector params{};
    params.InFloat = (float)InFloat;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::Conv_FloatToLinearColor(float InFloat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_FloatToLinearColor"));
    struct Params_Conv_FloatToLinearColor {
        float InFloat; // 0x0
        FLinearColor ReturnValue; // 0x4
    }; // Size: 0x14
    Params_Conv_FloatToLinearColor params{};
    params.InFloat = (float)InFloat;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::Conv_ColorToLinearColor(FColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_ColorToLinearColor"));
    struct Params_Conv_ColorToLinearColor {
        FColor InColor; // 0x0
        FLinearColor ReturnValue; // 0x4
    }; // Size: 0x14
    Params_Conv_ColorToLinearColor params{};
    params.InColor = (FColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
int32_t UKismetMathLibrary::Conv_BoolToInt(bool InBool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_BoolToInt"));
    struct Params_Conv_BoolToInt {
        bool InBool; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Conv_BoolToInt params{};
    params.InBool = (bool)InBool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
uint8_t UKismetMathLibrary::BMin(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BMin"));
    struct Params_BMin {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        uint8_t ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BMin params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
float UKismetMathLibrary::Conv_BoolToFloat(bool InBool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_BoolToFloat"));
    struct Params_Conv_BoolToFloat {
        bool InBool; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Conv_BoolToFloat params{};
    params.InBool = (bool)InBool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Conv_BoolToByte(bool InBool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Conv_BoolToByte"));
    struct Params_Conv_BoolToByte {
        bool InBool; // 0x0
        uint8_t ReturnValue; // 0x1
    }; // Size: 0x2
    Params_Conv_BoolToByte params{};
    params.InBool = (bool)InBool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
FTransform UKismetMathLibrary::ComposeTransforms(FTransform& A, FTransform& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ComposeTransforms"));
    struct Params_ComposeTransforms {
        FTransform A; // 0x0
        FTransform B; // 0x30
        FTransform ReturnValue; // 0x60
    }; // Size: 0x90
    Params_ComposeTransforms params{};
    params.A = (FTransform)A;
    params.B = (FTransform)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FTransform)params.ReturnValue;
}
FRotator UKismetMathLibrary::ComposeRotators(FRotator A, FRotator B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ComposeRotators"));
    struct Params_ComposeRotators {
        FRotator A; // 0x0
        FRotator B; // 0xc
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_ComposeRotators params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UKismetMathLibrary::ClampVectorSize(FVector A, float Min, float Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ClampVectorSize"));
    struct Params_ClampVectorSize {
        FVector A; // 0x0
        float Min; // 0xc
        float Max; // 0x10
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_ClampVectorSize params{};
    params.A = (FVector)A;
    params.Min = (float)Min;
    params.Max = (float)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int64_t UKismetMathLibrary::ClampInt64(int64_t Value, int64_t Min, int64_t Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ClampInt64"));
    struct Params_ClampInt64 {
        int64_t Value; // 0x0
        int64_t Min; // 0x8
        int64_t Max; // 0x10
        int64_t ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ClampInt64 params{};
    params.Value = (int64_t)Value;
    params.Min = (int64_t)Min;
    params.Max = (int64_t)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
float UKismetMathLibrary::ClampAxis(float Angle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ClampAxis"));
    struct Params_ClampAxis {
        float Angle; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_ClampAxis params{};
    params.Angle = (float)Angle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D UKismetMathLibrary::ClampAxes2D(FVector2D A, float MinAxisVal, float MaxAxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ClampAxes2D"));
    struct Params_ClampAxes2D {
        FVector2D A; // 0x0
        float MinAxisVal; // 0x8
        float MaxAxisVal; // 0xc
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ClampAxes2D params{};
    params.A = (FVector2D)A;
    params.MinAxisVal = (float)MinAxisVal;
    params.MaxAxisVal = (float)MaxAxisVal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UKismetMathLibrary::ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.ClampAngle"));
    struct Params_ClampAngle {
        float AngleDegrees; // 0x0
        float MinAngleDegrees; // 0x4
        float MaxAngleDegrees; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_ClampAngle params{};
    params.AngleDegrees = (float)AngleDegrees;
    params.MinAngleDegrees = (float)MinAngleDegrees;
    params.MaxAngleDegrees = (float)MaxAngleDegrees;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::Clamp(int32_t Value, int32_t Min, int32_t Max) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Clamp"));
    struct Params_Clamp {
        int32_t Value; // 0x0
        int32_t Min; // 0x4
        int32_t Max; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Clamp params{};
    params.Value = (int32_t)Value;
    params.Min = (int32_t)Min;
    params.Max = (int32_t)Max;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FLinearColor UKismetMathLibrary::CInterpTo(FLinearColor Current, FLinearColor Target, float DeltaTime, float InterpSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.CInterpTo"));
    struct Params_CInterpTo {
        FLinearColor Current; // 0x0
        FLinearColor Target; // 0x10
        float DeltaTime; // 0x20
        float InterpSpeed; // 0x24
        FLinearColor ReturnValue; // 0x28
    }; // Size: 0x38
    Params_CInterpTo params{};
    params.Current = (FLinearColor)Current;
    params.Target = (FLinearColor)Target;
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
int32_t UKismetMathLibrary::Add_IntInt(int32_t A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_IntInt"));
    struct Params_Add_IntInt {
        int32_t A; // 0x0
        int32_t B; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Add_IntInt params{};
    params.A = (int32_t)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKismetMathLibrary::BreakVector4(FVector4& InVec, float& X, float& Y, float& Z, float& W) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakVector4"));
    struct Params_BreakVector4 {
        FVector4 InVec; // 0x0
        float X; // 0x10
        float Y; // 0x14
        float Z; // 0x18
        float W; // 0x1c
    }; // Size: 0x20
    Params_BreakVector4 params{};
    params.InVec = (FVector4)InVec;
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.W = (float)W;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    W = params.W;
    InVec = params.InVec;
    Y = params.Y;
    X = params.X;
    Z = params.Z;
}
void UKismetMathLibrary::BreakVector2D(FVector2D InVec, float& X, float& Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakVector2D"));
    struct Params_BreakVector2D {
        FVector2D InVec; // 0x0
        float X; // 0x8
        float Y; // 0xc
    }; // Size: 0x10
    Params_BreakVector2D params{};
    params.InVec = (FVector2D)InVec;
    params.X = (float)X;
    params.Y = (float)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    X = params.X;
    Y = params.Y;
}
void UKismetMathLibrary::BreakTransform(FTransform& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakTransform"));
    struct Params_BreakTransform {
        FTransform InTransform; // 0x0
        FVector Location; // 0x30
        FRotator Rotation; // 0x3c
        FVector Scale; // 0x48
    }; // Size: 0x54
    Params_BreakTransform params{};
    params.InTransform = (FTransform)InTransform;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Scale = (FVector)Scale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTransform = params.InTransform;
    Location = params.Location;
    Rotation = params.Rotation;
    Scale = params.Scale;
}
void UKismetMathLibrary::BreakTimespan2(FTimespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& FractionNano) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakTimespan2"));
    struct Params_BreakTimespan2 {
        FTimespan InTimespan; // 0x0
        int32_t Days; // 0x8
        int32_t Hours; // 0xc
        int32_t Minutes; // 0x10
        int32_t Seconds; // 0x14
        int32_t FractionNano; // 0x18
    }; // Size: 0x1c
    Params_BreakTimespan2 params{};
    params.InTimespan = (FTimespan)InTimespan;
    params.Days = (int32_t)Days;
    params.Hours = (int32_t)Hours;
    params.Minutes = (int32_t)Minutes;
    params.Seconds = (int32_t)Seconds;
    params.FractionNano = (int32_t)FractionNano;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Seconds = params.Seconds;
    Days = params.Days;
    Hours = params.Hours;
    Minutes = params.Minutes;
    FractionNano = params.FractionNano;
}
void UKismetMathLibrary::BreakRandomStream(FRandomStream& InRandomStream, int32_t& InitialSeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BreakRandomStream"));
    struct Params_BreakRandomStream {
        FRandomStream InRandomStream; // 0x0
        int32_t InitialSeed; // 0x8
    }; // Size: 0xc
    Params_BreakRandomStream params{};
    params.InRandomStream = (FRandomStream)InRandomStream;
    params.InitialSeed = (int32_t)InitialSeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InRandomStream = params.InRandomStream;
    InitialSeed = params.InitialSeed;
}
bool UKismetMathLibrary::BooleanOR(bool A, bool B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BooleanOR"));
    struct Params_BooleanOR {
        bool A; // 0x0
        bool B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BooleanOR params{};
    params.A = (bool)A;
    params.B = (bool)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::BooleanNAND(bool A, bool B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BooleanNAND"));
    struct Params_BooleanNAND {
        bool A; // 0x0
        bool B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BooleanNAND params{};
    params.A = (bool)A;
    params.B = (bool)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetMathLibrary::BooleanAND(bool A, bool B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.BooleanAND"));
    struct Params_BooleanAND {
        bool A; // 0x0
        bool B; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BooleanAND params{};
    params.A = (bool)A;
    params.B = (bool)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetMathLibrary::Atan(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Atan"));
    struct Params_Atan {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Atan params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector4 UKismetMathLibrary::Add_Vector4Vector4(FVector4& A, FVector4& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_Vector4Vector4"));
    struct Params_Add_Vector4Vector4 {
        FVector4 A; // 0x0
        FVector4 B; // 0x10
        FVector4 ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Add_Vector4Vector4 params{};
    params.A = (FVector4)A;
    params.B = (FVector4)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FVector4)params.ReturnValue;
}
FQuat UKismetMathLibrary::Add_QuatQuat(FQuat& A, FQuat& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_QuatQuat"));
    struct Params_Add_QuatQuat {
        FQuat A; // 0x0
        FQuat B; // 0x10
        FQuat ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Add_QuatQuat params{};
    params.A = (FQuat)A;
    params.B = (FQuat)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (FQuat)params.ReturnValue;
}
FMatrix UKismetMathLibrary::Add_MatrixMatrix(FMatrix& A, FMatrix& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_MatrixMatrix"));
    struct Params_Add_MatrixMatrix {
        FMatrix A; // 0x0
        FMatrix B; // 0x40
        FMatrix ReturnValue; // 0x80
    }; // Size: 0xc0
    Params_Add_MatrixMatrix params{};
    params.A = (FMatrix)A;
    params.B = (FMatrix)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    B = params.B;
    A = params.A;
    return (FMatrix)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Add_IntPointIntPoint(FIntPoint A, FIntPoint B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_IntPointIntPoint"));
    struct Params_Add_IntPointIntPoint {
        FIntPoint A; // 0x0
        FIntPoint B; // 0x8
        FIntPoint ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Add_IntPointIntPoint params{};
    params.A = (FIntPoint)A;
    params.B = (FIntPoint)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
FIntPoint UKismetMathLibrary::Add_IntPointInt(FIntPoint A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_IntPointInt"));
    struct Params_Add_IntPointInt {
        FIntPoint A; // 0x0
        int32_t B; // 0x8
        FIntPoint ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Add_IntPointInt params{};
    params.A = (FIntPoint)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
int64_t UKismetMathLibrary::Add_Int64Int64(int64_t A, int64_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_Int64Int64"));
    struct Params_Add_Int64Int64 {
        int64_t A; // 0x0
        int64_t B; // 0x8
        int64_t ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Add_Int64Int64 params{};
    params.A = (int64_t)A;
    params.B = (int64_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
float UKismetMathLibrary::Add_FloatFloat(float A, float B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_FloatFloat"));
    struct Params_Add_FloatFloat {
        float A; // 0x0
        float B; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Add_FloatFloat params{};
    params.A = (float)A;
    params.B = (float)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FDateTime UKismetMathLibrary::Add_DateTimeTimespan(FDateTime A, FTimespan B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_DateTimeTimespan"));
    struct Params_Add_DateTimeTimespan {
        FDateTime A; // 0x0
        FTimespan B; // 0x8
        FDateTime ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Add_DateTimeTimespan params{};
    params.A = (FDateTime)A;
    params.B = (FTimespan)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
FDateTime UKismetMathLibrary::Add_DateTimeDateTime(FDateTime A, FDateTime B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_DateTimeDateTime"));
    struct Params_Add_DateTimeDateTime {
        FDateTime A; // 0x0
        FDateTime B; // 0x8
        FDateTime ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Add_DateTimeDateTime params{};
    params.A = (FDateTime)A;
    params.B = (FDateTime)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
uint8_t UKismetMathLibrary::Add_ByteByte(uint8_t A, uint8_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Add_ByteByte"));
    struct Params_Add_ByteByte {
        uint8_t A; // 0x0
        uint8_t B; // 0x1
        uint8_t ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Add_ByteByte params{};
    params.A = (uint8_t)A;
    params.B = (uint8_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
float UKismetMathLibrary::Acos(float A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Acos"));
    struct Params_Acos {
        float A; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Acos params{};
    params.A = (float)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKismetMathLibrary::Abs_Int(int32_t A) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetMathLibrary.Abs_Int"));
    struct Params_Abs_Int {
        int32_t A; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Abs_Int params{};
    params.A = (int32_t)A;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
