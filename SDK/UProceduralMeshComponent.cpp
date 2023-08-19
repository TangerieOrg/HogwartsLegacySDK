#include "FBoxSphereBounds.hpp"
#include "FColor.hpp"
#include "FKConvexElem.hpp"
#include "FLinearColor.hpp"
#include "FProcMeshSection.hpp"
#include "FProcMeshTangent.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBodySetup.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UProceduralMeshComponent.hpp"
int32_t UProceduralMeshComponent::GetNumSections() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections"));
    struct Params_GetNumSections {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumSections params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UProceduralMeshComponent* UProceduralMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ProceduralMeshComponent.ProceduralMeshComponent");
    return (UProceduralMeshComponent*)res;
}
void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor"));
    struct Params_UpdateMeshSection_LinearColor {
        int32_t SectionIndex; // 0x0
        char pad_4[0x4];
        TArray<FVector> Vertices; // 0x8
        TArray<FVector> Normals; // 0x18
        TArray<FVector2D> UV0; // 0x28
        TArray<FVector2D> UV1; // 0x38
        TArray<FVector2D> UV2; // 0x48
        TArray<FVector2D> UV3; // 0x58
        TArray<FLinearColor> VertexColors; // 0x68
        TArray<FProcMeshTangent> Tangents; // 0x78
    }; // Size: 0x88
    Params_UpdateMeshSection_LinearColor params{};
    params.SectionIndex = (int32_t)SectionIndex;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Normals = (TArray<FVector>)Normals;
    params.UV0 = (TArray<FVector2D>)UV0;
    params.UV1 = (TArray<FVector2D>)UV1;
    params.UV2 = (TArray<FVector2D>)UV2;
    params.UV3 = (TArray<FVector2D>)UV3;
    params.VertexColors = (TArray<FLinearColor>)VertexColors;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    ProcessEvent(func, &params);
    Vertices = params.Vertices;
    UV2 = params.UV2;
    Normals = params.Normals;
    UV0 = params.UV0;
    VertexColors = params.VertexColors;
    UV1 = params.UV1;
    UV3 = params.UV3;
    Tangents = params.Tangents;
}
void UProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection"));
    struct Params_UpdateMeshSection {
        int32_t SectionIndex; // 0x0
        char pad_4[0x4];
        TArray<FVector> Vertices; // 0x8
        TArray<FVector> Normals; // 0x18
        TArray<FVector2D> UV0; // 0x28
        TArray<FColor> VertexColors; // 0x38
        TArray<FProcMeshTangent> Tangents; // 0x48
    }; // Size: 0x58
    Params_UpdateMeshSection params{};
    params.SectionIndex = (int32_t)SectionIndex;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Normals = (TArray<FVector>)Normals;
    params.UV0 = (TArray<FVector2D>)UV0;
    params.VertexColors = (TArray<FColor>)VertexColors;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    ProcessEvent(func, &params);
    Vertices = params.Vertices;
    Normals = params.Normals;
    UV0 = params.UV0;
    VertexColors = params.VertexColors;
    Tangents = params.Tangents;
}
bool UProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible"));
    struct Params_IsMeshSectionVisible {
        int32_t SectionIndex; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsMeshSectionVisible params{};
    params.SectionIndex = (int32_t)SectionIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible"));
    struct Params_SetMeshSectionVisible {
        int32_t SectionIndex; // 0x0
        bool bNewVisibility; // 0x4
    }; // Size: 0x5
    Params_SetMeshSectionVisible params{};
    params.SectionIndex = (int32_t)SectionIndex;
    params.bNewVisibility = (bool)bNewVisibility;
    ProcessEvent(func, &params);
}
void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor"));
    struct Params_CreateMeshSection_LinearColor {
        int32_t SectionIndex; // 0x0
        char pad_4[0x4];
        TArray<FVector> Vertices; // 0x8
        TArray<int32_t> Triangles; // 0x18
        TArray<FVector> Normals; // 0x28
        TArray<FVector2D> UV0; // 0x38
        TArray<FVector2D> UV1; // 0x48
        TArray<FVector2D> UV2; // 0x58
        TArray<FVector2D> UV3; // 0x68
        TArray<FLinearColor> VertexColors; // 0x78
        TArray<FProcMeshTangent> Tangents; // 0x88
        bool bCreateCollision; // 0x98
    }; // Size: 0x99
    Params_CreateMeshSection_LinearColor params{};
    params.SectionIndex = (int32_t)SectionIndex;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Normals = (TArray<FVector>)Normals;
    params.UV0 = (TArray<FVector2D>)UV0;
    params.UV1 = (TArray<FVector2D>)UV1;
    params.UV2 = (TArray<FVector2D>)UV2;
    params.UV3 = (TArray<FVector2D>)UV3;
    params.VertexColors = (TArray<FLinearColor>)VertexColors;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    params.bCreateCollision = (bool)bCreateCollision;
    ProcessEvent(func, &params);
    Vertices = params.Vertices;
    Triangles = params.Triangles;
    UV0 = params.UV0;
    Normals = params.Normals;
    UV1 = params.UV1;
    UV2 = params.UV2;
    UV3 = params.UV3;
    VertexColors = params.VertexColors;
    Tangents = params.Tangents;
}
void UProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection"));
    struct Params_CreateMeshSection {
        int32_t SectionIndex; // 0x0
        char pad_4[0x4];
        TArray<FVector> Vertices; // 0x8
        TArray<int32_t> Triangles; // 0x18
        TArray<FVector> Normals; // 0x28
        TArray<FVector2D> UV0; // 0x38
        TArray<FColor> VertexColors; // 0x48
        TArray<FProcMeshTangent> Tangents; // 0x58
        bool bCreateCollision; // 0x68
    }; // Size: 0x69
    Params_CreateMeshSection params{};
    params.SectionIndex = (int32_t)SectionIndex;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Normals = (TArray<FVector>)Normals;
    params.UV0 = (TArray<FVector2D>)UV0;
    params.VertexColors = (TArray<FColor>)VertexColors;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    params.bCreateCollision = (bool)bCreateCollision;
    ProcessEvent(func, &params);
    Vertices = params.Vertices;
    Triangles = params.Triangles;
    Normals = params.Normals;
    UV0 = params.UV0;
    VertexColors = params.VertexColors;
    Tangents = params.Tangents;
}
void UProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection"));
    struct Params_ClearMeshSection {
        int32_t SectionIndex; // 0x0
    }; // Size: 0x4
    Params_ClearMeshSection params{};
    params.SectionIndex = (int32_t)SectionIndex;
    ProcessEvent(func, &params);
}
void UProceduralMeshComponent::ClearCollisionConvexMeshes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes"));
    struct Params_ClearCollisionConvexMeshes {
    }; // Size: 0x0
    Params_ClearCollisionConvexMeshes params{};
    ProcessEvent(func, &params);
}
void UProceduralMeshComponent::ClearAllMeshSections() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections"));
    struct Params_ClearAllMeshSections {
    }; // Size: 0x0
    Params_ClearAllMeshSections params{};
    ProcessEvent(func, &params);
}
void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<FVector> ConvexVerts) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh"));
    struct Params_AddCollisionConvexMesh {
        TArray<FVector> ConvexVerts; // 0x0
    }; // Size: 0x10
    Params_AddCollisionConvexMesh params{};
    params.ConvexVerts = (TArray<FVector>)ConvexVerts;
    ProcessEvent(func, &params);
}
