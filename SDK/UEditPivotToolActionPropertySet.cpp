#include "UEditPivotToolActionPropertySet.hpp"
#include "UFunction.hpp"
#include "UInteractiveToolPropertySet.hpp"
UEditPivotToolActionPropertySet* UEditPivotToolActionPropertySet::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditPivotToolActionPropertySet");
    return (UEditPivotToolActionPropertySet*)res;
}
void UEditPivotToolActionPropertySet::Left() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Left"));
    struct Params_Left {
    }; // Size: 0x0
    Params_Left params{};
    ProcessEvent(func, &params);
}
void UEditPivotToolActionPropertySet::Top() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Top"));
    struct Params_Top {
    }; // Size: 0x0
    Params_Top params{};
    ProcessEvent(func, &params);
}
void UEditPivotToolActionPropertySet::Right() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Right"));
    struct Params_Right {
    }; // Size: 0x0
    Params_Right params{};
    ProcessEvent(func, &params);
}
void UEditPivotToolActionPropertySet::Back() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Back"));
    struct Params_Back {
    }; // Size: 0x0
    Params_Back params{};
    ProcessEvent(func, &params);
}
void UEditPivotToolActionPropertySet::Center() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Center"));
    struct Params_Center {
    }; // Size: 0x0
    Params_Center params{};
    ProcessEvent(func, &params);
}
void UEditPivotToolActionPropertySet::Front() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Front"));
    struct Params_Front {
    }; // Size: 0x0
    Params_Front params{};
    ProcessEvent(func, &params);
}
void UEditPivotToolActionPropertySet::Bottom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Bottom"));
    struct Params_Bottom {
    }; // Size: 0x0
    Params_Bottom params{};
    ProcessEvent(func, &params);
}
