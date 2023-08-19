#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFoodsMathHelpers.hpp"
#include "UFunction.hpp"
UFoodsMathHelpers* UFoodsMathHelpers::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FoodsMathHelpers");
    return (UFoodsMathHelpers*)res;
}
void UFoodsMathHelpers::RotationSafePerp(FVector& UnitA, FVector& UnitB, FVector& SafePerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationSafePerp"));
    struct Params_RotationSafePerp {
        FVector UnitA; // 0x0
        FVector UnitB; // 0xc
        FVector SafePerp; // 0x18
    }; // Size: 0x24
    Params_RotationSafePerp params{};
    params.UnitA = (FVector)UnitA;
    params.UnitB = (FVector)UnitB;
    params.SafePerp = (FVector)SafePerp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    UnitA = params.UnitA;
    UnitB = params.UnitB;
    SafePerp = params.SafePerp;
}
void UFoodsMathHelpers::TriangleWave(float Time, float Period, float& Output, float Amplitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.TriangleWave"));
    struct Params_TriangleWave {
        float Time; // 0x0
        float Period; // 0x4
        float Output; // 0x8
        float Amplitude; // 0xc
    }; // Size: 0x10
    Params_TriangleWave params{};
    params.Time = (float)Time;
    params.Period = (float)Period;
    params.Output = (float)Output;
    params.Amplitude = (float)Amplitude;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Output = params.Output;
}
void UFoodsMathHelpers::RotationFromUnitZXSafe(FVector UnitZ, FVector UnitX, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitZXSafe"));
    struct Params_RotationFromUnitZXSafe {
        FVector UnitZ; // 0x0
        FVector UnitX; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitZXSafe params{};
    params.UnitZ = (FVector)UnitZ;
    params.UnitX = (FVector)UnitX;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::UniformPointsOnSphere(int32_t NumPoints, TArray<FVector>& PointsOnSphere) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.UniformPointsOnSphere"));
    struct Params_UniformPointsOnSphere {
        int32_t NumPoints; // 0x0
        char pad_4[0x4];
        TArray<FVector> PointsOnSphere; // 0x8
    }; // Size: 0x18
    Params_UniformPointsOnSphere params{};
    params.NumPoints = (int32_t)NumPoints;
    params.PointsOnSphere = (TArray<FVector>)PointsOnSphere;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PointsOnSphere = params.PointsOnSphere;
}
void UFoodsMathHelpers::RotationSafeUp(FVector Unit, FVector& SafeUp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationSafeUp"));
    struct Params_RotationSafeUp {
        FVector Unit; // 0x0
        FVector SafeUp; // 0xc
    }; // Size: 0x18
    Params_RotationSafeUp params{};
    params.Unit = (FVector)Unit;
    params.SafeUp = (FVector)SafeUp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SafeUp = params.SafeUp;
}
void UFoodsMathHelpers::UniformPointOnSphere(int32_t NumPoints, int32_t Point, FVector& PointOnSphere) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.UniformPointOnSphere"));
    struct Params_UniformPointOnSphere {
        int32_t NumPoints; // 0x0
        int32_t Point; // 0x4
        FVector PointOnSphere; // 0x8
    }; // Size: 0x14
    Params_UniformPointOnSphere params{};
    params.NumPoints = (int32_t)NumPoints;
    params.Point = (int32_t)Point;
    params.PointOnSphere = (FVector)PointOnSphere;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PointOnSphere = params.PointOnSphere;
}
void UFoodsMathHelpers::TriangleWaveSine(float Time, float Period, float& Output, float Amplitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.TriangleWaveSine"));
    struct Params_TriangleWaveSine {
        float Time; // 0x0
        float Period; // 0x4
        float Output; // 0x8
        float Amplitude; // 0xc
    }; // Size: 0x10
    Params_TriangleWaveSine params{};
    params.Time = (float)Time;
    params.Period = (float)Period;
    params.Output = (float)Output;
    params.Amplitude = (float)Amplitude;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Output = params.Output;
}
void UFoodsMathHelpers::TriangleWaveCosine(float Time, float Period, float& Output, float Amplitude, float Phase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.TriangleWaveCosine"));
    struct Params_TriangleWaveCosine {
        float Time; // 0x0
        float Period; // 0x4
        float Output; // 0x8
        float Amplitude; // 0xc
        float Phase; // 0x10
    }; // Size: 0x14
    Params_TriangleWaveCosine params{};
    params.Time = (float)Time;
    params.Period = (float)Period;
    params.Output = (float)Output;
    params.Amplitude = (float)Amplitude;
    params.Phase = (float)Phase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Output = params.Output;
}
void UFoodsMathHelpers::RotationFromUnitZYSafe(FVector UnitZ, FVector UnitY, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitZYSafe"));
    struct Params_RotationFromUnitZYSafe {
        FVector UnitZ; // 0x0
        FVector UnitY; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitZYSafe params{};
    params.UnitZ = (FVector)UnitZ;
    params.UnitY = (FVector)UnitY;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitZY(FVector UnitZ, FVector UnitY, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitZY"));
    struct Params_RotationFromUnitZY {
        FVector UnitZ; // 0x0
        FVector UnitY; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitZY params{};
    params.UnitZ = (FVector)UnitZ;
    params.UnitY = (FVector)UnitY;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitZX(FVector UnitZ, FVector UnitX, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitZX"));
    struct Params_RotationFromUnitZX {
        FVector UnitZ; // 0x0
        FVector UnitX; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitZX params{};
    params.UnitZ = (FVector)UnitZ;
    params.UnitX = (FVector)UnitX;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitZ(FVector UnitZ, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitZ"));
    struct Params_RotationFromUnitZ {
        FVector UnitZ; // 0x0
        FRotator Rotation; // 0xc
    }; // Size: 0x18
    Params_RotationFromUnitZ params{};
    params.UnitZ = (FVector)UnitZ;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitXZSafe(FVector UnitX, FVector UnitZ, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitXZSafe"));
    struct Params_RotationFromUnitXZSafe {
        FVector UnitX; // 0x0
        FVector UnitZ; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitXZSafe params{};
    params.UnitX = (FVector)UnitX;
    params.UnitZ = (FVector)UnitZ;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitYZSafe(FVector UnitY, FVector UnitZ, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitYZSafe"));
    struct Params_RotationFromUnitYZSafe {
        FVector UnitY; // 0x0
        FVector UnitZ; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitYZSafe params{};
    params.UnitY = (FVector)UnitY;
    params.UnitZ = (FVector)UnitZ;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitYZ(FVector UnitY, FVector UnitZ, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitYZ"));
    struct Params_RotationFromUnitYZ {
        FVector UnitY; // 0x0
        FVector UnitZ; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitYZ params{};
    params.UnitY = (FVector)UnitY;
    params.UnitZ = (FVector)UnitZ;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitYXSafe(FVector UnitY, FVector UnitX, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitYXSafe"));
    struct Params_RotationFromUnitYXSafe {
        FVector UnitY; // 0x0
        FVector UnitX; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitYXSafe params{};
    params.UnitY = (FVector)UnitY;
    params.UnitX = (FVector)UnitX;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitYX(FVector UnitY, FVector UnitX, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitYX"));
    struct Params_RotationFromUnitYX {
        FVector UnitY; // 0x0
        FVector UnitX; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitYX params{};
    params.UnitY = (FVector)UnitY;
    params.UnitX = (FVector)UnitX;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitY(FVector UnitY, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitY"));
    struct Params_RotationFromUnitY {
        FVector UnitY; // 0x0
        FRotator Rotation; // 0xc
    }; // Size: 0x18
    Params_RotationFromUnitY params{};
    params.UnitY = (FVector)UnitY;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitXZ(FVector UnitX, FVector UnitZ, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitXZ"));
    struct Params_RotationFromUnitXZ {
        FVector UnitX; // 0x0
        FVector UnitZ; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitXZ params{};
    params.UnitX = (FVector)UnitX;
    params.UnitZ = (FVector)UnitZ;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitXYSafe(FVector UnitX, FVector UnitY, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitXYSafe"));
    struct Params_RotationFromUnitXYSafe {
        FVector UnitX; // 0x0
        FVector UnitY; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitXYSafe params{};
    params.UnitX = (FVector)UnitX;
    params.UnitY = (FVector)UnitY;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitXY(FVector UnitX, FVector UnitY, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitXY"));
    struct Params_RotationFromUnitXY {
        FVector UnitX; // 0x0
        FVector UnitY; // 0xc
        FRotator Rotation; // 0x18
    }; // Size: 0x24
    Params_RotationFromUnitXY params{};
    params.UnitX = (FVector)UnitX;
    params.UnitY = (FVector)UnitY;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RotationFromUnitX(FVector UnitX, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RotationFromUnitX"));
    struct Params_RotationFromUnitX {
        FVector UnitX; // 0x0
        FRotator Rotation; // 0xc
    }; // Size: 0x18
    Params_RotationFromUnitX params{};
    params.UnitX = (FVector)UnitX;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void UFoodsMathHelpers::RandomUniformPointsOnSphere(int32_t NumPoints, float RandomHalfAngleDegrees, TArray<FVector>& PointsOnSphere) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RandomUniformPointsOnSphere"));
    struct Params_RandomUniformPointsOnSphere {
        int32_t NumPoints; // 0x0
        float RandomHalfAngleDegrees; // 0x4
        TArray<FVector> PointsOnSphere; // 0x8
    }; // Size: 0x18
    Params_RandomUniformPointsOnSphere params{};
    params.NumPoints = (int32_t)NumPoints;
    params.RandomHalfAngleDegrees = (float)RandomHalfAngleDegrees;
    params.PointsOnSphere = (TArray<FVector>)PointsOnSphere;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PointsOnSphere = params.PointsOnSphere;
}
void UFoodsMathHelpers::RandomUniformPointOnSphere(int32_t NumPoints, int32_t Point, FVector& PointOnSphere, float RandomHalfAngleInnerDegrees, float RandomHalfAngleOuterDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RandomUniformPointOnSphere"));
    struct Params_RandomUniformPointOnSphere {
        int32_t NumPoints; // 0x0
        int32_t Point; // 0x4
        FVector PointOnSphere; // 0x8
        float RandomHalfAngleInnerDegrees; // 0x14
        float RandomHalfAngleOuterDegrees; // 0x18
    }; // Size: 0x1c
    Params_RandomUniformPointOnSphere params{};
    params.NumPoints = (int32_t)NumPoints;
    params.Point = (int32_t)Point;
    params.PointOnSphere = (FVector)PointOnSphere;
    params.RandomHalfAngleInnerDegrees = (float)RandomHalfAngleInnerDegrees;
    params.RandomHalfAngleOuterDegrees = (float)RandomHalfAngleOuterDegrees;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PointOnSphere = params.PointOnSphere;
}
void UFoodsMathHelpers::RandomInCone(FVector Direction, FVector& RandomDir, float HalfAngleInnerDegrees, float HalfAngleOuterDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.RandomInCone"));
    struct Params_RandomInCone {
        FVector Direction; // 0x0
        FVector RandomDir; // 0xc
        float HalfAngleInnerDegrees; // 0x18
        float HalfAngleOuterDegrees; // 0x1c
    }; // Size: 0x20
    Params_RandomInCone params{};
    params.Direction = (FVector)Direction;
    params.RandomDir = (FVector)RandomDir;
    params.HalfAngleInnerDegrees = (float)HalfAngleInnerDegrees;
    params.HalfAngleOuterDegrees = (float)HalfAngleOuterDegrees;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RandomDir = params.RandomDir;
}
void UFoodsMathHelpers::MakeOrthogonalUnitVector(FVector In, FVector& Orthoganal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoodsMathHelpers.MakeOrthogonalUnitVector"));
    struct Params_MakeOrthogonalUnitVector {
        FVector In; // 0x0
        FVector Orthoganal; // 0xc
    }; // Size: 0x18
    Params_MakeOrthogonalUnitVector params{};
    params.In = (FVector)In;
    params.Orthoganal = (FVector)Orthoganal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Orthoganal = params.Orthoganal;
}
