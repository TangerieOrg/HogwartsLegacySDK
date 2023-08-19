#include "EProcMeshSliceCapOption.hpp"
#include "FProcMeshTangent.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetProceduralMeshLibrary.hpp"
#include "UMaterialInterface.hpp"
#include "UProceduralMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>& Triangles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles"));
    struct Params_CreateGridMeshTriangles {
        int32_t NumX; // 0x0
        int32_t NumY; // 0x4
        bool bWinding; // 0x8
        char pad_9[0x7];
        TArray<int32_t> Triangles; // 0x10
    }; // Size: 0x20
    Params_CreateGridMeshTriangles params{};
    params.NumX = (int32_t)NumX;
    params.NumY = (int32_t)NumY;
    params.bWinding = (bool)bWinding;
    params.Triangles = (TArray<int32_t>)Triangles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Triangles = params.Triangles;
}
void UKismetProceduralMeshLibrary::GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh"));
    struct Params_GenerateBoxMesh {
        FVector BoxRadius; // 0x0
        char pad_c[0x4];
        TArray<FVector> Vertices; // 0x10
        TArray<int32_t> Triangles; // 0x20
        TArray<FVector> Normals; // 0x30
        TArray<FVector2D> UVs; // 0x40
        TArray<FProcMeshTangent> Tangents; // 0x50
    }; // Size: 0x60
    Params_GenerateBoxMesh params{};
    params.BoxRadius = (FVector)BoxRadius;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Normals = (TArray<FVector>)Normals;
    params.UVs = (TArray<FVector2D>)UVs;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Vertices = params.Vertices;
    Triangles = params.Triangles;
    Normals = params.Normals;
    Tangents = params.Tangents;
    UVs = params.UVs;
}
UKismetProceduralMeshLibrary* UKismetProceduralMeshLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary");
    return (UKismetProceduralMeshLibrary*)res;
}
void UKismetProceduralMeshLibrary::SliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh"));
    struct Params_SliceProceduralMesh {
        UProceduralMeshComponent* InProcMesh; // 0x0
        FVector PlanePosition; // 0x8
        FVector PlaneNormal; // 0x14
        bool bCreateOtherHalf; // 0x20
        char pad_21[0x7];
        UProceduralMeshComponent* OutOtherHalfProcMesh; // 0x28
        EProcMeshSliceCapOption CapOption; // 0x30
        char pad_31[0x7];
        UMaterialInterface* CapMaterial; // 0x38
    }; // Size: 0x40
    Params_SliceProceduralMesh params{};
    params.InProcMesh = (UProceduralMeshComponent*)InProcMesh;
    params.PlanePosition = (FVector)PlanePosition;
    params.PlaneNormal = (FVector)PlaneNormal;
    params.bCreateOtherHalf = (bool)bCreateOtherHalf;
    params.OutOtherHalfProcMesh = (UProceduralMeshComponent*)OutOtherHalfProcMesh;
    params.CapOption = (EProcMeshSliceCapOption)CapOption;
    params.CapMaterial = (UMaterialInterface*)CapMaterial;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;
}
void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit"));
    struct Params_CreateGridMeshSplit {
        int32_t NumX; // 0x0
        int32_t NumY; // 0x4
        TArray<int32_t> Triangles; // 0x8
        TArray<FVector> Vertices; // 0x18
        TArray<FVector2D> UVs; // 0x28
        TArray<FVector2D> UV1s; // 0x38
        float GridSpacing; // 0x48
    }; // Size: 0x4c
    Params_CreateGridMeshSplit params{};
    params.NumX = (int32_t)NumX;
    params.NumY = (int32_t)NumY;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Vertices = (TArray<FVector>)Vertices;
    params.UVs = (TArray<FVector2D>)UVs;
    params.UV1s = (TArray<FVector2D>)UV1s;
    params.GridSpacing = (float)GridSpacing;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Triangles = params.Triangles;
    Vertices = params.Vertices;
    UVs = params.UVs;
    UV1s = params.UV1s;
}
void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh"));
    struct Params_GetSectionFromStaticMesh {
        UStaticMesh* InMesh; // 0x0
        int32_t LODIndex; // 0x8
        int32_t SectionIndex; // 0xc
        TArray<FVector> Vertices; // 0x10
        TArray<int32_t> Triangles; // 0x20
        TArray<FVector> Normals; // 0x30
        TArray<FVector2D> UVs; // 0x40
        TArray<FProcMeshTangent> Tangents; // 0x50
    }; // Size: 0x60
    Params_GetSectionFromStaticMesh params{};
    params.InMesh = (UStaticMesh*)InMesh;
    params.LODIndex = (int32_t)LODIndex;
    params.SectionIndex = (int32_t)SectionIndex;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Normals = (TArray<FVector>)Normals;
    params.UVs = (TArray<FVector2D>)UVs;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Vertices = params.Vertices;
    Triangles = params.Triangles;
    Normals = params.Normals;
    UVs = params.UVs;
    Tangents = params.Tangents;
}
void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh"));
    struct Params_GetSectionFromProceduralMesh {
        UProceduralMeshComponent* InProcMesh; // 0x0
        int32_t SectionIndex; // 0x8
        char pad_c[0x4];
        TArray<FVector> Vertices; // 0x10
        TArray<int32_t> Triangles; // 0x20
        TArray<FVector> Normals; // 0x30
        TArray<FVector2D> UVs; // 0x40
        TArray<FProcMeshTangent> Tangents; // 0x50
    }; // Size: 0x60
    Params_GetSectionFromProceduralMesh params{};
    params.InProcMesh = (UProceduralMeshComponent*)InProcMesh;
    params.SectionIndex = (int32_t)SectionIndex;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Normals = (TArray<FVector>)Normals;
    params.UVs = (TArray<FVector2D>)UVs;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Vertices = params.Vertices;
    Tangents = params.Tangents;
    Triangles = params.Triangles;
    Normals = params.Normals;
    UVs = params.UVs;
}
void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded"));
    struct Params_CreateGridMeshWelded {
        int32_t NumX; // 0x0
        int32_t NumY; // 0x4
        TArray<int32_t> Triangles; // 0x8
        TArray<FVector> Vertices; // 0x18
        TArray<FVector2D> UVs; // 0x28
        float GridSpacing; // 0x38
    }; // Size: 0x3c
    Params_CreateGridMeshWelded params{};
    params.NumX = (int32_t)NumX;
    params.NumY = (int32_t)NumY;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Vertices = (TArray<FVector>)Vertices;
    params.UVs = (TArray<FVector2D>)UVs;
    params.GridSpacing = (float)GridSpacing;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Triangles = params.Triangles;
    Vertices = params.Vertices;
    UVs = params.UVs;
}
void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent"));
    struct Params_CopyProceduralMeshFromStaticMeshComponent {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        int32_t LODIndex; // 0x8
        char pad_c[0x4];
        UProceduralMeshComponent* ProcMeshComponent; // 0x10
        bool bCreateCollision; // 0x18
    }; // Size: 0x19
    Params_CopyProceduralMeshFromStaticMeshComponent params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    params.LODIndex = (int32_t)LODIndex;
    params.ProcMeshComponent = (UProceduralMeshComponent*)ProcMeshComponent;
    params.bCreateCollision = (bool)bCreateCollision;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles"));
    struct Params_ConvertQuadToTriangles {
        TArray<int32_t> Triangles; // 0x0
        int32_t Vert0; // 0x10
        int32_t Vert1; // 0x14
        int32_t Vert2; // 0x18
        int32_t Vert3; // 0x1c
    }; // Size: 0x20
    Params_ConvertQuadToTriangles params{};
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Vert0 = (int32_t)Vert0;
    params.Vert1 = (int32_t)Vert1;
    params.Vert2 = (int32_t)Vert2;
    params.Vert3 = (int32_t)Vert3;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Triangles = params.Triangles;
}
void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh"));
    struct Params_CalculateTangentsForMesh {
        TArray<FVector> Vertices; // 0x0
        TArray<int32_t> Triangles; // 0x10
        TArray<FVector2D> UVs; // 0x20
        TArray<FVector> Normals; // 0x30
        TArray<FProcMeshTangent> Tangents; // 0x40
    }; // Size: 0x50
    Params_CalculateTangentsForMesh params{};
    params.Vertices = (TArray<FVector>)Vertices;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.UVs = (TArray<FVector2D>)UVs;
    params.Normals = (TArray<FVector>)Normals;
    params.Tangents = (TArray<FProcMeshTangent>)Tangents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tangents = params.Tangents;
    Vertices = params.Vertices;
    Triangles = params.Triangles;
    UVs = params.UVs;
    Normals = params.Normals;
}
