#include "UFunction.hpp"
#include "UMeshSelectionEditActions.hpp"
#include "UMeshSelectionToolActionPropertySet.hpp"
void UMeshSelectionEditActions::OptimizeSelection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.OptimizeSelection"));
    struct Params_OptimizeSelection {
    }; // Size: 0x0
    Params_OptimizeSelection params{};
    ProcessEvent(func, &params);
}
UMeshSelectionEditActions* UMeshSelectionEditActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSelectionEditActions");
    return (UMeshSelectionEditActions*)res;
}
void UMeshSelectionEditActions::Grow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.Grow"));
    struct Params_Grow {
    }; // Size: 0x0
    Params_Grow params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionEditActions::SelectAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.SelectAll"));
    struct Params_SelectAll {
    }; // Size: 0x0
    Params_SelectAll params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionEditActions::Invert() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.Invert"));
    struct Params_Invert {
    }; // Size: 0x0
    Params_Invert params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionEditActions::Shrink() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.Shrink"));
    struct Params_Shrink {
    }; // Size: 0x0
    Params_Shrink params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionEditActions::SelectLargestComponentByTriCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount"));
    struct Params_SelectLargestComponentByTriCount {
    }; // Size: 0x0
    Params_SelectLargestComponentByTriCount params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionEditActions::SelectLargestComponentByArea() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea"));
    struct Params_SelectLargestComponentByArea {
    }; // Size: 0x0
    Params_SelectLargestComponentByArea params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionEditActions::ExpandToConnected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.ExpandToConnected"));
    struct Params_ExpandToConnected {
    }; // Size: 0x0
    Params_ExpandToConnected params{};
    ProcessEvent(func, &params);
}
void UMeshSelectionEditActions::Clear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MeshSelectionEditActions.Clear"));
    struct Params_Clear {
    }; // Size: 0x0
    Params_Clear params{};
    ProcessEvent(func, &params);
}
