#include "UFunction.hpp"
#include "UMeshSelectionMeshEditActions.hpp"
#include "UMeshSelectionToolActionPropertySet.hpp"
UMeshSelectionMeshEditActions* UMeshSelectionMeshEditActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSelectionMeshEditActions");
    return (UMeshSelectionMeshEditActions*)res;
}
void UMeshSelectionMeshEditActions::SeparateTriangles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles"));
    struct Params_SeparateTriangles {
    }; // Size: 0x0
    Params_SeparateTriangles params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionMeshEditActions::CreatePolygroup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup"));
    struct Params_CreatePolygroup {
    }; // Size: 0x0
    Params_CreatePolygroup params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionMeshEditActions::FlipNormals() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals"));
    struct Params_FlipNormals {
    }; // Size: 0x0
    Params_FlipNormals params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionMeshEditActions::DeleteTriangles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles"));
    struct Params_DeleteTriangles {
    }; // Size: 0x0
    Params_DeleteTriangles params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionMeshEditActions::DisconnectTriangles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles"));
    struct Params_DisconnectTriangles {
    }; // Size: 0x0
    Params_DisconnectTriangles params{};
    ProcessEvent(func, &params);
}
