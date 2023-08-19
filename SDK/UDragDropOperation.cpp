#include "EDragPivot.hpp"
#include "FPointerEvent.hpp"
#include "FVector2D.hpp"
#include "UDragDropOperation.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWidget.hpp"
UDragDropOperation* UDragDropOperation::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.DragDropOperation");
    return (UDragDropOperation*)res;
}
void UDragDropOperation::Drop(FPointerEvent& PointerEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DragDropOperation.Drop"));
    struct Params_Drop {
        FPointerEvent PointerEvent; // 0x0
    }; // Size: 0x70
    Params_Drop params{};
    params.PointerEvent = (FPointerEvent)PointerEvent;
    ProcessEvent(func, &params);
    PointerEvent = params.PointerEvent;
}
void UDragDropOperation::Dragged(FPointerEvent& PointerEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DragDropOperation.Dragged"));
    struct Params_Dragged {
        FPointerEvent PointerEvent; // 0x0
    }; // Size: 0x70
    Params_Dragged params{};
    params.PointerEvent = (FPointerEvent)PointerEvent;
    ProcessEvent(func, &params);
    PointerEvent = params.PointerEvent;
}
void UDragDropOperation::DragCancelled(FPointerEvent& PointerEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DragDropOperation.DragCancelled"));
    struct Params_DragCancelled {
        FPointerEvent PointerEvent; // 0x0
    }; // Size: 0x70
    Params_DragCancelled params{};
    params.PointerEvent = (FPointerEvent)PointerEvent;
    ProcessEvent(func, &params);
    PointerEvent = params.PointerEvent;
}
