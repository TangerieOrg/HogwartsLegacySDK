#pragma once
#include <cstdint>
#include "ESplineMeshAxis\Type.hpp"
#include "FGuid.hpp"
#include "FSplineMeshParams.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UStaticMeshComponent.hpp"
class UBodySetup;
#pragma pack(push, 1)
class USplineMeshComponent : public UStaticMeshComponent {
public:
    char pad_510[0x8];
    FSplineMeshParams SplineParams; // 0x518
    FVector SplineUpDir; // 0x570
    float SplineBoundaryMin; // 0x57c
    FGuid CachedMeshBodySetupGuid; // 0x580
    UBodySetup* BodySetup; // 0x590
    float SplineBoundaryMax; // 0x598
    uint8_t bAllowSplineEditingPerInstance : 1; // 0x59c
    uint8_t bSmoothInterpRollScale : 1; // 0x59c
    uint8_t bMeshDirty : 1; // 0x59c
    uint8_t pad_bitfield_59c_3 : 5;
    ESplineMeshAxis::Type ForwardAxis; // 0x59d
    char pad_59e[0x2];
    float VirtualTextureMainPassMaxDrawDistance; // 0x5a0
    char pad_5a4[0xc];
    static USplineMeshComponent* StaticClass();
    void UpdateMesh();
    void SetStartTangent(FVector StartTangent, bool bUpdateMesh);
    void SetStartScale(FVector2D StartScale, bool bUpdateMesh);
    void SetStartRoll(float StartRoll, bool bUpdateMesh);
    void SetStartPosition(FVector StartPos, bool bUpdateMesh);
    void SetStartOffset(FVector2D StartOffset, bool bUpdateMesh);
    void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh);
    void SetSplineUpDir(FVector& InSplineUpDir, bool bUpdateMesh);
    void SetForwardAxis(ESplineMeshAxis::Type InForwardAxis, bool bUpdateMesh);
    void SetEndTangent(FVector EndTangent, bool bUpdateMesh);
    void SetEndScale(FVector2D EndScale, bool bUpdateMesh);
    void SetEndRoll(float EndRoll, bool bUpdateMesh);
    void SetEndPosition(FVector EndPos, bool bUpdateMesh);
    void SetEndOffset(FVector2D EndOffset, bool bUpdateMesh);
    void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
    void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
    FVector GetStartTangent();
    FVector2D GetStartScale();
    float GetStartRoll();
    FVector GetStartPosition();
    FVector2D GetStartOffset();
    FVector GetSplineUpDir();
    ESplineMeshAxis::Type GetForwardAxis();
    FVector GetEndTangent();
    FVector2D GetEndScale();
    float GetEndRoll();
    FVector GetEndPosition();
    FVector2D GetEndOffset();
    float GetBoundaryMin();
    float GetBoundaryMax();
}; // Size: 0x5b0
#pragma pack(pop)
