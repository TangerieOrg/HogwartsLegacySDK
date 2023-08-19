#include "ESplineMeshAxis\Type.hpp"
#include "FGuid.hpp"
#include "FSplineMeshParams.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBodySetup.hpp"
#include "UFunction.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
void USplineMeshComponent::SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetStartAndEnd"));
    struct Params_SetStartAndEnd {
        FVector StartPos; // 0x0
        FVector StartTangent; // 0xc
        FVector EndPos; // 0x18
        FVector EndTangent; // 0x24
        bool bUpdateMesh; // 0x30
    }; // Size: 0x31
    Params_SetStartAndEnd params{};
    params.StartPos = (FVector)StartPos;
    params.StartTangent = (FVector)StartTangent;
    params.EndPos = (FVector)EndPos;
    params.EndTangent = (FVector)EndTangent;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
USplineMeshComponent* USplineMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SplineMeshComponent");
    return (USplineMeshComponent*)res;
}
void USplineMeshComponent::UpdateMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.UpdateMesh"));
    struct Params_UpdateMesh {
    }; // Size: 0x0
    Params_UpdateMesh params{};
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetBoundaryMin"));
    struct Params_SetBoundaryMin {
        float InBoundaryMin; // 0x0
        bool bUpdateMesh; // 0x4
    }; // Size: 0x5
    Params_SetBoundaryMin params{};
    params.InBoundaryMin = (float)InBoundaryMin;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetStartPosition(FVector StartPos, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetStartPosition"));
    struct Params_SetStartPosition {
        FVector StartPos; // 0x0
        bool bUpdateMesh; // 0xc
    }; // Size: 0xd
    Params_SetStartPosition params{};
    params.StartPos = (FVector)StartPos;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
ESplineMeshAxis::Type USplineMeshComponent::GetForwardAxis() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetForwardAxis"));
    struct Params_GetForwardAxis {
        ESplineMeshAxis::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetForwardAxis params{};
    ProcessEvent(func, &params);
    return (ESplineMeshAxis::Type)params.ReturnValue;
}
void USplineMeshComponent::SetStartTangent(FVector StartTangent, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetStartTangent"));
    struct Params_SetStartTangent {
        FVector StartTangent; // 0x0
        bool bUpdateMesh; // 0xc
    }; // Size: 0xd
    Params_SetStartTangent params{};
    params.StartTangent = (FVector)StartTangent;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetStartScale(FVector2D StartScale, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetStartScale"));
    struct Params_SetStartScale {
        FVector2D StartScale; // 0x0
        bool bUpdateMesh; // 0x8
    }; // Size: 0x9
    Params_SetStartScale params{};
    params.StartScale = (FVector2D)StartScale;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetStartRoll(float StartRoll, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetStartRoll"));
    struct Params_SetStartRoll {
        float StartRoll; // 0x0
        bool bUpdateMesh; // 0x4
    }; // Size: 0x5
    Params_SetStartRoll params{};
    params.StartRoll = (float)StartRoll;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetStartOffset(FVector2D StartOffset, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetStartOffset"));
    struct Params_SetStartOffset {
        FVector2D StartOffset; // 0x0
        bool bUpdateMesh; // 0x8
    }; // Size: 0x9
    Params_SetStartOffset params{};
    params.StartOffset = (FVector2D)StartOffset;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
FVector2D USplineMeshComponent::GetStartScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetStartScale"));
    struct Params_GetStartScale {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetStartScale params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void USplineMeshComponent::SetSplineUpDir(FVector& InSplineUpDir, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetSplineUpDir"));
    struct Params_SetSplineUpDir {
        FVector InSplineUpDir; // 0x0
        bool bUpdateMesh; // 0xc
    }; // Size: 0xd
    Params_SetSplineUpDir params{};
    params.InSplineUpDir = (FVector)InSplineUpDir;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
    InSplineUpDir = params.InSplineUpDir;
}
void USplineMeshComponent::SetForwardAxis(ESplineMeshAxis::Type InForwardAxis, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetForwardAxis"));
    struct Params_SetForwardAxis {
        ESplineMeshAxis::Type InForwardAxis; // 0x0
        bool bUpdateMesh; // 0x1
    }; // Size: 0x2
    Params_SetForwardAxis params{};
    params.InForwardAxis = (ESplineMeshAxis::Type)InForwardAxis;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetEndTangent(FVector EndTangent, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetEndTangent"));
    struct Params_SetEndTangent {
        FVector EndTangent; // 0x0
        bool bUpdateMesh; // 0xc
    }; // Size: 0xd
    Params_SetEndTangent params{};
    params.EndTangent = (FVector)EndTangent;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetEndScale(FVector2D EndScale, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetEndScale"));
    struct Params_SetEndScale {
        FVector2D EndScale; // 0x0
        bool bUpdateMesh; // 0x8
    }; // Size: 0x9
    Params_SetEndScale params{};
    params.EndScale = (FVector2D)EndScale;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetEndRoll(float EndRoll, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetEndRoll"));
    struct Params_SetEndRoll {
        float EndRoll; // 0x0
        bool bUpdateMesh; // 0x4
    }; // Size: 0x5
    Params_SetEndRoll params{};
    params.EndRoll = (float)EndRoll;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
FVector USplineMeshComponent::GetSplineUpDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetSplineUpDir"));
    struct Params_GetSplineUpDir {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSplineUpDir params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float USplineMeshComponent::GetStartRoll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetStartRoll"));
    struct Params_GetStartRoll {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStartRoll params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USplineMeshComponent::SetEndPosition(FVector EndPos, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetEndPosition"));
    struct Params_SetEndPosition {
        FVector EndPos; // 0x0
        bool bUpdateMesh; // 0xc
    }; // Size: 0xd
    Params_SetEndPosition params{};
    params.EndPos = (FVector)EndPos;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetEndOffset(FVector2D EndOffset, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetEndOffset"));
    struct Params_SetEndOffset {
        FVector2D EndOffset; // 0x0
        bool bUpdateMesh; // 0x8
    }; // Size: 0x9
    Params_SetEndOffset params{};
    params.EndOffset = (FVector2D)EndOffset;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
void USplineMeshComponent::SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.SetBoundaryMax"));
    struct Params_SetBoundaryMax {
        float InBoundaryMax; // 0x0
        bool bUpdateMesh; // 0x4
    }; // Size: 0x5
    Params_SetBoundaryMax params{};
    params.InBoundaryMax = (float)InBoundaryMax;
    params.bUpdateMesh = (bool)bUpdateMesh;
    ProcessEvent(func, &params);
}
FVector USplineMeshComponent::GetStartTangent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetStartTangent"));
    struct Params_GetStartTangent {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetStartTangent params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineMeshComponent::GetStartPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetStartPosition"));
    struct Params_GetStartPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetStartPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float USplineMeshComponent::GetBoundaryMin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetBoundaryMin"));
    struct Params_GetBoundaryMin {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBoundaryMin params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D USplineMeshComponent::GetStartOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetStartOffset"));
    struct Params_GetStartOffset {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetStartOffset params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector USplineMeshComponent::GetEndTangent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetEndTangent"));
    struct Params_GetEndTangent {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetEndTangent params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D USplineMeshComponent::GetEndScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetEndScale"));
    struct Params_GetEndScale {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEndScale params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float USplineMeshComponent::GetEndRoll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetEndRoll"));
    struct Params_GetEndRoll {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEndRoll params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector USplineMeshComponent::GetEndPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetEndPosition"));
    struct Params_GetEndPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetEndPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D USplineMeshComponent::GetEndOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetEndOffset"));
    struct Params_GetEndOffset {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEndOffset params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float USplineMeshComponent::GetBoundaryMax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineMeshComponent.GetBoundaryMax"));
    struct Params_GetBoundaryMax {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBoundaryMax params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
