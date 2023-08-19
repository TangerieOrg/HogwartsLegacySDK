#include "UFunction.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UMirrorToolActionPropertySet.hpp"
void UMirrorToolActionPropertySet::ShiftToCenter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter"));
    struct Params_ShiftToCenter {
    }; // Size: 0x0
    Params_ShiftToCenter params{};
    ProcessEvent(func, &params);
}
UMirrorToolActionPropertySet* UMirrorToolActionPropertySet::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MirrorToolActionPropertySet");
    return (UMirrorToolActionPropertySet*)res;
}
void UMirrorToolActionPropertySet::Backward() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Backward"));
    struct Params_Backward {
    }; // Size: 0x0
    Params_Backward params{};
    ProcessEvent(func, &params);
}
void UMirrorToolActionPropertySet::Right() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Right"));
    struct Params_Right {
    }; // Size: 0x0
    Params_Right params{};
    ProcessEvent(func, &params);
}
void UMirrorToolActionPropertySet::Up() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Up"));
    struct Params_Up {
    }; // Size: 0x0
    Params_Up params{};
    ProcessEvent(func, &params);
}
void UMirrorToolActionPropertySet::Left() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Left"));
    struct Params_Left {
    }; // Size: 0x0
    Params_Left params{};
    ProcessEvent(func, &params);
}
void UMirrorToolActionPropertySet::Down() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Down"));
    struct Params_Down {
    }; // Size: 0x0
    Params_Down params{};
    ProcessEvent(func, &params);
}
void UMirrorToolActionPropertySet::Forward() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Forward"));
    struct Params_Forward {
    }; // Size: 0x0
    Params_Forward params{};
    ProcessEvent(func, &params);
}
